
/////////////////////////////////////////////////////////////////////////////////

#include <kxwindows/UIApplication.h>
#include <kxWindows/Rect.h>

/////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UIApplication::WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	OutputDebugString("UIApplication::WndProc()");
	switch (message)
	{
	case WM_DESTROY:
		::PostQuitMessage(0);
		return 0;

	case WM_CLOSE:
		::DestroyWindow(mWindow.GetWindowHandle());
		//OnClose();
		return 0;

	case WM_KEYDOWN:
	{
		// int keyCode = wParam;
		// mApplication.OnKey(keyCode);
	}
	return 0;

	/*
	case WM_COMMAND:
	{
		if (lParam == 0)
		{	// this is either a menu or an accelerator
			if (HIWORD(wParam) == 0)
			{ // menu
			  // int menuIdentifier = LOWORD(wParam);
			}
			else if (HIWORD(wParam) == 1)
			{ // accelerator
				int acceleratorIdentifier = LOWORD(wParam);

				if (acceleratorIdentifier == IDM_RENAME)
				{
					mApplication.Rename();
					FilePaneContentChanged();
				}
				else if (acceleratorIdentifier == IDM_VIEW)
				{
					FilePaneContentChanged();
				}
				else if (acceleratorIdentifier == IDM_EDIT)
				{
				}
				else if (acceleratorIdentifier == IDM_COPY)
				{
					mApplication.Copy();
					FilePaneContentChanged();
				}
				else if (acceleratorIdentifier == IDM_MOVE)
				{
					mApplication.Move();
					FilePaneContentChanged();
				}
				else if (acceleratorIdentifier == IDM_CREATE_DIRECTORY)
				{
					mApplication.CreateNewDirectory();
					FilePaneContentChanged();
				}
				else if (acceleratorIdentifier == IDM_DELETE)
				{
					//mApplication.Delete();
					//FilePaneContentChanged();
				}
				else if (acceleratorIdentifier == IDM_ENTER)
				{
					UIFileListPane* filePane = GetFilePane(mApplication.GetActivePane());

					std::string text = filePane->GetText(filePane->GetCurSel());

					if (filePane == &mListBoxLeft)
					{
						ChangeDirectory(Application::PANE_LEFT, text.c_str());
					}
					else if (filePane == &mListBoxRight)
					{
						ChangeDirectory(Application::PANE_RIGHT, text.c_str());
					}
				}
				else if (acceleratorIdentifier == IDM_TOGGLE_PANE)
				{
					mApplication.ToggleActivePane();
				}
				else if (acceleratorIdentifier == IDM_QUIT)
				{
					OnClose();
				}
			}
		}
		else
		{
			// HWND controlHandle = reinterpret_cast<HWND>(lParam);
			// UINT controlId = LOWORD(wParam);
			// UINT controlNotificationCode = HIWORD(wParam);
		}
	}
	return 0;
	*/

	case WM_SIZE:
	{
		// int width = LOWORD(lParam);
		// int height = HIWORD(lParam);
		// SetSize();
	}
	return 0;

	default:
		break;
	}

	return ::DefWindowProc(windowHandle, message, wParam, lParam);
}

/////////////////////////////////////////////////////////////////////////////////

void UIApplication::CreateWindows(const char* title, int width, int height)
{
	OutputDebugString("UIApplication::CreateWindows()");
	INITCOMMONCONTROLSEX iccex =
	{
		sizeof(INITCOMMONCONTROLSEX),
		ICC_ANIMATE_CLASS | ICC_BAR_CLASSES | ICC_COOL_CLASSES | ICC_DATE_CLASSES | ICC_HOTKEY_CLASS | ICC_INTERNET_CLASSES | ICC_LISTVIEW_CLASSES | ICC_PAGESCROLLER_CLASS | ICC_PROGRESS_CLASS | ICC_TAB_CLASSES | ICC_TREEVIEW_CLASSES | ICC_UPDOWN_CLASS | ICC_USEREX_CLASSES | ICC_WIN95_CLASSES
	};
	::InitCommonControlsEx(&iccex);

	const char* WINDOW_CLASS_NAME = "KCOMMANDER_CLASS";
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
		(HBRUSH)GetSysColorBrush(0),
		NULL,
		WINDOW_CLASS_NAME,
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
		WINDOW_CLASS_NAME,
		title,
		dwStyle,
		Rect(0, 0, width, height),
		NULL,
		NULL,
		(LPVOID)this);

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

	/*
	mAcceleratorTable = ::LoadAccelerators(::GetModuleHandle(NULL), MAKEINTRESOURCE(IDR_ACCELERATORS));
	if (mAcceleratorTable == NULL)
	{
		MessageBox(NULL, "Failed loading accelerator table", "LoadAccelerator()", MB_OK | MB_ICONEXCLAMATION);
	}

	mButton.Create("Push me!", mWindow.GetWindowHandle(), 10);

	SetSize();

	mApplication.Init(&mFileSystem);
	mApplication.OnViewCreated();
	*/
}

/////////////////////////////////////////////////////////////////////////////////
