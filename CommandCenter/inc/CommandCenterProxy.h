/*
 * CommandCenterProxy.h
 *
 *  Created on: Apr 23, 2014
 *      Author: HAKJAE
 */

#ifndef COMMANDCENTERPROXY_H_
#define COMMANDCENTERPROXY_H_

#include <FApp.h>
#include <FBase.h>
#include <FIo.h>
#include <FIoIMessagePortListener.h>

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Base::Runtime;
using namespace Tizen::Base::Collection;
using namespace Tizen::Io;

class CommandCenterProxy:
	public Tizen::Io::IMessagePortListener {
public:
	CommandCenterProxy();
	virtual ~CommandCenterProxy();

	result Construct(
			const Tizen::App::AppId& appId, const Tizen::Base::String& remotePortName);

	result SendMessage(
			const Tizen::Base::Collection::IMap* pMessage);

	virtual void OnMessageReceivedN(
			Tizen::Io::RemoteMessagePort* pRemoteMessagePort,
			Tizen::Base::Collection::IMap* pMessage);

private:
	Tizen::Io::LocalMessagePort* __pLocalMessagePort;
	Tizen::Io::RemoteMessagePort* __pRemoteMessagePort;
	Tizen::App::AppId __appId;
};

#endif /* COMMANDCENTERPROXY_H_ */
