#include "CommandCenterServiceApp.h"
#include <new>

using namespace std;

CommandCenterServiceApp::CommandCenterServiceApp(void)
{
	isTransmuission=false;
}

CommandCenterServiceApp::~CommandCenterServiceApp(void)
{
}

ServiceApp*
CommandCenterServiceApp::CreateInstance(void)
{
	return new (std::nothrow) CommandCenterServiceApp();
}

bool
CommandCenterServiceApp::OnAppInitializing(AppRegistry& appRegistry)
{
	result r=E_SUCCESS;
	_pMessagePort = new (std::nothrow) CommandCenterMessagePort();
	r=_pMessagePort->Construct(LOCAL_MESSAGE_PORT_NAME);

	transmitter=new Tranceiver(this);
	transmitter->setFrameBufferListener(this);
	transmitter->setVirtualEventListener(this);

	frameHandler=new FrameHandler();
	inputHandler=new InputHandler();
	this->Construct();

	return true;
}

bool
CommandCenterServiceApp::OnAppInitialized(void)
{
	return true;
}

bool
CommandCenterServiceApp::OnAppWillTerminate(void)
{
	return true;
}

bool
CommandCenterServiceApp::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	// TODO
	// Deallocate resources allocated by this App for termination, and add your termination code here
	// The App's permanent data and context can be saved via appRegistry.
	return true;
}

void
CommandCenterServiceApp::OnLowMemory(void)
{
	// TODO:
	// Free unused resources or close the App.
}

void
CommandCenterServiceApp::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
	// TODO:
	// Handle any changes in battery level here.
	// Stop using multimedia features(camera, mp3 etc.) if the battery level is CRITICAL.
}

void
CommandCenterServiceApp::OnUserEventReceivedN(RequestId requestId, Tizen::Base::Collection::IList* pArgs) {
	switch(requestId) {
	case START_REMOTE:
		AppLog("SERVICE_START_REMOTE");
		//connect(L"192.168.43.6");
		connect(L"192.168.43.155");

		break;

	case END_REMOTE:
		AppLog("SERVICE_END_REMOTE");
		disconnect();
		break;

	case RECEIVE_EVENT:
		{
			AppLog("RECEIVE_EVENT");
			EventPacket *eventPacket=(EventPacket *)pArgs->GetAt(0);
			parseVirtualEventPacket(eventPacket);
			delete pArgs;
		}
		break;

	default:
		AppLog("default");
		break;
	}
}

void
CommandCenterServiceApp::onScreenTransferRequested() {
	//스크린 요청

	AppLog("onScreenTransferRequested");

	if(isTransmuission)
		return;

	isTransmuission=true;
	this->Start();
}

void
CommandCenterServiceApp::onScreenTransferStopRequested() {
	if(!isTransmuission)
		return;

	isTransmuission=false;
}

void
CommandCenterServiceApp::onScreenTransferInterrupted() {
	//?
}
/*
Object* CommandCenterServiceApp::Run(void) {
	while(isTransmuission) {
		byte* frameStream=frameHandler->getFrameStream();

		transmitter->screenTransmission(
				frameStream, frameHandler->getOrientation(),
				frameHandler->getJpgSize());
	}
	return null;
}
*/

bool CommandCenterServiceApp::OnStart(void) {
	AppLog("쓰레드 시작");
	while(isTransmuission) {
		byte* frameStream=frameHandler->getFrameStream();

		transmitter->screenTransmission(
				frameStream, frameHandler->getOrientation(),
				frameHandler->getJpgSize());
	}
	return null;
}

void CommandCenterServiceApp::onServerConnected(String ipAddress) {

}

void CommandCenterServiceApp::onServerConnectionFailed() {

}

void CommandCenterServiceApp::onServerConnectionInterrupted() {

}

void CommandCenterServiceApp::onServerDisconnected() {

}

void CommandCenterServiceApp::onSetCoordinates(int xPosition, int yPosition) {
	inputHandler->TouchMove(xPosition, yPosition);
}

void CommandCenterServiceApp::onTouchDown() {
	inputHandler->TouchDown();
}

void CommandCenterServiceApp::onTouchUp() {
	inputHandler->TouchUp();
}

void CommandCenterServiceApp::onKeyDown(int keyCode) {
	inputHandler->KeyDown(keyCode);
}

void CommandCenterServiceApp::onKeyUp(int keyCode) {
	inputHandler->KeyUp(keyCode);
}

void CommandCenterServiceApp::onKeyStroke(int keyCode) {
	inputHandler->KeyStroke(keyCode);
}

void CommandCenterServiceApp::connect(String ipAddr) {
	transmitter->connect(ipAddr);
	transmitter->sendDeviceInfo();
}

void CommandCenterServiceApp::disconnect() {
	isTransmuission=false;
	transmitter->disconnect();
}

void CommandCenterServiceApp::parseVirtualEventPacket(EventPacket *eventPacket) {

	switch(eventPacket->GetEventCode()) {

	case SETCOORDINATES:
		onSetCoordinates(eventPacket->GetXPosition(), eventPacket->GetYPosition());
		break;

	case TOUCHDOWN:
		onSetCoordinates(eventPacket->GetXPosition(), eventPacket->GetYPosition());
		onTouchDown();
		break;

	case TOUCHUP:
		onTouchUp();
		break;

	case KEYDOWN:
		onKeyDown(eventPacket->GetKeyCode());
		break;

	case KEYUP:
		onKeyUp(eventPacket->GetKeyCode());
		break;

	case BACK:
		onKeyStroke(RECV_KEY_BACK);
		break;

	case MENU:
		onKeyStroke(RECV_KEY_MENU);
		break;

	case VOLUMEDOWN:
		onKeyStroke(RECV_KEY_VOLUMEDOWN);
		break;

	case VOLUMEUP:
		onKeyStroke(RECV_KEY_VOLUMEUP);
		break;

	case POWER:
		onKeyStroke(RECV_KEY_POWER);
		break;

	case HOME:
		onKeyStroke(RECV_KEY_MENU2);
		break;
	}

	delete eventPacket;
}

