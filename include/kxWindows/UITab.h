
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UITab: public UIWindow
{
public:
	UITab(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName(WC_TABCONTROL);
	};

	UITab(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT AdjustRect(BOOL bLarger, LPRECT pRect);
	LRESULT DeleteAllItems(void);
	LRESULT DeleteItem(int iItem);
	LRESULT DeselectAll(DWORD dwExcludeFocus);
	LRESULT GetCurrentFocus(void);
	LRESULT GetCurSel(void);
	LRESULT GetExtendedStyle(void);
	LRESULT GetImagelist(void);
	LRESULT GetItem(int iItem, LPTCITEM pctItem);
	LRESULT GetItemCount(void);
	LRESULT GetItemRect(int iItem, LPRECT pRect);
	LRESULT GetRowCount(void);
	LRESULT GetToolTips(void);
	LRESULT GetUnicodeFormat(void);
	LRESULT HighlightItem(int iItem, BOOL bHighlight);
	LRESULT HitTest(LPTCHITTESTINFO pHitTestInfo);
	LRESULT InsertItem(int iItem, LPTCITEM pItem);
	LRESULT RemoveImage(int iImage);
	LRESULT SetCurFocus(int iItem);
	LRESULT SetCurSel(int iItem);
	LRESULT SetExtendedStyle(DWORD dwExMask, DWORD dwExStyle);
	LRESULT SetImagelist(HIMAGELIST hImagelist);
	LRESULT SetItem(int iItem, LPTCITEM pItem);
	LRESULT SetItemExtra(int iTab);
	LRESULT SetItemSize(int iTabX, int iTabY);
	LRESULT SetMinTabWidth(int iTabX);
	LRESULT SetPadding(int iPadX, int iPadY);
	LRESULT SetToolTips(HWND hWndToolTips);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
};

////////////////////////////////////////////////////////////////////////////////
