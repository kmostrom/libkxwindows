
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIProgressBar: public UIWindow
{
public:
	UIProgressBar(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(PROGRESS_CLASS);
	};

	UIProgressBar(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT DeltaPos(long lIncrement);
	LRESULT GetPos(void);
	LRESULT GetRange(BOOL bWhichLimit, PBRANGE *pRange = NULL);
	LRESULT SetBarColor(COLORREF rgbBarColor = CLR_DEFAULT);
	LRESULT SetBkColor(COLORREF rgbBkColor = CLR_DEFAULT);
	LRESULT SetMarquee(BOOL bOn, UINT uiUpdateInterval);
	LRESULT SetPos(int iNewPos);
	LRESULT SetRange(int iMin = 0, int iMax = 100);
	LRESULT SetRange32(int iMin = 0, int iMax = 100);
	LRESULT SetStep(long lStep);
	LRESULT StepIt(void);
};

////////////////////////////////////////////////////////////////////////////////
