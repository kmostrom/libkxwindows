
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIStatusBar: public UIWindow
{
public:
	UIStatusBar(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(STATUSCLASSNAME);
	};

	UIStatusBar(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT GetBorders(LPINT piBorders);
	LRESULT GetIcon(int iPart);
	LRESULT GetParts(int iPartCount, LPINT piParts);
	LRESULT GetRect(INT iPart, LPRECT pRect);
	LRESULT GetText(int iPart, LPSTR szText);
	LRESULT GetTextLength(int iPart);
	LRESULT GetTipText(int iPart, int iSize, LPCTSTR szToolTip);
	LRESULT GetUnicodeFormat(void);
	LRESULT IsSimple(void);
	LRESULT SetBkColor(COLORREF clrBk);
	LRESULT SetIcon(INT iPart, HICON hIcon);
	LRESULT SetMinHeight(int iHeight);
	LRESULT SetParts(int iPartCount, LPINT piParts);
	LRESULT SetText(int iPart, LPSTR szText);
	LRESULT SetTipText(INT iPart, LPCTSTR szToolTip);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
	LRESULT Simple(BOOL bSimple);
};

////////////////////////////////////////////////////////////////////////////////
