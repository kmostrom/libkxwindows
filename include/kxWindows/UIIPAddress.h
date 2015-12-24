
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIIPAddress: public UIWindow
{
public:
	UIIPAddress(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(WC_IPADDRESS);
	};

	UIIPAddress(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT ClearAddress(void);
	LRESULT GetAddress(LPDWORD address);
};

////////////////////////////////////////////////////////////////////////////////
