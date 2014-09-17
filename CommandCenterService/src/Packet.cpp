/*
 * Packet.cpp
 *
 *  Created on: Feb 12, 2014
 *      Author: HAKJAE
 */

#include "Packet.h"

byte Packet::packetBuffer[MAX_LENGTH];
byte Packet::payloadBuffer[MAX_PAYLOAD_LENGTH];

Packet::Packet() {}

Packet::Packet(int opCode, byte* data, int dataLength) {
	header=new PacketHeader(opCode, dataLength);
	payload=data;
}

Packet::~Packet() {}

byte* Packet::asByteArray() {
	memset(packetBuffer, 0, sizeof(packetBuffer));

	//TODO 예외처리 해야함!
	if(header==null) {
		AppLogException("Packet header has not been set");
	}

	ByteBuffer byteBuffer;
	byteBuffer.Construct(Packet::packetBuffer, 0, MAX_LENGTH, MAX_LENGTH);

	//Append header
	byte* headerData=header->asByteArray();
	byteBuffer.SetArray(headerData, 0, PacketHeader::LENGTH);

	//Append payload
	if(payload!=null) {
		byteBuffer.SetArray(payload, 0, MAX_PAYLOAD_LENGTH);
	}
	return byteBuffer.GetPointer();
}

Packet* Packet::parse(byte* rawPacket) {
	memset(payloadBuffer, 0, sizeof(payloadBuffer));

	Packet *packet=new Packet();

	//Get Header
	packet->setHeader(PacketHeader::parse(rawPacket));
	int payloadLength=packet->getHeader()->getPayloadLength();

	//Get data(payload)
	ByteBuffer byteBuffer;
	byteBuffer.Construct(Packet::payloadBuffer, 0, MAX_PAYLOAD_LENGTH, MAX_PAYLOAD_LENGTH);
	byteBuffer.SetArray(rawPacket, PacketHeader::LENGTH, payloadLength);
	packet->setPayload(byteBuffer.GetPointer());

	return packet;
}

PacketHeader* Packet::getHeader() {
	return this->header;
}

void Packet::setHeader(PacketHeader *packetHeader) {
	this->header=packetHeader;
}

byte* Packet::getPayload() {
	return payload;
}

void Packet::setPayload(byte* payload) {
	this->payload=payload;
}

int Packet::getOpCode() {
	return header->getOpCode();
}
