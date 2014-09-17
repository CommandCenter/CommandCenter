/*
 * DeviceInfoPacket.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#include "DeviceInfoPacket.h"

DeviceInfoPacket::DeviceInfoPacket(int width, int height, String userID) {

	mWidth=width;
	mHeight=height;
	mUserID=userID;


	sprintf(buffer, "%4d%4d0123456789", 720, 1280);
	header=new PacketHeader(DEVICE_INFO, 18);
	setHeader(header);
	setPayload((byte*)buffer);
}

DeviceInfoPacket::~DeviceInfoPacket() {
	// TODO Auto-generated destructor stub
}

