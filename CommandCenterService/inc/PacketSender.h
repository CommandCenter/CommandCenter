/*
 * PacketSender.h
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#ifndef PACKETSENDER_H_
#define PACKETSENDER_H_

#include <FNetSockets.h>
#include "Packet.h"

using namespace Tizen::Net::Sockets;

class PacketSender {
/* 생성자, 소멸자 */
public:
	PacketSender(Socket *socket);
	virtual ~PacketSender();

/* 멤버변수 */
private:
	Socket *socket;

/* 멤버함수 */
public:
	void setSocket(Socket *socket);
	void send(Packet *packet);
};

#endif /* PACKETSENDER_H_ */
