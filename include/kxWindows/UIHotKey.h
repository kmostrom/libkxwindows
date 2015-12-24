
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIHotKey: public UIWindow
{
public:
	UIHotKey(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(HOTKEY_CLASS);
	};

	UIHotKey(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT GetHotKey(void);
	LRESULT SetHotKey(UINT virtualKey, UINT keyModifier);
	LRESULT SetRules(DWORD keyCombinations, DWORD invalidModifiers);
};

////////////////////////////////////////////////////////////////////////////////
