/*
 * PacketSender.cpp
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#include "PacketSender.h"

PacketSender::PacketSender(Socket *socket) {
	this->socket=socket;
}

PacketSender::~PacketSender() {}

void PacketSender::setSocket(Socket *socket) {
	this->socket=socket;
}

void PacketSender::send(Packet *packet) {
	int sentLength=0;
	byte* array=packet->asByteArray();
	int length=packet->getHeader()->getPacketLength();


	result r=socket->Send(
		array,length,sentLength
	);
}
