/*
 * FrameHandler.h
 *
 *  Created on: Feb 16, 2014
 *      Author: HAKJAE
 */

#ifndef FRAMEHANDLER_H_
#define FRAMEHANDLER_H_

#include <FApp.h>
#include <FBase.h>
#include <FGraphics.h>
#include <FSystem.h>
#include <FUiSystemUtil.h>
#include "FrameBufferHandler.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Graphics;
using namespace Tizen::Ui;

class FrameHandler {
public:
/* 생성자, 소멸자 */
public:
	FrameHandler();
	virtual ~FrameHandler();

/* 멤버변수 */
private:
	byte buffer[1000000];

	//화면정보
	int displaySize;
	int width;
	int height;
	int pixel;
	int orientation;
	int jpgSize;

	//?
	bool isBuffered;

/* 멤버함수 */
public:
	void setDisplayValue();

	Bitmap* getDisplayBitmap();

	int getDisplayOrientation();

	byte* getFrameStream();

	int getJpgSize();

	int getDisplaySize();

	int getWidth();

	int getHeight();

	int getPixel();

	int getOrientation();
};

#endif /* FRAMEHANDLER_H_ */
