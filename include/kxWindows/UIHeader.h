
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIHeader: public UIWindow
{
public:
	UIHeader(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName(WC_HEADER);
	};

	UIHeader(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT ClearFilter(int filter);
	LRESULT CreateDragImage(int index);
	LRESULT DeleteItem(int index);
	LRESULT EditFilter(int column, BOOL discardChanges);
	LRESULT GetBitmapMargin(void);
	LRESULT GetImagelist(void);
	LRESULT GetItem(int index, LPHDITEM headerItem);
	LRESULT GetItemCount(void);
	LRESULT GetItemRect(int index, LPRECT rect);
	LRESULT GetOrderArray(int size, LPINT array);
	LRESULT GetUnicodeFormat(void);
	LRESULT HitTest(LPHDHITTESTINFO hitTestInfo);
	LRESULT InsertItem(int index, LPHDITEM item);
	LRESULT Layout(LPHDLAYOUT headerLayout);
	LRESULT OrderToIndex(int order);
	LRESULT SetBitmapMargin(int width);
	LRESULT SetFilterChangeTimeout(int timeout);
	LRESULT SetHotDivider(BOOL coord, DWORD inputValue);
	LRESULT SetImagelist(HIMAGELIST imagelistHandle);
	LRESULT SetItem(int index, LPHDITEM item);
	LRESULT SetOrderArray(int size, LPINT array);
	LRESULT SetUnicodeFormat(BOOL unicode);
};

////////////////////////////////////////////////////////////////////////////////
