#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

#include <linux/kd.h>

#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/types.h>

#include <FBase.h>
#include <FApp.h>
#include <linux/types.h>
#include <FMedia.h>
#include <FGraphics.h>
#include <FSystem.h>

struct input_event {
	struct timeval time;
	__u16 type;
	__u16 code;
	__s32 value;
};


using namespace Tizen::Media;
using namespace Tizen::Base;
using namespace Tizen::Graphics;
using namespace Tizen::System;
using namespace Tizen::Io;

int getInputEvent() {

	int fd = open("/dev/input/event5", O_RDONLY);

	if(fd<0) {
		AppLog("으미 좆같은거 ㅡ ㅡ");
	} else {
		AppLog("%d", fd);
	}

	static struct input_event ev;
	int a=read(fd, &ev, sizeof(input_event));
	AppLog("read size : %d", a);


	return 0;
}
