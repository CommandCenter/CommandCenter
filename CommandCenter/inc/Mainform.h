
#ifndef _MAINFORM_H_
#define _MAINFORM_H_

#include <FApp.h>
#include <FBase.h>
#include <FUi.h>
#include <FGraphics.h>

#include "EnvironmentData.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Graphics;

class Mainform :
	public Tizen::Ui::Controls::Form,
 	public Tizen::Ui::IActionEventListener
{

// Construction
public:
	Mainform(void);
	virtual ~Mainform(void);
	bool Initialize();
	result OnInitializing(void);
	result OnTerminating(void);

// Implementation
protected:

// Generated call-back functions
public:
	AppResource *pAppResource;

	bool isConnected;
	Button* pStart;
	static const int IDN_BTN_START=100;

	virtual result OnDraw(void);
	virtual void OnActionPerformed(const Tizen::Ui::Control& source, int actionId);
	void resetStartButton();
};

#endif
