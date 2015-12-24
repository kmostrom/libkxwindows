
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIPageScroller: public UIWindow
{
public:
	UIPageScroller(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(WC_PAGESCROLLER);
	};

	UIPageScroller(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT ForwardMouse(BOOL forward);
	LRESULT GetBkColor(void);
	LRESULT GetBorder(void);
	LRESULT GetButtonSize(void);
	LRESULT GetButtonState(int button);
	LRESULT GetDropTarget(IDropTarget **dropTarget);
	LRESULT GetPos(void);
	LRESULT ReCalcSize(void);
	LRESULT SetBkColor(COLORREF backgroundColor);
	LRESULT SetBorder(int border);
	LRESULT SetButtonSize(int buttonSize);
	LRESULT SetChild(HWND childWindowHandle);
	LRESULT SetPos(int position);
};

////////////////////////////////////////////////////////////////////////////////
