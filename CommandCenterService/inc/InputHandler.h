/*
 * InputHandler.h
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#ifndef INPUTHANDLER_H_
#define INPUTHANDLER_H_

#include <FUiSystemUtil.h>
#include <FGraphics.h>
#include <linux/types.h>
#include <sys/time.h>
#include <stdlib.h>
#include <fcntl.h>

#include "KeyCode.h"

using namespace Tizen::Ui;
using namespace Tizen::Graphics;

#define EV_SYN                  0x00
#define EV_KEY                  0x01
#define EV_REL                  0x02
#define EV_ABS                  0x03
#define EV_MSC                  0x04
#define EV_LED                  0x11
#define EV_SND                  0x12
#define EV_REP                  0x14
#define EV_FF                   0x15
#define EV_PWR                  0x16
#define EV_FF_STATUS            0x17
#define EV_MAX                  0x1f

#define SYN_REPORT              0
#define SYN_CONFIG              1

#define ABS_X                   0x00
#define ABS_Y                   0x01

typedef struct input_event {
	 struct timeval time;
	 __u16 type;
	 __u16 code;
	 __s32 value;
} input_event;

#define EV_SYN                  0x00	//Seperate
#define EV_KEY                  0x01	//Key Event
#define EV_ABS                  0x03	//Position

#define X_POSITION				0x35
#define Y_POSITION				0x36
#define SCREEN_TOUCH			0x39
#define SEPERATE				0x30
#define SEPERATE_VALUE			0x000a0000


#define SYN_REPORT              0
#define SYN_CONFIG              1

#define BTN_TOUCH               0x14a

class InputHandler {
public:
	int xPosition, yPosition;
	InputHandler();
	virtual ~InputHandler();

	void KeyDown(int KeyCode);
	void KeyUp(int KeyCode);
	void KeyStroke(int KeyCode);

	void TouchDown();
	void TouchUp();
	void TouchMove(int x, int y);

private:
	int touchFd;
	int hardwareFd;
	int keyboardFd;

	void sendNativeEvent(int fd, int type, int eventCode, int value);
};

#endif /* INPUTHANDLER_H_ */
