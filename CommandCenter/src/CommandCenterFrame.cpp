#include "CommandCenterFrame.h"

using namespace Tizen::App;
using namespace Tizen::Ui;

CommandCenterFrame::CommandCenterFrame(void)
{
}

CommandCenterFrame::~CommandCenterFrame(void)
{
}

result
CommandCenterFrame::OnInitializing(void)
{
	result r = E_SUCCESS;

	Mainform *pForm=new (std::nothrow) Mainform();
	pForm->Initialize();
	AddControl(pForm);
	SetCurrentForm(pForm);
	pForm->Invalidate(true);

	SetPropagatedKeyEventListener(this);
	return r;
}

result
CommandCenterFrame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your frame termination code here.
	return r;
}

bool
CommandCenterFrame::OnKeyReleased(Tizen::Ui::Control& source, const Tizen::Ui::KeyEventInfo& keyEventInfo)
{
	KeyCode keyCode = keyEventInfo.GetKeyCode();

	if (keyCode == KEY_BACK)
	{
		UiApp* pApp = UiApp::GetInstance();
		AppAssert(pApp);
		pApp->Terminate();
	}

	return false;
}
