/*
 * IServerConnectionListener.h
 *
 *  Created on: Feb 15, 2014
 *      Author: HAKJAE
 */

#ifndef ISERVERCONNECTIONLISTENER_H_
#define ISERVERCONNECTIONLISTENER_H_

class IServerConnectionListener {
public:
	IServerConnectionListener(){};
	virtual ~IServerConnectionListener(){};

	virtual void onServerConnected(String ipAddress)=0;
	virtual void onServerConnectionFailed()=0;
	virtual void onServerConnectionInterrupted()=0;
	virtual void onServerDisconnected()=0;
};

#endif /* ISERVERCONNECTIONLISTENER_H_ */
