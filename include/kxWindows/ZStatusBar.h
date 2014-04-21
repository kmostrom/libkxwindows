// H ///////////////////////////////////////////////////////////////////////////

#ifndef _ZSTATUSBAR_H_
#define _ZSTATUSBAR_H_

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#include <windows.h>
#include <commctrl.h>
#include "ZBaseChildWindow.h"

////////////////////////////////////////////////////////////////////////////////

class ZStatusBar: public ZBaseChildWindow
{
public:
	ZStatusBar(HWND hWndParent)
	: ZBaseChildWindow(hWndParent)
	{
		SetClassName( STATUSCLASSNAME );
	};

	ZStatusBar(HWND hWndParent, UINT uiID)
	: ZBaseChildWindow(hWndParent, uiID)
	{
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

#endif