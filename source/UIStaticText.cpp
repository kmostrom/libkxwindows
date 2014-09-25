////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/UIStaticText.h>

////////////////////////////////////////////////////////////////////////////////

HWND UIStaticText::Create(const char* text, HWND parentWindowHandle, UINT id)
{
	mWindowHandle = CreateWindowEx(
		0,
		this->GetClassNameA(),
		text,
		WS_VISIBLE | WS_CHILD,
		0, 0, 120, 27,
		parentWindowHandle,
		(HMENU) id,
		GetModuleHandle(NULL),
		NULL);

	PostMessage(mWindowHandle, WM_SETFONT, (WPARAM) GetStockObject(ANSI_VAR_FONT), FALSE);

	return mWindowHandle;
}