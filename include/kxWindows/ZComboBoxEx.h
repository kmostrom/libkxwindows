// H ///////////////////////////////////////////////////////////////////////////

#ifndef _ZCOMBOBOXEX_H_
#define _ZCOMBOBOXEX_H_

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#include <windows.h>
#include <commctrl.h>
#include "ZBaseChildWindow.h"

////////////////////////////////////////////////////////////////////////////////

class ZComboBoxEx: public ZBaseChildWindow
{
public:
	ZComboBoxEx(HWND hWndParent)
	: ZBaseChildWindow(hWndParent)
	{
		SetClassName( WC_COMBOBOXEX );
	};

	ZComboBoxEx(HWND hWndParent, UINT uiID)
	: ZBaseChildWindow(hWndParent, uiID)
	{
	};

	//

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

	//

protected:
};

////////////////////////////////////////////////////////////////////////////////

#endif