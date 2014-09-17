/*
 * CommandCenterProxy.cpp
 *
 *  Created on: Apr 23, 2014
 *      Author: HAKJAE
 */

#include "CommandCenterProxy.h"

static const int CHECK_INTERVAL = 1000; // Checking interval in sec.

static const wchar_t* LOCAL_MESSAGE_PORT_NAME = L"UI_PORT";

CommandCenterProxy::CommandCenterProxy(void)
	: __pLocalMessagePort(null)
	, __pRemoteMessagePort(null)
{
}

CommandCenterProxy::~CommandCenterProxy() {
	// TODO Auto-generated destructor stub
}

result
CommandCenterProxy::Construct(const AppId& appId, const String& remotePortName)
{
	result r = E_FAILURE;
	__appId = appId;

	AppManager* pAppManager = AppManager::GetInstance();
	TryReturn(pAppManager != null, E_FAILURE, "CommandCenterApp : Fail to get AppManager instance.");

	AppLog("CommandCenterApp : Checking service status for time out 5 sec...");

	for (int i=0; i < 5; ++i)
	{
		if (pAppManager->IsRunning(__appId))
		{
			AppLog("CommandCenterApp : Service is ready !!!");
			break;
		}
		else
		{
			AppLog("CommandCenterApp : Service is not ready !!! try to launch !!! ");
			r = pAppManager->LaunchApplication(__appId, null);
			TryReturn(!IsFailed(r), r, "SampleUiApp : [%s]", GetErrorMessage(r));
			Thread::Sleep(CHECK_INTERVAL);
		}
	}

	TryReturn(pAppManager->IsRunning(__appId), E_FAILURE, "SampleUiApp : The service is not working..");

	__pLocalMessagePort = MessagePortManager::RequestLocalMessagePort(LOCAL_MESSAGE_PORT_NAME);
	TryReturn(__pLocalMessagePort != null, E_FAILURE, "[E_FAILURE] Failed to get LocalMessagePort instance.");

	__pLocalMessagePort->AddMessagePortListener(*this);

	__pRemoteMessagePort = MessagePortManager::RequestRemoteMessagePort(appId, remotePortName);
	TryReturn(__pRemoteMessagePort != null, E_FAILURE, "[E_FAILURE] Failed to get LocalMessagePort instance.");


	AppLog("LocalMessagePort(\"%ls\") is ready !!!", __pLocalMessagePort->GetName().GetPointer());

	return E_SUCCESS;
}

result
CommandCenterProxy::SendMessage(const IMap* pMessage)
{
	result r = E_SUCCESS;
	AppLog("SendMessage is called.");

	if (__pRemoteMessagePort != null)
	{
		r = __pRemoteMessagePort->SendMessage(__pLocalMessagePort, pMessage);

		if(r!=E_SUCCESS) {
			AppLog("SendMessage is fail.");
		}


	}
	else
	{
		AppLog("SendMessage is fail.");
		r = E_FAILURE;
	}

	return r;
}

void
CommandCenterProxy::OnMessageReceivedN(RemoteMessagePort* pRemoteMessagePort, IMap* pMessage)
{
	AppLog("SampleUiApp : A response message is Received.");

	String key(L"ServiceApp");
	String* pData = static_cast<String*>(pMessage->GetValue(key));
	App* pApp = App::GetInstance();

	/*
	if (pData != null && pApp != null)
	{
		AppLog("SampleUiApp : Received data : %ls", pData->GetPointer());

		if (pData->CompareTo(L"ready") == 0)
		{
			pApp->SendUserEvent(STATE_CONNECTED, null);
		}
		else if (pData->CompareTo(L"started") == 0)
		{
			pApp->SendUserEvent(STATE_TIMER_STARTED, null);
		}
		else if (pData->CompareTo(L"timer expired") == 0)
		{
			pApp->SendUserEvent(STATE_TIMER_EXPIRED, null);
		}
		else if (pData->CompareTo(L"stopped") == 0)
		{
			pApp->SendUserEvent(STATE_TIMER_STOPPED, null);
		}
		else if (pData->CompareTo(L"exit") == 0)
		{
			pApp->SendUserEvent(STATE_EXIT, null);
		}
	}
	*/

	delete pMessage;
}


