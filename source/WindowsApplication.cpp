
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/WindowsApplication.h>
#include <kxWindows/Rect.h>

#include <CommCtrl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

WindowsApplication::WindowsApplication() { }

///////////////////////////////////////////////////////////////////////////////////////////////////////

void WindowsApplication::CreateWindows(const char* windowClassName, const char* title, int width, int height)
{
	INITCOMMONCONTROLSEX iccex =
	{
		sizeof(INITCOMMONCONTROLSEX),
		ICC_ANIMATE_CLASS | ICC_BAR_CLASSES | ICC_COOL_CLASSES | ICC_DATE_CLASSES | ICC_HOTKEY_CLASS | ICC_INTERNET_CLASSES | ICC_LISTVIEW_CLASSES | ICC_PAGESCROLLER_CLASS | ICC_PROGRESS_CLASS | ICC_TAB_CLASSES | ICC_TREEVIEW_CLASSES | ICC_UPDOWN_CLASS | ICC_USEREX_CLASSES | ICC_WIN95_CLASSES
	};
	::InitCommonControlsEx(&iccex);

	WNDCLASSEX wc = 
	{
		sizeof(WNDCLASSEX),
		CS_HREDRAW | CS_VREDRAW | CS_OWNDC,
		&WindowsApplication::stWndProc,
		0,
		0,
		GetModuleHandle(NULL),
		LoadIcon(GetModuleHandle(NULL), IDI_APPLICATION),
		LoadCursor(GetModuleHandle(NULL), IDC_ARROW),
		(HBRUSH) GetSysColorBrush(0),
		NULL,
		windowClassName,
		LoadIcon(GetModuleHandle(NULL), IDI_APPLICATION)
	};

	if (!RegisterClassEx(&wc))
	{
		MessageBox(NULL, "Failed registering window class", "", MB_OK | MB_ICONEXCLAMATION);
	}

	DWORD dwStyleEx = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
	DWORD dwStyle = WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;

	mWindow.CreateEx(
		dwStyleEx,
		windowClassName,
		title,
		dwStyle,
		Rect(0, 0, width, height),
		NULL,
		NULL,
		(LPVOID) this);

	HWND hWnd = mWindow.GetWindowHandle();

	if (!hWnd)
	{
		MessageBox(NULL, "Error creating window handle", "Error", MB_OK | MB_ICONEXCLAMATION);
	}

	Rect clientRect = Rect(0, 0, width, height);
	AdjustWindowRectEx(&clientRect, dwStyle, false, dwStyleEx);
	MoveWindow(hWnd, 0, 0, clientRect.right, clientRect.bottom, TRUE);

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
