/*
 * DeviceInfoPacket.h
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#ifndef DEVICEINFOPACKET_H_
#define DEVICEINFOPACKET_H_

#include <FBase.h>
#include <FNet.h>
#include <iostream>

#include "Packet.h"
#include "OperationCode.h"

using namespace Tizen::Base;

class DeviceInfoPacket: public Packet {
public:
	int mWidth;
	int mHeight;
	String mUserID;
	PacketHeader* header;
	char buffer[20];

	DeviceInfoPacket(int width, int height, String userID);
	virtual ~DeviceInfoPacket();
};

#endif /* DEVICEINFOPACKET_H_ */
