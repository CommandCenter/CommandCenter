/*
 * InputHandler.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#include "InputHandler.h"

InputHandler::InputHandler() {
	touchFd=open("/dev/input/event2", O_WRONLY);
	hardwareFd=open("/dev/input/event3", O_WRONLY);
	keyboardFd=open("/dev/input/event5", O_WRONLY);
}

InputHandler::~InputHandler() {
	close(hardwareFd);
	close(touchFd);
	close(keyboardFd);
}

void InputHandler::KeyDown(int KeyCode) {
	sendNativeEvent(keyboardFd, EV_KEY, KeyCode, 1);
	sendNativeEvent(keyboardFd, EV_SYN, SYN_REPORT, 0);
}

void InputHandler::KeyUp(int KeyCode) {
	sendNativeEvent(keyboardFd, EV_KEY, KeyCode, 0);
	sendNativeEvent(keyboardFd, EV_SYN, SYN_REPORT, 0);
}

void InputHandler::KeyStroke(int keyCode) {
	sendNativeEvent(hardwareFd, EV_KEY, keyCode, 1);
	sendNativeEvent(hardwareFd, EV_SYN, SYN_REPORT, 0);

	sendNativeEvent(hardwareFd, EV_KEY, keyCode, 0);
	sendNativeEvent(hardwareFd, EV_SYN, SYN_REPORT, 0);
}

/** 뭐지 이거 **/
void InputHandler::TouchDown() {
	sendNativeEvent(touchFd, EV_ABS, SCREEN_TOUCH, 0);
	sendNativeEvent(touchFd, EV_SYN, SEPERATE, SEPERATE_VALUE);

}

void InputHandler::TouchUp() {
	sendNativeEvent(touchFd, EV_ABS, SCREEN_TOUCH, 0xffffffff);
	sendNativeEvent(touchFd, EV_SYN, SYN_REPORT, 0);
}

void InputHandler::TouchMove(int x, int y) {
	sendNativeEvent(touchFd, EV_ABS, X_POSITION, x);
	sendNativeEvent(touchFd, EV_ABS, Y_POSITION, y);
	sendNativeEvent(touchFd, EV_SYN, SYN_REPORT, 0);
}

void InputHandler::sendNativeEvent(int fd, int type, int eventCode, int value) {

	AppLog("sendNativeEvent");

	input_event event;
	memset(&event, 0, sizeof(event));

	gettimeofday(&event.time, 0);
	event.type=type;
	event.code=eventCode;
	event.value=value;
	write(fd, &event, sizeof(event));
}

