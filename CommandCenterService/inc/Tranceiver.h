/*
 * Tranceiver.h
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#ifndef TRANCEIVER_H_
#define TRANCEIVER_H_

#include <FApp.h>
#include <FBase.h>
#include <FNet.h>

#include "IPacketListener.h"
#include "FNetSockets.h"
#include "PacketReceiver.h"
#include "ScreenSender.h"
#include "IServerConnectionListener.h"
#include "IScreenTransmissionListener.h"
#include "IVirtualEventListener.h"
#include "DeviceInfoPacket.h"
#include "EventPacket.h"
#include "KeyCode.h"
#include "EnvironmentData.h"

using namespace Tizen::App;
using namespace Tizen::Net;
using namespace Tizen::Net::Sockets;
using namespace Tizen::Base::Runtime;
using namespace Tizen::Base::Collection;

class Tranceiver:
	public IPacketListener
{
public:
/* 생성자, 소멸자 */
	Tranceiver(IServerConnectionListener *listener);
	virtual ~Tranceiver();

/* 멤버변수 */
public:
	static const ushort PORT=50000;
	Socket *socket;

	PacketReceiver *packetReceiver;
	ScreenSender *screenSender;
	PacketSender *packetSender;
	DeviceInfoPacket *deviceInfoPacket;

	//Event listeners
	IVirtualEventListener *mVirtEventListener;
	IServerConnectionListener *mServerConnectionListener;
	IScreenTransmissionListener *mScreenTransListener;

	//세마포어
	Semaphore semaphore;

/* 멤버함수 */
	//IPacketListener
	virtual void onPacketReceived(Packet *packet);
	virtual void onInterrupt();
	void parseVirtualEventPacket(Packet *packet);

	//setting listner
	void setFrameBufferListener(IScreenTransmissionListener *listener);
	void setVirtualEventListener(IVirtualEventListener *listener);

public:
	bool isConnected();
	void connect(String ipAddr);
	void disconnect();
	void cleanup();
	void sendDeviceInfo();

	//public void sendScreenOnOffState(boolean state)
	void screenTransmission(byte* jpgData, int orientation, int jpgSize);
};

#endif /* TRANCEIVER_H_ */
