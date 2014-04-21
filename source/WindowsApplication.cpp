
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/WindowsApplication.h>
#include <kxWindows/Rect.h>

#include <CommCtrl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

WindowsApplication::WindowsApplication() { }

///////////////////////////////////////////////////////////////////////////////////////////////////////

void WindowsApplication::CreateWindows()
{
	INITCOMMONCONTROLSEX iccex =
	{
		sizeof(INITCOMMONCONTROLSEX),
		ICC_ANIMATE_CLASS | ICC_BAR_CLASSES | ICC_COOL_CLASSES | ICC_DATE_CLASSES | ICC_HOTKEY_CLASS | ICC_INTERNET_CLASSES | ICC_LISTVIEW_CLASSES | ICC_PAGESCROLLER_CLASS | ICC_PROGRESS_CLASS | ICC_TAB_CLASSES | ICC_TREEVIEW_CLASSES | ICC_UPDOWN_CLASS | ICC_USEREX_CLASSES | ICC_WIN95_CLASSES
	};
	::InitCommonControlsEx( &iccex );

	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));

	const char* className = "KCOMMANDER";

	wc.cbSize = sizeof(wc);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = &WindowsApplication::stWndProc;
	wc.hInstance = GetModuleHandle(NULL);
	wc.lpszClassName = className;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH) GetSysColorBrush(0);
	wc.hCursor = LoadCursor(GetModuleHandle(NULL), IDC_ARROW);
	wc.hIcon = LoadIcon(GetModuleHandle(NULL), IDI_APPLICATION);
	wc.lpszMenuName = NULL;

	RegisterClassEx(&wc);

	int width = 800;
	int height = 600;

	mWindow.CreateEx(
		0,
		className,
		"kCommander",
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		Rect(0, 0, width, height),
		NULL,
		NULL,
		(LPVOID) this);

	mWindow.ShowWindow(TRUE);
	mWindow.UpdateWindow();
}

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
