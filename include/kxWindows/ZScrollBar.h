// H ///////////////////////////////////////////////////////////////////////////

#ifndef _ZSCROLLBAR_H_
#define _ZSCROLLBAR_H_

#include <windows.h>
#include <commctrl.h>
#include "ZBaseChildWindow.h"

////////////////////////////////////////////////////////////////////////////////

class ZScrollBar: public ZBaseChildWindow
{
public:
	ZScrollBar(HWND hWndParent)
	: ZBaseChildWindow(hWndParent)
	{
		SetClassName( WC_SCROLLBAR );
	};

	ZScrollBar(HWND hWndParent, UINT uiID)
	: ZBaseChildWindow(hWndParent, uiID)
	{
	};

	//

	BOOL SetScrollRange(int iBar, int iMinPos, int iMaxPos, BOOL bRedraw = TRUE);
	int SetScrollPos(int iBar, int iPos, BOOL bRedraw = TRUE);
	int SetScrollInfo(int iBarType, LPCSCROLLINFO pScrollInfo, BOOL bRedraw = TRUE);

	//

protected:
};

////////////////////////////////////////////////////////////////////////////////

#endif