/*
 * IScreenTransmissionListener.h
 *
 *  Created on: Feb 15, 2014
 *      Author: HAKJAE
 */

#ifndef ISCREENTRANSMISSIONLISTENER_H_
#define ISCREENTRANSMISSIONLISTENER_H_

class IScreenTransmissionListener {
public:
	IScreenTransmissionListener(){};
	virtual ~IScreenTransmissionListener(){};

	virtual void onScreenTransferRequested()=0;
	virtual void onScreenTransferStopRequested()=0;
	virtual void onScreenTransferInterrupted()=0;
};

#endif /* ISCREENTRANSMISSIONLISTENER_H_ */
