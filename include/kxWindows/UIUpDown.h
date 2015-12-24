
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIUpDown: public UIWindow
{
public:
	UIUpDown(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName(UPDOWN_CLASS);
	};

	UIUpDown(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT GetAccel(int iAccel, LPUDACCEL pAccel);
	LRESULT GetBase(void);
	LRESULT GetBuddy(void);
	LRESULT GetPos(void);
	LRESULT GetPos32(LPBOOL pbError);
	LRESULT GetRange(void);
	LRESULT GetRange32(LPINT piLow, LPINT piHigh);
	LRESULT GetUnicodeFormat(void);
	LRESULT SetAccel(int iAccel, LPUDACCEL pAccel);
	LRESULT SetBase(int iBase);
	LRESULT SetBuddy(HWND hWndBuddy);
	LRESULT SetPos(int iPos);
	LRESULT SetPos32(int iPos);
	LRESULT SetRange(int iUpper, int iLower);
	LRESULT SetRange32(int iLow, int iHigh);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
};

////////////////////////////////////////////////////////////////////////////////
