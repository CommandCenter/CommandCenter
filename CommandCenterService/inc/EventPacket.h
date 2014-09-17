/*
 * EventPacket.h
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#ifndef EVENTPACKET_H_
#define EVENTPACKET_H_

#include <FBase.h>
#include "EventCode.h"
#include "Packet.h"

using namespace Tizen::Base;

class EventPacket
	: public Object {
private:
	int eventCode;
	int xPosition;
	int yPosition;
	int keyCode;

public:
	EventPacket();
	virtual ~EventPacket();

	static const int EVENTCODE_SIZE=2;
	static const int DATA_SIZE=4;
	static const int XPOSITION_SIZE=DATA_SIZE;
	static const int YPOSITION_SIZE=DATA_SIZE;
	static const int KEYCODE_SIZE=DATA_SIZE;

	static byte eventValueBuf[DATA_SIZE];
	static byte bEventCode[EVENTCODE_SIZE];

	static int ByteToInt(byte* data, int dataLength);

	static EventPacket* parse(Packet *packet);

	void SetEventCode(int eventCode){
		this->eventCode = eventCode;
	}

	void SetXPosition(int xPosition){
		this->xPosition = xPosition;
	}

	void SetYPosition(int yPosition){
		this->yPosition = yPosition;
	}

	void SetKeyCode(int keyCode){
		this->keyCode = keyCode;
	}

	int GetEventCode(){
		return eventCode;
	}

	int GetXPosition(){
		return xPosition;
	}

	int GetYPosition(){
		return yPosition;
	}

	int GetKeyCode(){
		return keyCode;
	}

};

#endif /* EVENTPACKET_H_ */
