
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>
#include <uxtheme.h>

////////////////////////////////////////////////////////////////////////////////

class UIReBar: public UIWindow
{
public:
	UIReBar(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName(REBARCLASSNAME);
	};

	UIReBar(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT BeginDrag(UINT uiBand, DWORD dwPos);
	LRESULT DeleteBand(UINT uiBand);
	LRESULT DragMove(DWORD dwPos);
	LRESULT EndDrag(void);
	LRESULT GetBandBorders(UINT uiBand, LPRECT pRect);
	UINT	GetBandCount(void);
	LRESULT GetBandInfo(UINT uiBand, LPREBARBANDINFO pBandInfo);
	LRESULT GetBandMargins(PMARGINS pMargins);
	LRESULT GetBarHeight(void);
	LRESULT GetBarInfo(LPREBARINFO pRebarInfo);
	LRESULT GetBkColor(void);
	LRESULT GetColorScheme(LPCOLORSCHEME pColorScheme);
	LRESULT GetDropTarget(IDropTarget **ppDropTarget);
	LRESULT GetPalette(void);
	LRESULT GetRect(UINT uiBand, LPRECT pRect);
	LRESULT GetRowCount(void);
	LRESULT GetRowHeight(UINT uiBand);
	LRESULT GetTextColor(void);
	LRESULT GetToolTips(void);
	LRESULT GetUnicodeFormat(void);
	LRESULT HitTest(LPRBHITTESTINFO pHitTestInfo);
	LRESULT IDToIndex(UINT uiBand);
	LRESULT InsertBand(UINT uiBand, LPREBARBANDINFO pBandInfo);
	LRESULT MaximizeBand(UINT uiBand, BOOL bIdeal);
	LRESULT MinimizeBand(UINT uiBand);
	LRESULT MoveBand(UINT uiFrom, UINT uiTo);
	LRESULT PushChevron(UINT uiBand, long lAppValue);
	LRESULT SetBandInfo(UINT uiBand, LPREBARBANDINFO pBandInfo);
	LRESULT SetBarInfo(LPREBARINFO pRebarInfo);
	LRESULT SetBkColor(COLORREF clrBk);
	LRESULT SetColorScheme(LPCOLORSCHEME pColorScheme);
	LRESULT SetPalette(HPALETTE hPalette);
	LRESULT SetParent(HWND hWndParent);
	LRESULT SetTextColor(COLORREF clrText);
	LRESULT SetToolTips(HWND hWndToolTip);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
	LRESULT SetWindowTheme(LPWSTR pwStr);
	LRESULT ShowBand(UINT uiBand, BOOL bShow);
	LRESULT SizeToRect(LPRECT pRect);

	////

	DWORD	GetBandIndex(HWND hWnd);
	LRESULT	SetBarInfo(HIMAGELIST himl);
	LRESULT InsertBand(REBARBANDINFO& rebarBandInfo);
};

////////////////////////////////////////////////////////////////////////////////
