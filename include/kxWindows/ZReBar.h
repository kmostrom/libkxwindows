// H ///////////////////////////////////////////////////////////////////////////

#ifndef _ZReBar_H_
#define _ZReBar_H_

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#include <windows.h>
#include <commctrl.h>
#include <uxtheme.h>
#include "ZBaseChildWindow.h"

////////////////////////////////////////////////////////////////////////////////

class ZReBar: public ZBaseChildWindow
{
public:

	// TODO: Default Constructor?, More extensive constructor Parent, Style, ExStyle, Dimensions, Vertical
	ZReBar(HWND hWndParent)
	: ZBaseChildWindow(hWndParent, REBARCLASSNAME)
	{
	};

	ZReBar(HWND hWndParent, UINT uiID)
	: ZBaseChildWindow(hWndParent, uiID)
	{	// Used to take control over a rebar created from a dialog template
	};

	//

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

	// Custom Member functions
	DWORD	GetBandIndex(HWND hWnd);
	LRESULT	SetBarInfo(HIMAGELIST himl);
	LRESULT InsertBand(HBITMAP hbmBackground = 0, HWND hWndChild = 0, UINT cxMinChild = 0, UINT cyMinChild = 0, UINT cyChild = 0, UINT cyMaxChild = 0, UINT cyIntegral = 0, COLORREF clrFore = 0, COLORREF clrBack = 0, UINT cxHeader = 0, UINT cxIdeal = 0, UINT wID = 0, int iImage = 0, LPARAM lParam = 0, UINT cx = 0, UINT fStyle = 0, LPTSTR lpText = 0);

protected:
};

////////////////////////////////////////////////////////////////////////////////

#endif