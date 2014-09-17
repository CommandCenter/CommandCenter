#include <new>
#include "CommandCenterApp.h"
#include "CommandCenterFrame.h"

static const wchar_t* REMOTE_PORT_NAME = L"SERVICE_PORT";

CommandCenterApp::CommandCenterApp(void)
{
}

CommandCenterApp::~CommandCenterApp(void)
{}

UiApp*
CommandCenterApp::CreateInstance(void)
{
	// Create the application instance through the constructor.
	return new (std::nothrow) CommandCenterApp();
}

bool
CommandCenterApp::OnAppInitializing(AppRegistry& appRegistry)
{
	return true;
}

bool
CommandCenterApp::OnAppInitialized(void)
{
	CommandCenterFrame* pCommandCenterFrame = new (std::nothrow) CommandCenterFrame;
	TryReturn(pCommandCenterFrame != null, false, "The memory is insufficient.");
	pCommandCenterFrame->Construct();
	pCommandCenterFrame->SetName(L"CommandCenter");
	AddFrame(*pCommandCenterFrame);

	// TODO: Add your application initialization code here.

	/*
	String serviceName(L".CommandCenterService");
	String repAppId(15);
	repAppId = L"0alTGXG65N";
	AppId serviceId(repAppId+serviceName);
	*/
	serviceName=L".CommandCenterService";
	repAppId=L"0alTGXG65N";
	serviceId=repAppId+serviceName;
	AppLog("CommandCenterApp : Service Id is %ls", serviceId.GetPointer());

	result r = E_SUCCESS;
	__pService = new (std::nothrow) CommandCenterProxy();
	r = __pService->Construct(serviceId, REMOTE_PORT_NAME);
	if (IsFailed(r))
	{
		AppLog("CommandCenterApp : [%s] SeviceProxy creation is failed.", GetErrorMessage(r));
	}
	else
	{
		__isReady = true;
	}

	return true;
}

bool
CommandCenterApp::OnAppWillTerminate(void)
{
	// TODO: Deallocate or release resources in devices that have the END key.
	return true;
}

bool
CommandCenterApp::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	// TODO: Deallocate all resources allocated by the application.
	// The permanent data and context of the application can be saved through the application registry (appRegistry).
	return true;
}

void
CommandCenterApp::OnForeground(void)
{
	// TODO: Start or resume drawing when the application is moved to the foreground.
}

void
CommandCenterApp::OnBackground(void)
{
	// TODO: Stop drawing when the application is moved to the background to save the CPU and battery consumption.
}

void
CommandCenterApp::OnLowMemory(void)
{
	// TODO: Free unnecessary resources or close the application.
}

void
CommandCenterApp::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
	// TODO: Handle all battery level changes here.
	// Stop using multimedia features (such as camera and mp3 playback) if the battery level is CRITICAL.
}

void
CommandCenterApp::OnScreenOn(void)
{
	// TODO: Retrieve the released resources or resume the operations that were paused or stopped in the OnScreenOff() event handler.
}

void
CommandCenterApp::OnScreenOff(void)
{
	// TODO: Release resources (such as 3D, media, and sensors) to allow the device to enter the sleep mode 
	// to save the battery (unless you have a good reason to do otherwise).
	// Only perform quick operations in this event handler. Any lengthy operations can be risky; 
	// for example, invoking a long asynchronous method within this event handler can cause problems
	// because the device can enter the sleep mode before the callback is invoked.

}

void
CommandCenterApp::OnUserEventReceivedN(RequestId requestId, IList* pArgs) {
	switch(requestId) {
	case START_REMOTE:
		startRemote();
		break;
	case END_REMOTE:
		endRemote();
		break;
	}
}

void CommandCenterApp::startRemote() {
	HashMap* hashMap=new HashMap();
	hashMap->Construct();
	hashMap->Add(new String(KEY_REMOTE_STATE), new String(KEY_START_REMOTE));
	__pService->SendMessage(hashMap);
}

void CommandCenterApp::endRemote() {
	HashMap* hashMap=new HashMap();
	hashMap->Construct();
	hashMap->Add(new String(KEY_REMOTE_STATE), new String(KEY_END_REMOTE));
	__pService->SendMessage(hashMap);
}


