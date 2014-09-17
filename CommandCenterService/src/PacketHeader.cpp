/*
 * PacketHeader.cpp
 *
 *  Created on: Feb 12, 2014
 *      Author: HAKJAE
 */

#include "PacketHeader.h"

byte PacketHeader::heaerBuffer[OPCODE_LENGTH+PAYLOAD_LENGTH];
byte PacketHeader::packetSizeBuffer[PAYLOAD_LENGTH];
byte PacketHeader::opCodeBuffer[OPCODE_LENGTH];

PacketHeader::PacketHeader() {}

PacketHeader::PacketHeader(int opCode, int payloadLength) {
	this->opCode=opCode;
	this->payloadLength=payloadLength;
}

PacketHeader::~PacketHeader() {}

byte* PacketHeader::asByteArray() {
	itoa(this->opCode, PacketHeader::heaerBuffer, OPCODE_LENGTH, 0);
	itoa(this->payloadLength+LENGTH, PacketHeader::heaerBuffer, PAYLOAD_LENGTH, OPCODE_LENGTH);

	return PacketHeader::heaerBuffer;
}

int PacketHeader::ByteToInt(byte* data, int dataLength) {
	int result = 0;
	for(int i=0; i<dataLength; i++){
		if(data[i] == 32)	//data[i] 가 space일경우
			continue;
		result = result * 10 + (data[i]-'0');
	}
	return result;
}

PacketHeader* PacketHeader::parse(byte* rawData) {
	PacketHeader *header=new PacketHeader();

	ByteBuffer byteBuffer;
	byteBuffer.Construct(rawData, 0, LENGTH, LENGTH);


	byteBuffer.GetArray(PacketHeader::opCodeBuffer, 0, OPCODE_LENGTH);
	//for(int i=0; i<2; i++) {
	//	AppLog("Array(2) : %d", PacketHeader::opCodeBuffer[i]);
	//}
	header->setOpCode(ByteToInt(PacketHeader::opCodeBuffer, OPCODE_LENGTH));

	//AppLog("OPCODE : %d", header->getOpCode());



	byteBuffer.GetArray(PacketHeader::packetSizeBuffer, 0, PAYLOAD_LENGTH);
	//for(int i=0; i<4; i++) {
	//	AppLog("Array(4) : %d", PacketHeader::packetSizeBuffer[i]);
	//}



	header->setPayloadLength(
			ByteToInt(PacketHeader::packetSizeBuffer, PAYLOAD_LENGTH)	//4
			- PacketHeader::LENGTH);

	//AppLog("OPCODE : %d", header->getPayloadLength());


	return header;
}

int PacketHeader::getOpCode() {
	return opCode;
}

void PacketHeader::setOpCode(int opCode) {
	this->opCode=opCode;
}

int PacketHeader::getPayloadLength() {
	return payloadLength;
}

int PacketHeader::getPacketLength() {
	return LENGTH+payloadLength;
}

void PacketHeader::setPayloadLength(int payloadLength) {
	this->payloadLength=payloadLength;
}
