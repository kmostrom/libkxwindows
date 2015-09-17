
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIMonthCal: public UIWindow
{
public:
	UIMonthCal(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(MONTHCAL_CLASS);
	};

	UIMonthCal(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT GetColor(int color);
	LRESULT GetCurSel(LPSYSTEMTIME systemTime);
	LRESULT GetFirstDayOfWeek(void);
	LRESULT GetMaxSelCount(void);
	LRESULT GetMaxTodayWidth(void);
	LRESULT GetMinReqRect(LPRECT rect);
	LRESULT GetMonthDelta(void);
	LRESULT GetMonthRange(DWORD flag, LPSYSTEMTIME systemTime);
	LRESULT GetRange(LPSYSTEMTIME systemTime);
	LRESULT GetSelRange(LPSYSTEMTIME systemTime);
	LRESULT GetToday(LPSYSTEMTIME systemTime);
	LRESULT GetUnicodeFormat(void);
	LRESULT HitTest(PMCHITTESTINFO hitTestInfo);
	LRESULT SetColor(int color, COLORREF colorStruct);
	LRESULT SetCurSel(LPSYSTEMTIME systemTime);
	LRESULT SetDayState(int months, LPMONTHDAYSTATE dayState);
	LRESULT SetFirstDayOfWeek(int day);
	LRESULT SetMaxSelCount(int max);
	LRESULT SetMonthDelta(int delta);
	LRESULT SetRange(short whichLimit, LPSYSTEMTIME systemTime);
	LRESULT SetSelRange(LPSYSTEMTIME systemTime);
	LRESULT SetToday(LPSYSTEMTIME systemTime);
	LRESULT SetUnicodeFormat(BOOL unicode);
};

////////////////////////////////////////////////////////////////////////////////
