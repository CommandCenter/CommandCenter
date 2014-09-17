
#include "AppResourceId.h"
#include "Mainform.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;


Mainform::Mainform(void) {}

Mainform::~Mainform(void) {}

bool
Mainform::Initialize()
{
	Form::Construct(MainForm);
	return true;
}

result
Mainform::OnInitializing(void)
{
	result r = E_SUCCESS;
	isConnected=false;

	pAppResource = App::GetInstance()->GetAppResource();

	pStart = static_cast<Button*>(GetControl(IDC_START));
	if(pStart)
	{
		pStart->SetActionId(IDN_BTN_START);
		pStart->AddActionEventListener(*this);
	}
	return r;
}

result
Mainform::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your termination code here

	return r;
}

result Mainform::OnDraw(void) {
	result r = E_UNKNOWN;

	Bitmap* background = pAppResource->GetBitmapN(L"background.png");
	Canvas* pCanvas = GetCanvasN();

	if (pCanvas != null) {
		pCanvas->DrawBitmap(Rectangle(0, 0,720,1280), *background);
	}

	delete background;

	return r;
}

void
Mainform::OnActionPerformed(const Tizen::Ui::Control& source, int actionId)
{
	App* pApp=App::GetInstance();

	switch(actionId) {
	case IDN_BTN_START:
		if(isConnected) {
			AppLog("END_REMOTE - !");

			pApp->SendUserEvent(END_REMOTE, null);
			isConnected=!isConnected;
		} else {
			AppLog("START_REMOTE - !");

			pApp->SendUserEvent(START_REMOTE, null);
			isConnected=!isConnected;
		}
		resetStartButton();
		break;
	}

}

void Mainform::resetStartButton() {
	Bitmap *normalBtn;
	Bitmap *pressBtn;

	if(isConnected) {
		normalBtn=pAppResource->GetBitmapN(L"btn_on_normal.png");
		pressBtn=pAppResource->GetBitmapN(L"btn_on_push.png");

	} else {
		normalBtn=pAppResource->GetBitmapN(L"btn_off_normal.png");
		pressBtn=pAppResource->GetBitmapN(L"btn_off_push.png");

	}

	pStart->SetNormalBackgroundBitmap(*normalBtn);
	pStart->SetPressedBackgroundBitmap(*pressBtn);

	delete normalBtn;
	delete pressBtn;
}
