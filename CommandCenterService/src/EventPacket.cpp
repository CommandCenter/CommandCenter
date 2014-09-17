/*
 * EventPacket.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#include "EventPacket.h"

byte EventPacket::eventValueBuf[DATA_SIZE];
byte EventPacket::bEventCode[EVENTCODE_SIZE];

EventPacket::EventPacket() {
	// TODO Auto-generated constructor stub

}

EventPacket::~EventPacket() {
	// TODO Auto-generated destructor stub
}

int EventPacket::ByteToInt(byte* data, int dataLength) {
	int result = 0;
	for(int i=0; i<dataLength; i++){
		if(data[i] == 32)	//data[i] 가 space일경우
			continue;
		result = result * 10 + (data[i]-'0');
	}
	return result;
}

EventPacket* EventPacket::parse(Packet *packet) {
	EventPacket *eventPacket=new EventPacket();

	ByteBuffer byteBuffer;
	byteBuffer.Construct(packet->getPayload(), 0, 10, 10);


	byteBuffer.GetArray(EventPacket::bEventCode, 0, EVENTCODE_SIZE);
	eventPacket->SetEventCode(ByteToInt(EventPacket::bEventCode, EVENTCODE_SIZE));

	switch(eventPacket->GetEventCode()) {
	case SETCOORDINATES:
	case TOUCHDOWN:
		//X좌표
		memcpy(EventPacket::eventValueBuf,
				packet->getPayload()+EVENTCODE_SIZE,
				XPOSITION_SIZE);
		eventPacket->SetXPosition(ByteToInt(EventPacket::eventValueBuf, XPOSITION_SIZE));
		AppLog("%d", ByteToInt(EventPacket::eventValueBuf, XPOSITION_SIZE));

		//Y좌표
		memcpy(EventPacket::eventValueBuf,
				packet->getPayload()+XPOSITION_SIZE + EVENTCODE_SIZE,
				YPOSITION_SIZE);
		eventPacket->SetYPosition(ByteToInt(EventPacket::eventValueBuf, YPOSITION_SIZE));
		AppLog("%d, %d", eventPacket->GetXPosition(), eventPacket->GetYPosition());
		break;

	case KEYDOWN:
	case KEYUP:
		memcpy(EventPacket::eventValueBuf,
				packet->getPayload()+EVENTCODE_SIZE,
				XPOSITION_SIZE);
		eventPacket->SetKeyCode(ByteToInt(eventValueBuf, KEYCODE_SIZE));
		AppLog("KeyCode : %d", eventPacket->GetKeyCode());
		break;
	}
	return eventPacket;
}
