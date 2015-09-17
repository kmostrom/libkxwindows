////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <windows.h>
#include <commctrl.h>
#include <string>

#include "UIWindow.h"

////////////////////////////////////////////////////////////////////////////////

class UIListBox: public UIWindow
{
public:
	UIListBox()
		: UIWindow()
	{
		SetClassName(WC_LISTBOX);
	};

	LRESULT AddFile(LPCTSTR pszFilename);					
	LRESULT AddString(LPCTSTR pszString);
	LRESULT DeleteString(int iIndex);
	LRESULT Dir(UINT uAttrib, LPCTSTR pszPath);
	LRESULT FindString(long lIndex, LPCTSTR pszString);
	LRESULT FindStringExact(long lIndex, LPCSTR pszString);
	LRESULT GetAnchorIndex(void);
	LRESULT GetCaretIndex(void);
	LRESULT GetCount(void);
	LRESULT GetCurSel(void);
	LRESULT GetHorizontalExtent(void);
	LRESULT GetItemData(long lIndex);
	LRESULT GetItemHeight(long lIndex);
	LRESULT GetItemRect(long lIndex, LPRECT pRect);
	LRESULT GetListboxInfo(void);
	LRESULT GetLocale(void);
	LRESULT GetSel(long lIndex);
	LRESULT GetSelCount(void);
	LRESULT GetSelItems(long lItemCount, LPUINT puiItems);
	LRESULT GetText(long lIndex, LPCTSTR pszString);
	LRESULT GetTextLen(long lIndex);
	LRESULT GetTopIndex(void);
	LRESULT InitStorage(long lItemCount, long lBytes);
	LRESULT InsertString(long lIndex, LPCTSTR pszString);
	LRESULT ItemFromPoint(long lX, long lY);
	LRESULT ResetContent(void);
	LRESULT SelectString(long lIndex, LPCTSTR pszString);
	LRESULT SelItemRange(BOOL bSelect, long lStartIndex, long lEndIndex);
	LRESULT SelItemRangeEx(long lStartIndex, long lEndIndex);
	LRESULT SetAnchorIndex(long lIndex);
	LRESULT SetCaretIndex(long lIndex, BOOL bScroll);
	LRESULT SetColumnWidth(long lWidth);
	LRESULT SetCount(long lCount);
	LRESULT SetCurSel(long lIndex);
	LRESULT SetHorizontalExtent(long lExtent);
	LRESULT SetItemData(long lIndex, long lValue);
	LRESULT SetItemHeight(long lIndex, long lHeight);
	LRESULT SetLocale(WORD wLocale);
	LRESULT SetSel(BOOL bSelect, long lIndex);
	LRESULT SetTabStops(long lTabStopCount, LPUINT puiTabStops);
	LRESULT SetTopIndex(long lIndex);

	HWND Create(HWND parentWindowHandle, UINT id);

	virtual LRESULT CALLBACK WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);

	//

	std::string GetText(int index);
};

////////////////////////////////////////////////////////////////////////////////
