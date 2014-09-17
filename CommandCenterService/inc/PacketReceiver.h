/*
 * PacketReceiver.h
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#ifndef PACKETRECEIVER_H_
#define PACKETRECEIVER_H_

#include <FBaseRtThread.h>
#include <FNetSockets.h>
#include "Packet.h"
#include "PacketHeader.h"
#include "IPacketListener.h"

using namespace Tizen::Base::Runtime;
using namespace Tizen::Net::Sockets;

class PacketReceiver:
	//public EventDrivenThread {
	public Thread {
/* 생성자, 소멸자 */
public:
	PacketReceiver(Socket *recvSocket);
	PacketReceiver(Socket *recvSocket, IPacketListener *packetListener);
	virtual ~PacketReceiver();

	bool flag;

/* 멤버변수 */
private:
	byte buffer[Packet::MAX_LENGTH*2];
	int bufferOffset;	//private int bufferOffset = 0;
	Packet *packet;

	Socket *recvSocket;
	IPacketListener *packetListener;

/* 멤버함수 */
public:
	void setPacketListener(IPacketListener *listener);

	virtual Object* Run(void);

private:
	int readPacketDataFromSocket();		//소켓으로부터 데이터를 전송받음

	bool tryReadPacketData();		//페킷의 데이터를 분석
};

#endif /* PACKETRECEIVER_H_ */
