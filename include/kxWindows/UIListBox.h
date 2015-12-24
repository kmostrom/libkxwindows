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

	LRESULT AddFile(LPCTSTR filename);					
	LRESULT AddString(LPCTSTR string);
	LRESULT DeleteString(int index);
	LRESULT Dir(UINT attributes, LPCTSTR path);
	LRESULT FindString(long index, LPCTSTR string);
	LRESULT FindStringExact(long index, LPCSTR string);
	LRESULT GetAnchorIndex(void);
	LRESULT GetCaretIndex(void);
	LRESULT GetCount(void);
	LRESULT GetCurSel(void);
	LRESULT GetHorizontalExtent(void);
	LRESULT GetItemData(long index);
	LRESULT GetItemHeight(long index);
	LRESULT GetItemRect(long index, LPRECT rect);
	LRESULT GetListboxInfo(void);
	LRESULT GetLocale(void);
	LRESULT GetSel(long index);
	LRESULT GetSelCount(void);
	LRESULT GetSelItems(long itemCount, LPUINT items);
	LRESULT GetText(long index, LPCTSTR string);
	LRESULT GetTextLen(long index);
	LRESULT GetTopIndex(void);
	LRESULT InitStorage(long itemCount, long bytes);
	LRESULT InsertString(long index, LPCTSTR string);
	LRESULT ItemFromPoint(long x, long y);
	LRESULT ResetContent(void);
	LRESULT SelectString(long index, LPCTSTR string);
	LRESULT SelItemRange(BOOL select, long startIndex, long endIndex);
	LRESULT SelItemRangeEx(long startIndex, long endIndex);
	LRESULT SetAnchorIndex(long index);
	LRESULT SetCaretIndex(long index, BOOL scroll);
	LRESULT SetColumnWidth(long width);
	LRESULT SetCount(long count);
	LRESULT SetCurSel(long index);
	LRESULT SetHorizontalExtent(long extent);
	LRESULT SetItemData(long index, long value);
	LRESULT SetItemHeight(long index, long height);
	LRESULT SetLocale(WORD locale);
	LRESULT SetSel(BOOL select, long index);
	LRESULT SetTabStops(long tabStopCount, LPUINT tabStops);
	LRESULT SetTopIndex(long index);

	HWND Create(HWND parentWindowHandle, UINT id);

	virtual LRESULT CALLBACK WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);

	std::string GetText(int index);
};

////////////////////////////////////////////////////////////////////////////////
