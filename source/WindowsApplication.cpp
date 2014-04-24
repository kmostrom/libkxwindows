
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/WindowsApplication.h>
#include <kxWindows/Rect.h>

#include <CommCtrl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

WindowsApplication::WindowsApplication() { }

///////////////////////////////////////////////////////////////////////////////////////////////////////

int WindowsApplication::MessageLoop()
{
	MSG msg;
	BOOL result;
	while (result = GetMessage(&msg, NULL, 0, 0))
	{
		if (result == -1)
		{
			return -1;
		}

		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int) msg.wParam;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WindowsApplication::stWndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	if(message == WM_CREATE)
	{
		// window is created so store CREATESTRUCT data with window
		WindowsApplication* application = reinterpret_cast<WindowsApplication*>( ((CREATESTRUCT*) lParam)->lpCreateParams );

		SetWindowLongPtr(windowHandle, GWLP_USERDATA, (LONG) application);
	}

	WindowsApplication* targetApp = (WindowsApplication *) GetWindowLongPtr(windowHandle, GWLP_USERDATA);
	if(targetApp)
	{
		return targetApp->WndProc(windowHandle, message, wParam, lParam);
	}

	return DefWindowProc(windowHandle, message, wParam, lParam);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
