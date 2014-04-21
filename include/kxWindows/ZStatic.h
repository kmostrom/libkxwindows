// H ///////////////////////////////////////////////////////////////////////////

#ifndef _ZSTATIC_H_
#define _ZSTATIC_H_

#include <windows.h>
#include <commctrl.h>
#include "ZBaseChildWindow.h"

////////////////////////////////////////////////////////////////////////////////

class ZStatic: public ZBaseChildWindow
{
public:
	ZStatic(HWND hWndParent)
	: ZBaseChildWindow(hWndParent)
	{
		SetClassName( WC_STATIC );
	};

	ZStatic(HWND hWndParent, UINT uiID)
	: ZBaseChildWindow(hWndParent, uiID)
	{
	};

	//

	//

protected:
};

////////////////////////////////////////////////////////////////////////////////

#endif