////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

class UIComboBox: public UIWindow
{
public:
	UIComboBox(HWND parentWindowHandle)
		:	UIWindow(parentWindowHandle)
	{
		SetClassName(WC_COMBOBOX);
	}

	UIComboBox(HWND parentWindowHandle, UINT id)
		:UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT AddString(TCHAR *szString);
	LRESULT InsertString(long lIndex, TCHAR *szString);
	LRESULT DeleteString(long lIndex);

	LRESULT Dir(UINT uiAttrib, LPCSTR szFilename);
	LRESULT FindString(long lIndex, LPCSTR szQuery);
	LRESULT FindStringExact(long lIndex, LPCSTR szQuery);
	LRESULT GetComboboxInfo(COMBOBOXINFO *pComboBoxInfo);
	LRESULT GetCount(void);

	LRESULT GetCurSel(void);
	LRESULT GetDroppedControlRect(LPRECT pDroppedControlRect);
	LRESULT GetDroppedState(void);
	LRESULT GetDroppedWidth(void);

	LRESULT GetEditSel(DWORD dwStartPos, DWORD dwEndPos);
	LRESULT GetExtendedUI(void);
	LRESULT GetHorizontalExtent(void);
	LRESULT GetItemData(long lIndex);
	LRESULT GetItemHeight(long lIndex);
	LRESULT GetLbText(long lIndex, LPCSTR szString);
	LRESULT GetLbTextLen(long lIndex);
	LRESULT GetLocale(void);
	LRESULT GetMinVisible(void);
	LRESULT GetTopIndex(void);
	LRESULT InitStorage(long lItemCount, long lBytes);
	LRESULT LimitText(long lMaxChars);
	LRESULT ResetContent(void);
	LRESULT SelectString(long lIndex, LPCSTR szQuery);
	LRESULT SetCurSel(long lIndex);
	LRESULT SetDroppedWidth(long lWidth);
	LRESULT SetEditSel(long lStartPos, long lEndPos);
	LRESULT SetExtendedUI(BOOL bFlag);
	LRESULT SetHorizontalExtent(long lWidth);
	LRESULT SetItemData(long lIndex, DWORD dwData);
	LRESULT SetItemHeight(long lIndex, long lHeight);
	LRESULT SetLocale(WORD wLocale);
	LRESULT SetMinVisible(long lMinVisible);
	LRESULT SetTopIndex(long lIndex);
	LRESULT ShowDropdown(BOOL bFlag);

protected:
	LRESULT CALLBACK WinMsgHandler(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		switch (uMsg)
		{
			case WM_SIZE:
			break;

			default:
				return DefWindowProc(hwnd, uMsg, wParam, lParam);
		}

		return 0;
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////////
