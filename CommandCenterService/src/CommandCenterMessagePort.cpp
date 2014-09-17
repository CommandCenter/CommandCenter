/*
 * CommandCenterMessagePort.cpp
 *
 *  Created on: Feb 9, 2014
 *      Author: HAKJAE
 */
#include "CommandCenterMessagePort.h"

CommandCenterMessagePort::CommandCenterMessagePort() {
	// TODO Auto-generated constructor stub
}

CommandCenterMessagePort::~CommandCenterMessagePort() {
	// TODO Auto-generated destructor stub
}

result
CommandCenterMessagePort::Construct(const String& localPortName) {
	result r=E_SUCCESS;
	_pRemoteMessagePort=null;
	_pLocalMessagePort=MessagePortManager::RequestLocalMessagePort(localPortName);
	_pLocalMessagePort->AddMessagePortListener(*this);
	AppLog("CommandCenterService is ready!");

	return r;
}

void
CommandCenterMessagePort::OnMessageReceivedN(RemoteMessagePort* pRemoteMessagePort, Tizen::Base::Collection::IMap* pMessage) {
	AppLog("CommandCenterMessagePort::OnMessageReceivedN");

	String *pData=static_cast<String*> (pMessage->GetValue(String(KEY_REMOTE_STATE)));
	AppLog("ReceiveMessage : %ls", pData->GetPointer());

	App *pApp=App::GetInstance();
	HashMap* pMap=new HashMap();
	pMap->Construct();

	if(pData->CompareTo(KEY_START_REMOTE)==0) {
		AppLog("service remote start");
		_pRemoteMessagePort=pRemoteMessagePort;
		pApp->SendUserEvent(START_REMOTE, null);
	}

	else if(pData->CompareTo(KEY_END_REMOTE)==0) {
		AppLog("service remote exit");
		_pRemoteMessagePort=null;
		pApp->SendUserEvent(END_REMOTE, null);
	}

	else {

	}
	delete pMap;
	delete pMessage;

}

result
CommandCenterMessagePort::SendMessage(const Tizen::Base::Collection::IMap* pMessage) {
	AppLog("SendMessage");

	result r=E_SUCCESS;
	if(_pRemoteMessagePort!=null) {
		r=_pRemoteMessagePort->SendMessage(_pLocalMessagePort, pMessage);

		if(IsFailed(r)) {
			AppLog("씨발 실패 ㅡㅡ");
		}

	} else {
		r=E_FAILURE;
	}

	return r;
}
