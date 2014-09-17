/*
 * ScreenSender.h
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#ifndef SCREENSENDER_H_
#define SCREENSENDER_H_

#include <FBase.h>

#include "PacketSender.h"
#include "OperationCode.h"
#include "LueseyPidUtil.h"

using namespace Tizen::Base;

class ScreenSender: public PacketSender {
public:
/* 생성자, 소멸자 */
	ScreenSender(Socket *socket);
	virtual ~ScreenSender();

/* 멤버변수 */
private:
	static const int MAXDATASIZE=4090;
	static const int JPGINFOLENGTH=10;
	static const int ORIENTATION_INFO_LENGTH=1;

	static byte sendBuffer[MAXDATASIZE];
	static byte jpgSizeInfo[JPGINFOLENGTH];

/* 멤버함수 */
public:
	void screenTransmission(byte* jpgData, int orientation, int jpgSize);
};

#endif /* SCREENSENDER_H_ */
