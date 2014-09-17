/*
 * IVirtualEventListener.h
 *
 *  Created on: Apr 22, 2014
 *      Author: HAKJAE
 */

#ifndef IVIRTUALEVENTLISTENER_H_
#define IVIRTUALEVENTLISTENER_H_

#include <FUiSystemUtil.h>

using namespace Tizen::Ui;

class IVirtualEventListener {
public:
	IVirtualEventListener(){};
	virtual ~IVirtualEventListener(){};\

	virtual void onSetCoordinates(int xPosition, int yPosition)=0;
	virtual void onTouchDown()=0;
	virtual void onTouchUp()=0;

	virtual void onKeyDown(int keyCode)=0;
	virtual void onKeyUp(int keyCode)=0;
	virtual void onKeyStroke(int keyCode)=0;
};

#endif /* IVIRTUALEVENTLISTENER_H_ */
