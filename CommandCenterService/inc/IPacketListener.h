/*
 * IPocketListener.h
 *
 *  Created on: Feb 14, 2014
 *      Author: HAKJAE
 */

#ifndef IPOCKETLISTENER_H_
#define IPOCKETLISTENER_H_

#include "Packet.h"

class IPacketListener {
public:
	IPacketListener(){};
	virtual ~IPacketListener(){};

	virtual void onPacketReceived(Packet *packet)=0;
	virtual void onInterrupt()=0;
};

#endif /* IPOCKETLISTENER_H_ */
