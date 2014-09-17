/*
 * Packet.h
 *
 *  Created on: Feb 12, 2014
 *      Author: HAKJAE
 */

#ifndef PACKET_H_
#define PACKET_H_

#include "PacketHeader.h"
#include "OperationCode.h"

#include "FBase.h"

using namespace Tizen::Base;

class Packet {
public:
/* 생성자, 소멸자 */
	Packet();
	Packet(int opCode, byte* data, int dataLength);
	virtual ~Packet();

/* 멤버변수 */
public:
	static const int MAX_LENGTH = 4096;
	static const int MAX_PAYLOAD_LENGTH = MAX_LENGTH - PacketHeader::LENGTH;

	static byte packetBuffer[MAX_LENGTH];
	static byte payloadBuffer[MAX_PAYLOAD_LENGTH];
	byte* payload;

private:
	PacketHeader *header;

/* 멤버함수 */
public:
	byte* asByteArray();

	static Packet* parse(byte* rawPacket);

	/** Getter, Setter */
	PacketHeader* getHeader();
	void setHeader(PacketHeader *packetHeader);
	byte* getPayload();
	void setPayload(byte* payload);
	int getOpCode();
};

#endif /* PACKET_H_ */
