#ifndef _COMMAND_CENTER_APP_H_
#define _COMMAND_CENTER_APP_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>

#include "CommandCenterProxy.h"
#include "EnvironmentData.h"

using namespace Tizen::App;
using namespace Tizen::System;
using namespace Tizen::Base::Collection;

//  The CommandCenterApp class must inherit from the UiApp class,
//  which provides the basic features necessary to define a UI application.
 
class CommandCenterApp
	: public Tizen::App::UiApp
	, public Tizen::System::IScreenEventListener
{
public:
	// The platform calls this method to create the application instance.
	static Tizen::App::UiApp* CreateInstance(void);
	CommandCenterApp(void);
	virtual ~CommandCenterApp(void);

private:
	virtual bool OnAppInitializing(Tizen::App::AppRegistry& appRegistry);

	virtual bool OnAppInitialized(void); 

	virtual bool OnAppWillTerminate(void); 

	virtual bool OnAppTerminating(Tizen::App::AppRegistry& appRegistry, bool forcedTermination = false);

	virtual void OnForeground(void);

	virtual void OnBackground(void);

	virtual void OnLowMemory(void);

	virtual void OnBatteryLevelChanged(Tizen::System::BatteryLevel batteryLevel);

	virtual void OnScreenOn(void);

	virtual void OnScreenOff(void);

	virtual void OnUserEventReceivedN(RequestId requestId, Tizen::Base::Collection::IList* pArgs);

	void startRemote();

	void endRemote();

	CommandCenterProxy* __pService;

	Tizen::Ui::Controls::Form* __pForm;

	bool __isReady;

	String serviceName;
	String repAppId;
	AppId serviceId;
};

#endif // _COMMAND_CENTER_APP_H_
