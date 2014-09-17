/*
 * CommandCenterMessagePort.h
 *
 *  Created on: Feb 9, 2014
 *      Author: HAKJAE
 */

#ifndef COMMANDCENTERMESSAGEPORT_H_
#define COMMANDCENTERMESSAGEPORT_H_

#include <FIoIMessagePortListener.h>
#include <FApp.h>
#include <FBase.h>
#include <FIo.h>
#include <FUiSystemUtil.h>
#include "EnvironmentData.h"

using namespace Tizen::App;
using namespace Tizen::Io;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Base::Runtime;
using namespace Tizen::Graphics;
using namespace Tizen::Ui;

class CommandCenterMessagePort:
	public Tizen::Io::IMessagePortListener
{
public:
	CommandCenterMessagePort();

	virtual ~CommandCenterMessagePort();

	result Construct(const String& localPortName);

	virtual void OnMessageReceivedN(Tizen::Io::RemoteMessagePort* pRemoteMessagePort, Tizen::Base::Collection::IMap* pMessage);

	result SendMessage(const Tizen::Base::Collection::IMap* pMessage);

private:
	LocalMessagePort* _pLocalMessagePort;
	RemoteMessagePort* _pRemoteMessagePort;
};

#endif /* COMMANDCENTERMESSAGEPORT_H_ */
