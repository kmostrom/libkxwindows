
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <windows.h>

#include <kxWindows/UIFileListPane.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UIFileListPane::WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_KEYDOWN:
		PostMessage(mParentWindowHandle, WM_KEYDOWN, (WPARAM) wParam, (LPARAM) 0);
		break;
	case WM_SETFOCUS:
		PostMessage(mParentWindowHandle, EMessage::WM_FILEPANE_GOTFOCUS, (WPARAM) windowHandle, (LPARAM) 0);
		break;
	case WM_KILLFOCUS:
		SetCurSel(-1);
		break;
	}

	return CallWindowProc(mOldWndProc, windowHandle, message, wParam, lParam);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
