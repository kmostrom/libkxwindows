////////////////////////////////////////////////////////////////////////////////

#ifndef _ZCOMBOBOX_H_
#define _ZCOMBOBOX_H_

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#include <windows.h>
#include <commctrl.h>
#include "ZBaseChildWindow.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////

class ZComboBox: public ZBaseChildWindow
{
public:
	ZComboBox(HWND hWndParent)
		:	ZBaseChildWindow(hWndParent)
	{
		SetClassName( WC_COMBOBOX );
	}

	ZComboBox(HWND hWndParent, UINT uiID)
		:ZBaseChildWindow(hWndParent, uiID)
	{  };

	//

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

	//

protected:

	// The message handler for this window
	LRESULT CALLBACK WinMsgHandler(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		switch (uMsg)
		{

			case WM_SIZE:
	//			MessageBox(NULL, "WM_SIZE", "", MB_OK);
			break;

			default:
				return DefWindowProc(hwnd, uMsg, wParam, lParam);
		}

		return 0;
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

#endif
