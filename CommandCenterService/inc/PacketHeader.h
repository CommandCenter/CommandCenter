/*
 * PacketHeader.h
 *
 *  Created on: Feb 12, 2014
 *      Author: HAKJAE
 */

#ifndef PACKETHEADER_H_
#define PACKETHEADER_H_

#include "OperationCode.h"
#include "FBase.h"
#include "LueseyPidUtil.h"

using namespace Tizen::Base;

class PacketHeader {
public:
/* 생성자, 소멸자 */
	PacketHeader();
	PacketHeader(int opCode, int payloadLength);
	virtual ~PacketHeader();

/* 멤버변수 */
public:
	static const int LENGTH=6;
	static const int OPCODE_LENGTH=2;
	static const int PAYLOAD_LENGTH=4;

private:
	int opCode;
	int payloadLength;

	static byte opCodeBuffer[OPCODE_LENGTH];
	static byte packetSizeBuffer[PAYLOAD_LENGTH];
	static byte heaerBuffer[OPCODE_LENGTH+PAYLOAD_LENGTH];

/* 멤버함수 */
public:
	byte* asByteArray();

	static int ByteToInt(byte* data, int dataLength);

	static PacketHeader* parse(byte* rawData);

	/** Getter, Setter **/
	int getOpCode();
	void setOpCode(int opCode);
	int getPayloadLength();
	int getPacketLength();
	void setPayloadLength(int payloadLength);
};

#endif /* PACKETHEADER_H_ */
