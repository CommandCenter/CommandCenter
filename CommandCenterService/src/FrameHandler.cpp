/*
 * FrameHandler.cpp
 *
 *  Created on: Feb 15, 2014
 *      Author: HAKJAE
 */

#include "FrameHandler.h"

FrameHandler::FrameHandler() {}

FrameHandler::~FrameHandler() {
	jpgSize=0;
	isBuffered=false;
	orientation=0;
}


void FrameHandler::setDisplayValue() {

}

Bitmap* FrameHandler::getDisplayBitmap() {
	return null;
}

int FrameHandler::getDisplayOrientation() {
	return 0;
}

byte* FrameHandler::getFrameStream() {
	jpgSize=getFrameBuffer(buffer);
	return buffer;
}

int FrameHandler::getJpgSize() {
	return jpgSize;
}

int FrameHandler::getDisplaySize() {
	return displaySize;
}

int FrameHandler::getWidth() {
	return width;
}

int FrameHandler::getHeight() {
	return height;
}

int FrameHandler::getPixel() {
	return pixel;
}

int FrameHandler::getOrientation() {
	return orientation;
}
