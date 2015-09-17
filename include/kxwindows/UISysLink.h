
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UISysLink: public UIWindow
{
public:
	UISysLink(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName( /*WC_LINK*/"SysLink" );
	};

	UISysLink(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT GetIdealHeight(void);
	LRESULT GetItem(PLITEM pItem);
	LRESULT HitTest(PLHITTESTINFO pHitTestInfo);
};

////////////////////////////////////////////////////////////////////////////////
