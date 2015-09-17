
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIScrollBar: public UIWindow
{
public:
	UIScrollBar(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName(WC_SCROLLBAR);
	};

	UIScrollBar(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	BOOL SetScrollRange(int iBar, int iMinPos, int iMaxPos, BOOL bRedraw = TRUE);
	int SetScrollPos(int iBar, int iPos, BOOL bRedraw = TRUE);
	int SetScrollInfo(int iBarType, LPCSCROLLINFO pScrollInfo, BOOL bRedraw = TRUE);
};

////////////////////////////////////////////////////////////////////////////////
