#include "KeyCode.h"

KeyCode convertToTizenKeyCode(int recvKeyCode) {

	KeyCode keyCode;
	switch(recvKeyCode) {
	case RECV_KEY_INVALID:		keyCode=KEY_INVALID; 		break;

	//숫자
	case RECV_KEY_0:			keyCode=KEY_0;				break;
	case RECV_KEY_1:			keyCode=KEY_1;				break;
	case RECV_KEY_2:			keyCode=KEY_2;				break;
	case RECV_KEY_3:			keyCode=KEY_3;				break;
	case RECV_KEY_4:			keyCode=KEY_4;				break;
	case RECV_KEY_5:			keyCode=KEY_5;				break;
	case RECV_KEY_6:			keyCode=KEY_6;				break;
	case RECV_KEY_7:			keyCode=KEY_7;				break;
	case RECV_KEY_8:			keyCode=KEY_8;				break;
	case RECV_KEY_9:			keyCode=KEY_9;				break;

	//Key
	case RECV_KEY_A:			keyCode=KEY_A;				break;
	case RECV_KEY_B:			keyCode=KEY_B;				break;
	case RECV_KEY_C:			keyCode=KEY_C;				break;
	case RECV_KEY_D:			keyCode=KEY_D;				break;
	case RECV_KEY_E:			keyCode=KEY_E;				break;
	case RECV_KEY_F:			keyCode=KEY_F;				break;
	case RECV_KEY_G:			keyCode=KEY_G;				break;
	case RECV_KEY_H:			keyCode=KEY_H;				break;
	case RECV_KEY_I:			keyCode=KEY_I;				break;
	case RECV_KEY_J:			keyCode=KEY_J;				break;
	case RECV_KEY_K:			keyCode=KEY_K;				break;
	case RECV_KEY_L:			keyCode=KEY_L;				break;
	case RECV_KEY_M:			keyCode=KEY_M;				break;
	case RECV_KEY_N:			keyCode=KEY_N;				break;
	case RECV_KEY_O:			keyCode=KEY_O;				break;
	case RECV_KEY_P:			keyCode=KEY_P;				break;
	case RECV_KEY_Q:			keyCode=KEY_Q;				break;
	case RECV_KEY_R:			keyCode=KEY_R;				break;
	case RECV_KEY_S:			keyCode=KEY_S;				break;
	case RECV_KEY_T:			keyCode=KEY_T;				break;
	case RECV_KEY_U:			keyCode=KEY_U;				break;
	case RECV_KEY_V:			keyCode=KEY_V;				break;
	case RECV_KEY_W:			keyCode=KEY_W;				break;
	case RECV_KEY_X:			keyCode=KEY_X;				break;
	case RECV_KEY_Y:			keyCode=KEY_Y;				break;
	case RECV_KEY_Z:			keyCode=KEY_Z;				break;

	//
	case RECV_KEY_STAR:			keyCode=KEY_ASTERISK;		break;
	case RECV_KEY_SHARP:		keyCode=KEY_SHARP;			break;
	case RECV_KEY_LEFT:			keyCode=KEY_LEFT;			break;
	case RECV_KEY_UP:			keyCode=KEY_UP;				break;
	case RECV_KEY_DOWN:			keyCode=KEY_DOWN;			break;
	case RECV_KEY_RIGHT:		keyCode=KEY_RIGHT;			break;

	case RECV_KEY_BACKSPACE:	keyCode=KEY_BACKSPACE;		break;
	case RECV_KEY_COMMA:		keyCode=KEY_COMMA;			break;
	case RECV_KEY_ENTER:		keyCode=KEY_ENTER;			break;
	case RECV_KEY_CAPSLOCK:		keyCode=KEY_CAPSLOCK;		break;
	case RECV_KEY_QUESTION:		keyCode=KEY_QUESTION;		break;
	case RECV_KEY_ALTERASE:		keyCode=KEY_ALT;			break;

	//case RECV_?:				keyCode=KEY_SYM;			break; //Language SysmbolKey
	//case RECV_?:				keyCode=KEY_SETTING;		break;	//Language Setting
	case RECV_KEY_SPACE:		keyCode=KEY_SPACE;			break;
	case RECV_KEY_DOT:			keyCode=KEY_DOT;			break;
	//case RECV_KEY_FN:			keyCOde=KEY_FN;				break;

	case RECV_KEY_F1:			keyCode=KEY_FN_1;			break;
	case RECV_KEY_F2:			keyCode=KEY_FN_2;			break;
	case RECV_KEY_F3:			keyCode=KEY_FN_3;			break;
	case RECV_KEY_F4:			keyCode=KEY_FN_4;			break;
	case RECV_KEY_F5:			keyCode=KEY_FN_5;			break;
	case RECV_KEY_F6:			keyCode=KEY_FN_6;			break;
	case RECV_KEY_F7:			keyCode=KEY_FN_7;			break;
	case RECV_KEY_F8:			keyCode=KEY_FN_8;			break;
	case RECV_KEY_F9:			keyCode=KEY_FN_9;			break;
	case RECV_KEY_F10:			keyCode=KEY_FN_10;			break;
	case RECV_KEY_F11:			keyCode=KEY_FN_11;			break;
	case RECV_KEY_F12:			keyCode=KEY_FN_12;			break;

	case RECV_KEY_GRAVE:		keyCode=KEY_GRAVE;			break;
	case RECV_KEY_INSERT:		keyCode=KEY_INSERT;			break;
	case RECV_KEY_LEFTALT:		keyCode=KEY_LEFT_ALT;		break;
	//case RECV_KEY_LEFTBRACKET:keyCOde=KEY_LEFT_BRA;		break;
	case RECV_KEY_LEFTCTRL:		keyCode=KEY_LEFT_CTRL;		break;
	case RECV_KEY_LEFTSHIFT:	keyCode=KEY_LEFT_SHIFT;		break;

	case RECV_KEY_MINUS:		keyCode=KEY_MINUS;			break;
	case RECV_KEY_END:			keyCode=KEY_MOVE_END;		break;
	//case RECV_KEY_HOME:			keyCode=KEY_MOVE_HOME;		break;
	case RECV_KEY_NUMLOCK:		keyCode=KEY_NUM_LOCK;		break;

	case RECV_KEY_KP0:			keyCode=KEY_NUMPAD_0;		break;
	case RECV_KEY_KP1:			keyCode=KEY_NUMPAD_1;		break;
	case RECV_KEY_KP2:			keyCode=KEY_NUMPAD_2;		break;
	case RECV_KEY_KP3:			keyCode=KEY_NUMPAD_3;		break;
	case RECV_KEY_KP4:			keyCode=KEY_NUMPAD_4;		break;
	case RECV_KEY_KP5:			keyCode=KEY_NUMPAD_5;		break;
	case RECV_KEY_KP6:			keyCode=KEY_NUMPAD_6;		break;
	case RECV_KEY_KP7:			keyCode=KEY_NUMPAD_7;		break;
	case RECV_KEY_KP8:			keyCode=KEY_NUMPAD_8;		break;
	case RECV_KEY_KP9:			keyCode=KEY_NUMPAD_9;		break;

	case RECV_KEY_KPPLUS:		keyCode=KEY_NUMPAD_ADD;		break;
	case RECV_KEY_KPSLASH:		keyCode=KEY_NUMPAD_DIVIDE;	break;
	case RECV_KEY_KPDOT:		keyCode=KEY_NUMPAD_DOT;		break;
	case RECV_KEY_KPENTER:		keyCode=KEY_NUMPAD_ENTER;	break;
	case RECV_KEY_KPASTERISK:	keyCode=KEY_NUMPAD_MULTIPLY;break;
	case RECV_KEY_KPPLUSMINUS:	keyCode=KEY_NUMPAD_SUBTRACT;break;


	case RECV_KEY_PAGEDOWN:		keyCode=KEY_PAGE_DOWN;		break;
	case RECV_KEY_PAGEUP:		keyCode=KEY_PAGE_UP;		break;
	case RECV_KEY_PAUSE:		keyCode=KEY_PAUSE_BREAK;	break;
	case RECV_KEY_PRINT:		keyCode=KEY_PRINT;			break;

	case RECV_KEY_RIGHTALT:		keyCode=KEY_RIGHT_ALT;		break;
	case RECV_KEY_RIGHTCTRL:	keyCode=KEY_RIGHT_CTRL;		break;
	case RECV_KEY_RIGHTSHIFT:	keyCode=KEY_RIGHT_SHIFT;	break;
	case RECV_KEY_SCROLLLOCK:	keyCode=KEY_SCROLL_LOCK;	break;
	case RECV_KEY_SEMICOLON:	keyCode=KEY_SEMICOLON;		break;
	case RECV_KEY_SLASH:		keyCode=KEY_SLASH;			break;
	case RECV_KEY_TAB:			keyCode=KEY_TAB;			break;

	case RECV_KEY_BACK:			keyCode=KEY_BACK;			break;
	case RECV_KEY_HOME:			keyCode=KEY_HOME;			break;
	case RECV_KEY_VOLUMEDOWN:	keyCode=KEY_VOLUME_DOWN;	break;
	case RECV_KEY_VOLUMEUP:		keyCode=KEY_VOLUME_UP;		break;
	case RECV_KEY_MENU:			keyCode=KEY_MENU;			break;
	case RECV_KEY_POWER:		keyCode=KEY_POWER_HOLD;		break;
	}

	AppLog("switch ~ case : %d", keyCode);
	return keyCode;
}

