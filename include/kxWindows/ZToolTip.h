// H ///////////////////////////////////////////////////////////////////////////

#ifndef _ZToolTip_H_
#define _ZToolTip_H_

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#include <windows.h>
#include <commctrl.h>
#include "ZBaseChildWindow.h"

////////////////////////////////////////////////////////////////////////////////

class ZToolTip: public ZBaseChildWindow
{
public:
	ZToolTip(HWND hWndParent)
	: ZBaseChildWindow(hWndParent)
	{
		SetClassName( TOOLTIPS_CLASS );
	};

	ZToolTip(HWND hWndParent, UINT uiID)
	: ZBaseChildWindow(hWndParent, uiID)
	{
	};

	//

	LRESULT Activate(BOOL bActivate);
	LRESULT AddTool(LPTOOLINFO pToolInfo);
	LRESULT AdjustRect(BOOL bLarger, LPRECT pRect);
	LRESULT DelTool(LPTOOLINFO pToolInfo);
	LRESULT EnumTools(UINT uiTool, LPTOOLINFO pToolInfo);
	LRESULT GetBubbleSize(LPTOOLINFO pToolInfo);
	LRESULT GetCurrentTool(LPTOOLINFO pToolInfo);
	LRESULT GetDelayTime(DWORD dwDuration);
	LRESULT GetMargin(LPRECT pRect);
	LRESULT GetMaxTipWidth(void);
	LRESULT GetText(LPTOOLINFO pToolInfo);
	LRESULT GetTipBkColor(void);
	LRESULT GetTipTextColor(void);
	LRESULT GetTitle(PTTGETTITLE pGetTitle);
	LRESULT GetToolCount(void);
	LRESULT GetToolInfo(LPTOOLINFO pToolInfo);
	LRESULT HitTest(LPHITTESTINFO pHitTestInfo);
	LRESULT NewToolRect(LPTOOLINFO pToolInfo);
	LRESULT Pop(void);
	LRESULT PopUp(void);
	LRESULT RelayEvent(LPMSG pMsg);
	LRESULT SetDelayTime(DWORD dwDuration, int iTime);
	LRESULT SetMargin(LPRECT pRect);
	LRESULT SetMaxTipWidth(int iWidth);
	LRESULT SetTipBkColor(COLORREF clrBk);
	LRESULT SetTipTextColor(COLORREF clrText);
	LRESULT SetTitle(int iIcon, LPCTSTR pcszTitle);
	LRESULT SetToolInfo(LPTOOLINFO pToolInfo);
	LRESULT SetWindowTheme(LPWSTR pwszStr);
	LRESULT TrackActivate(BOOL bActivate, LPTOOLINFO pToolInfo);
	LRESULT TrackPosition(int iXPos, int iYPos);
	LRESULT Update(void);
	LRESULT UpdateTipText(LPTOOLINFO pToolInfo);
	LRESULT WindowFromPoint(LPPOINT pPoint);

	//

protected:
};

////////////////////////////////////////////////////////////////////////////////

#endif