/*
 * ScreenSender.cpp
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#include "ScreenSender.h"

byte ScreenSender::sendBuffer[MAXDATASIZE];
byte ScreenSender::jpgSizeInfo[JPGINFOLENGTH];

ScreenSender::ScreenSender(Socket *socket)
	: PacketSender(socket) {

}

ScreenSender::~ScreenSender() {}

void
ScreenSender::screenTransmission(byte* jpgData, int orientation, int jpgSize) {

	int jpgTotalSize = jpgSize;
	int transmittedSize = 0;

	jpgSizeInfo[0] = (byte)orientation;
	int length = itoa(jpgTotalSize, jpgSizeInfo, 1)+ORIENTATION_INFO_LENGTH;

	//이미지 정보 전송
	Packet *jpgInfoPacket = new Packet(JPGINFO_SEND, jpgSizeInfo, length);
	send(jpgInfoPacket);

	//프레임 전송
	while(jpgTotalSize > transmittedSize) {
		int CurTransSize = (jpgTotalSize-transmittedSize) > MAXDATASIZE ?
				MAXDATASIZE : (jpgTotalSize-transmittedSize);

		/* 버퍼의 크기만큼 데이터를 복사 */
		ByteBuffer byteBuffer;
		byteBuffer.Construct(sendBuffer, 0, MAXDATASIZE, MAXDATASIZE);
		byteBuffer.SetArray(jpgData, transmittedSize, CurTransSize);
		transmittedSize += CurTransSize;

		Packet *jpgDataPacket = new Packet(JPGDATA_SEND, sendBuffer, CurTransSize);
		send(jpgDataPacket);
	}
}
