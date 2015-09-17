
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIAnimate: public UIWindow
{
public:
	UIAnimate(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(ANIMATE_CLASS);
	};

	UIAnimate(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT Open(HINSTANCE instanceHandle, LPSTR name);
	LRESULT Play(UINT repeat, WORD from, WORD to);
	LRESULT Stop(void);
};

////////////////////////////////////////////////////////////////////////////////
