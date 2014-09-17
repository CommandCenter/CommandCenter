/*
 * Tranceiver.cpp
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#include "Tranceiver.h"
#include "IScreenTransmissionListener.h"

Tranceiver::Tranceiver(IServerConnectionListener *listener) {
	socket=null;

	mServerConnectionListener=listener;
	semaphore.Create();
}

Tranceiver::~Tranceiver() {
	// TODO Auto-generated destructor stub
}

bool Tranceiver::isConnected() {
	//return socket!=null? socket-> : false;
	return true;	//임시
}

void Tranceiver::connect(String ipAddr) {
	semaphore.Acquire();

	//create socket
	socket=new Socket();
	socket->Construct(NET_SOCKET_AF_IPV4,
			NET_SOCKET_TYPE_STREAM, NET_SOCKET_PROTOCOL_TCP);

	unsigned long blockingModeSocket=0;
	socket->Ioctl(NET_SOCKET_FIONBIO, blockingModeSocket);

	//Connect to TCP Server
	Ip4Address ipAddress(ipAddr);
	NetEndPoint endPoint(ipAddress, PORT);
	result r=socket->Connect(endPoint);

	if(r!=E_SUCCESS) {
		AppLogException("CommandCenter : Connect Error");
	}

	//Create Packet Object
	packetSender=new PacketSender(socket);
	screenSender=new ScreenSender(socket);
	packetReceiver=new PacketReceiver(socket);

	//Start PacketReciever
	packetReceiver->setPacketListener(this);
	packetReceiver->Construct();
	packetReceiver->flag=true;
	packetReceiver->Start();

	//mServerConnectionListener->onServerConnected(ipAddr);

	semaphore.Release();
}

void Tranceiver::disconnect() {
	semaphore.Acquire();

	if(socket!=null) {
		packetReceiver->flag=false;
		result r=socket->Close();

		if(r==E_SUCCESS) {
			AppLog("Socket Disconnect");
		}
	}

	//mServerConnectionListener->onServerDisconnected();
	semaphore.Release();
}

void Tranceiver::cleanup() {

	AppLog("cleanup");

	if(socket!=null) {
		socket->Close();
	}
}

void Tranceiver::screenTransmission(byte* jpgData, int orientation, int jpgSize) {
	screenSender->screenTransmission(jpgData, orientation, jpgSize);
}

void Tranceiver::setFrameBufferListener(IScreenTransmissionListener *listener) {
	mScreenTransListener=listener;
}

void Tranceiver::setVirtualEventListener(IVirtualEventListener *listener) {
	mVirtEventListener= listener;
}

void Tranceiver::onPacketReceived(Packet *packet) {

	if(packet->getOpCode() < 0) {
		return;
	}

	switch(packet->getOpCode()) {

	case REQUEST_SCREEN:
		AppLog("화면 전송 요청");
		mScreenTransListener->onScreenTransferRequested();
		break;

	case EVENT_RECEIVED:
		AppLog("이벤트 전송");
		parseVirtualEventPacket(packet);
		break;

	case ORIENTATION:
		AppLog("화면전환");
		break;
	}
}

void Tranceiver::onInterrupt() {

}

void Tranceiver::parseVirtualEventPacket(Packet *packet) {
	EventPacket *eventPacket=EventPacket::parse(packet);

	App* pApp=App::GetInstance();
	ArrayList *plist=new ArrayList();
	plist->Construct();
	plist->Add((Object*)eventPacket);
	pApp->SendUserEvent(RECEIVE_EVENT, plist);
}

void Tranceiver::sendDeviceInfo() {
	deviceInfoPacket=new DeviceInfoPacket(720, 1280, "0123456789");
	packetSender->send(deviceInfoPacket);
}

