
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <kxWindows/UIWindow.h>

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIComboBoxEx: public UIWindow
{
public:
	UIComboBoxEx(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName(WC_COMBOBOXEX);
	};

	UIComboBoxEx(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT DeleteItem(DWORD dwIndex);
	LRESULT GetComboControl(void);
	LRESULT GetEditControl(void);
	LRESULT GetExtendedStyle(void);
	LRESULT GetImageList(void);
	LRESULT GetItem(PCOMBOBOXEXITEM pItem);
	LRESULT GetUnicodeFormat(void);
	LRESULT HasEditChanged(void);
	LRESULT InsertItem(PCOMBOBOXEXITEM pItem);
	LRESULT SetExtendedStyle(DWORD dwExMask, DWORD dwExStyle);
	LRESULT SetImageList(HIMAGELIST hImageList);
	LRESULT SetItem(PCOMBOBOXEXITEM pItem);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
	LRESULT SetWindowTheme(LPWSTR pwszStr);
};

////////////////////////////////////////////////////////////////////////////////
