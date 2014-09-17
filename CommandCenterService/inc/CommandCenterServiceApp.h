#ifndef _COMMAND_CENTER_SERVICE_APP_H_
#define _COMMAND_CENTER_SERVICE_APP_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
#include <gl.h>
#include <FBaseRtThread.h>
#include <FUiSystemUtil.h>

#include "CommandCenterMessagePort.h"
#include "FrameHandler.h"
#include "InputHandler.h"
#include "Tranceiver.h"
#include "IScreenTransmissionListener.h"
#include "IServerConnectionListener.h"
#include "IVirtualEventListener.h"
#include "EventPacket.h"
#include "KeyCode.h"


using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Ui;
using namespace Tizen::Base::Runtime;

static const wchar_t* LOCAL_MESSAGE_PORT_NAME = L"SERVICE_PORT";

using namespace Tizen::Base::Runtime;

class CommandCenterServiceApp
	: public Tizen::App::ServiceApp
	//, public Thread
	, public EventDrivenThread
	, public IScreenTransmissionListener
	, public IServerConnectionListener
	, public IVirtualEventListener
{
/* 멤버변수 */
public:

private:
	CommandCenterMessagePort* _pMessagePort;

	Tranceiver *transmitter;
	FrameHandler *frameHandler;
	InputHandler *inputHandler;

	bool isTransmuission;

/* 멤버함수 */
public:
	static Tizen::App::ServiceApp* CreateInstance(void);

	CommandCenterServiceApp(void);

	~CommandCenterServiceApp(void);

private:
	bool OnAppInitializing(Tizen::App::AppRegistry& appRegistry);

	bool OnAppInitialized(void); 

	bool OnAppWillTerminate(void);

	bool OnAppTerminating(Tizen::App::AppRegistry& appRegistry, bool forcedTermination = false);

	void OnLowMemory(void);

	void OnBatteryLevelChanged(Tizen::System::BatteryLevel batteryLevel);

	virtual void OnUserEventReceivedN(RequestId requestId, Tizen::Base::Collection::IList* pArgs);

	virtual void onScreenTransferRequested();

	virtual void onScreenTransferStopRequested();

	virtual void onScreenTransferInterrupted();

	virtual void onServerConnected(String ipAddress);
	virtual void onServerConnectionFailed();
	virtual void onServerConnectionInterrupted();
	virtual void onServerDisconnected();

	virtual void onSetCoordinates(int xPosition, int yPosition);
	virtual void onTouchDown();
	virtual void onTouchUp();
	virtual void onKeyDown(int keyCode);
	virtual void onKeyUp(int keyCode);
	virtual void onKeyStroke(int keyCode);

	//virtual Object* Run(void);
	virtual bool OnStart(void);
	void connect(String ipAddr);
	void disconnect();

	void parseVirtualEventPacket(EventPacket *eventPacket);

};

#endif // _COMMAND_CENTER_SERVICE_APP_H_
