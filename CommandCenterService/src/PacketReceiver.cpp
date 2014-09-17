/*
 * PacketReceiver.cpp
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#include "PacketReceiver.h"

PacketReceiver::PacketReceiver(Socket *recvSocket) {
	this->recvSocket=recvSocket;
	bufferOffset=0;
	flag=false;
}

PacketReceiver::PacketReceiver(Socket *recvSocket, IPacketListener *packetListener) {
	this->recvSocket=recvSocket;
	this->packetListener=packetListener;
	bufferOffset=0;
}

PacketReceiver::~PacketReceiver() {
	// TODO Auto-generated destructor stub
}

void
PacketReceiver::setPacketListener(IPacketListener *listener) {
	this->packetListener=listener;
}

int PacketReceiver::readPacketDataFromSocket() {
	int readLen=0;

	result r=recvSocket->Receive(buffer, Packet::MAX_LENGTH, readLen);

	if(r!=E_SUCCESS) {
		return -1;
	}

	if(readLen>0)
		bufferOffset+=readLen;
	return readLen;
}

bool PacketReceiver::tryReadPacketData() {
	if(bufferOffset < PacketHeader::LENGTH)
		return false;

	// 전송받은 Buffer를 이용하여 Packet의 헤더를 가져옴
	PacketHeader *header = PacketHeader::parse(buffer);

	if(bufferOffset < header->getPacketLength())
		return false;

	packet=Packet::parse(buffer);
	bufferOffset-=header->getPacketLength();


	int length=header->getPacketLength();
	ByteBuffer byteBuffer;

	byteBuffer.Construct(buffer, 0, length, Packet::MAX_LENGTH*2);
	byteBuffer.SetArray(buffer, header->getPacketLength(), bufferOffset);
	return true;
}


Object* PacketReceiver::Run(void) {
	//AppLog("PacketReceiver Thread start");

	if(packetListener==null) {
		AppLog("Packet listener must be set first.");
	}

	while(true) {
		int readLen=readPacketDataFromSocket();
		AppLog("전송받음 : %d", readLen);

		if(readLen<=0) {
			//sendUser
			break;
		}

		while(tryReadPacketData()) {
			//AppLog("받아라 페킷 씨발");
			packetListener->onPacketReceived(packet);
		}
	}
	return null;
}




























