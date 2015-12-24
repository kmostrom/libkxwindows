
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIDateTimePicker: public UIWindow
{
public:
	UIDateTimePicker(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(DATETIMEPICK_CLASS);
	};

	UIDateTimePicker(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT GetMCColor(int color);
	LRESULT GetMCFont(void);
	LRESULT GetMonthCal(void);
	LRESULT GetRange(LPSYSTEMTIME systemTime);
	LRESULT GetSystemTime(LPSYSTEMTIME systemTime);
	LRESULT SetFormat(LPCTSTR format);
	LRESULT SetMCColor(int color, COLORREF colorStruct);
	LRESULT SetMCFont(HFONT font, BOOL redraw);
	LRESULT SetRange(DWORD flags, LPSYSTEMTIME systemTime);
	LRESULT SetSystemTime(DWORD flags, LPSYSTEMTIME systemTime);
};

////////////////////////////////////////////////////////////////////////////////
