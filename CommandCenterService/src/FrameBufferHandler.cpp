/*
 * Remoteroid - A remote control solution for Android platform, including handy file transfer and notify-to-PC.
 * Copyright (C) 2012 Taeho Kim(jyte82@gmail.com), Hyomin Oh(ohmnia1112@gmail.com), Hongkyun Kim(godgjdgjd@nate.com), Yongwan Hwang(singerhwang@gmail.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#define	PIXEL_UNKNOWN		 0
#define	PIXEL_ARGB_8888		 1			//4 BYTE ARGB
#define	PIXEL_RGBX_8888		 2			//4 BYTE RGBX
#define	PIXEL_RGB_888		 3			//3 BYTE RGB
#define	PIXEL_RGB_565		 4			//2 BYTE RGB
#define	PIXEL_XBGR_8888		 5			//4 BYTE XBGR
#define	PIXEL_RGBA_5551		 6			//2 BYTE RGBA
#define	PIXEL_ARGB_4444		 7			//2 BYTE ARGB

#define FB_FAIL				0
#define	VINFO_FAIL			1
#define FINFO_FAIL			2
#define MMAP_FAIL			3
#define FORMAT_UNKNOWN		4
#define FORMAT_VALUE_FAIL	5
#define	ORIENTATION_ERROR	10
#define	SCREEN_SLEEP		100

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


#include "FrameBufferHandler.h"
#include "DisplayInfo.h"


enum FormatIndex{
	INDEX_ALPHA	= 0,
	INDEX_RED	= 1,
	INDEX_GREEN	= 2,
	INDEX_BLUE	= 3,

	INDEX_Y		= 0,
	INDEX_CB	= 1,
	INDEX_CR	= 2,
};

static	DisplayInfo					disinfo;
static struct fb_var_screeninfo		vinfo;
static struct fb_fix_screeninfo		finfo;
int		fd;

int getFrameBuffer(byte* buff) {
	int mem_size=1000000;

	Bitmap *bitmap=SystemUtil::CaptureScreenN();
	ImageBuffer imageBuffer;
	imageBuffer.Construct(*bitmap);


	ImageBuffer *image=imageBuffer.ResizeN(360, 640);


	//임시임!
	image->EncodeToFile("/opt/usr/media/Images/KIKI/frame.jpg", IMG_FORMAT_JPG, true, 30);

	File file;
	file.Construct("/opt/usr/media/Images/KIKI/frame.jpg", "r+");
	int jpgCompressSize=file.Read(buff, mem_size);
	//AppLog("jpg size : %d", jpgCompressSize);


	delete image;
	delete bitmap;
	close(fd);
	return jpgCompressSize;
}

