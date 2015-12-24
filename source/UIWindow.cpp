/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/UIWindow.h>
#include <kxWindows/Rect.h>

#include <cassert>
<<<<<<< HEAD
=======
#include <cstdarg>
#include <cstdio>
>>>>>>> origin/master

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UIWindow::UIWindow()
:	mParentWindowHandle(NULL),
	mWindowHandle(NULL),
	mWindowText(NULL),
	mClassName(NULL),
	mStyle(0),
	mExStyle(0),
	mMenuHandle(NULL),
	mOldWndProc(NULL)
{
	::ZeroMemory(&mClientRect, sizeof(RECT));
	SetWindowText("");
	SetClassName("");
}

UIWindow::UIWindow(HWND hWndParent)
:	mParentWindowHandle(hWndParent),
	mWindowHandle(NULL),
	mWindowText(NULL),
	mClassName(NULL),
	mStyle(0),
	mExStyle(0),
	mMenuHandle(NULL)
{
	::ZeroMemory(&mClientRect, sizeof(RECT));
	SetWindowText("");
	SetClassName("");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UIWindow::~UIWindow()
{
	if (mWindowText)
	{
		delete [] mWindowText;
		mWindowText = NULL;
	}

	if (mClassName)
	{
		delete [] mClassName;
		mClassName = NULL;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
	Sets the window text to the specified string
	If a previous window text was allocated it is deallocated before the new string is allocated
	The new string is allocated a size of strlen(newString) + 1.

	Returns true on success else false
*/
bool UIWindow::SetWindowText(const char* text)
{
	if (mWindowText)
	{
		delete [] mWindowText;
		mWindowText = NULL;
	}

	mWindowText = new char[strlen(text) + 1];
	if (mWindowText)
	{
<<<<<<< HEAD
		strcpy(mWindowText, text);
=======
		strcpy_s(mWindowText, _msize(mWindowText), text);
>>>>>>> origin/master
		::SetWindowText(mWindowHandle, mWindowText);
	}

	return mWindowText != NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
	Sets the window class name to the specified string
	If a previous window text was allocated it is deallocated before the new string is allocated
	The new string is allocated a size of strlen(newString) + 1.

	Returns true on success else false
*/
bool UIWindow::SetClassName(const char* className)
{
	if (mClassName)
	{
		delete [] mClassName;
		mClassName = NULL;
	}

	mClassName = new char[strlen(className) + 1];
	if (mClassName)
	{
<<<<<<< HEAD
		strcpy(mClassName, className);
=======
		strcpy_s(mClassName, _msize(mClassName), className);
>>>>>>> origin/master
	}

	return mClassName != NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LONG_PTR UIWindow::GetWindowLongPTR(int index) const
{
	return(::GetWindowLongPtr(mWindowHandle, index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LONG_PTR UIWindow::SetWindowLongPTR(int index, LONG_PTR dwNewLong)
{
	return( (LONG_PTR) ::SetWindowLongPtr(mWindowHandle, index, (LONG) dwNewLong) );
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIWindow::SendMessage(UINT message, WPARAM wParam, LPARAM lParam)
{
	return(::SendMessage(mWindowHandle, message, wParam, lParam));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void UIWindow::SetFont(HFONT fontHandle, bool forceRedraw)
{
	::SendMessage(mWindowHandle, WM_SETFONT, (WPARAM) fontHandle, (LPARAM) forceRedraw);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL UIWindow::MoveWindow(int x, int y, int width, int height, bool forceRepaint)
{
	mClientRect = Rect(x, y, width, height);

	return( ::MoveWindow(mWindowHandle, mClientRect.left, mClientRect.top, mClientRect.right, mClientRect.bottom, forceRepaint) );
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Beginning of custom functions

HWND UIWindow::SetParent(HWND newParentWindowHandle)
{
	// Try to set the new parent window
	HWND oldParentWindowHandle = ::SetParent(mWindowHandle, newParentWindowHandle);
	if (oldParentWindowHandle)
	{
		// Succeeded! update _hWndParent member
		mParentWindowHandle = newParentWindowHandle;
	}

	// Return result (either NULL or handle to previous parent window 
	// depending on the outcome of previous call to ::SetParent()
	return oldParentWindowHandle;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HWND UIWindow::CreateEx(
	DWORD exStyle, 
	const char* className, 
	const char* windowText, 
	DWORD style, 
	RECT clientRect, 
	HWND parentWindowHandle, 
	HMENU menuHandle, 
	void* createParam)
{
	SetWindowText(windowText);
	SetClassName(className);
	SetParent(parentWindowHandle);

	mClientRect = clientRect;
	mMenuHandle = menuHandle;
	mExStyle = exStyle;
	mStyle = style;

	mWindowHandle = ::CreateWindowEx
	( 
		mExStyle,
		mClassName,
		mWindowText,
		mStyle,
		mClientRect.left,
		mClientRect.top,
		mClientRect.right,
		mClientRect.bottom,
		mParentWindowHandle,
		mMenuHandle,
		::GetModuleHandle(NULL),
		createParam
	);

	return mWindowHandle;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
	Sets up the class members with all the properties of hWnd (including the handle itself)
*/
void UIWindow::Assimilate(HWND hWnd)
{
	assert(hWnd);

	DWORD windowTextLength = ::GetWindowTextLength(hWnd);

	char* tmpBuffer = new char[windowTextLength];
	if (tmpBuffer)
	{
		::GetWindowText(hWnd, tmpBuffer, windowTextLength);
		SetWindowText(tmpBuffer);
		delete(tmpBuffer);
	}

	tmpBuffer = new char[512];
	if (tmpBuffer)
	{
		::GetClassName(hWnd, tmpBuffer, 256);
		SetClassName(tmpBuffer);
		delete(tmpBuffer);
	}

	::GetClientRect(hWnd, &mClientRect);

	mParentWindowHandle = ::GetParent(hWnd);
	mStyle = (DWORD) ::GetWindowLongPtr(hWnd, GWL_STYLE); 
	mExStyle = (DWORD) ::GetWindowLongPtr(hWnd, GWL_EXSTYLE);
	mMenuHandle = ::GetMenu(hWnd);
	if(!mMenuHandle) // Window is probably a child window
	{
		mMenuHandle = (HMENU) ::GetDlgCtrlID(hWnd);
	}

	SetWindowHandle(hWnd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

RECT UIWindow::GetClientRect() const
{ 
	RECT rect;
	::GetClientRect(mWindowHandle, &rect);
	return rect;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UIWindow::stWndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	UIWindow* window = (UIWindow *) GetWindowLongPtr(windowHandle, GWLP_USERDATA);
<<<<<<< HEAD
	if(window)
	{
		return window->WndProc(windowHandle, message, wParam, lParam);
	}
=======
	assert(window);
	return window->WndProc(windowHandle, message, wParam, lParam);
>>>>>>> origin/master
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void UIWindow::SubClass(WNDPROC wndProc)
{
	mOldWndProc = (WNDPROC) SetWindowLong(mWindowHandle, GWL_WNDPROC, (LONG) wndProc);
	SetWindowLong(mWindowHandle, GWL_USERDATA, (LONG) this);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void UIWindow::UnSubClass()
{
	SetWindowLong(mWindowHandle, GWL_WNDPROC, (LONG) mOldWndProc);
	mOldWndProc = nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UIWindow::WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam) 
{
	return CallWindowProc(mOldWndProc, windowHandle, message, wParam, lParam);
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
=======

int UIWindow::SetText(const char* format, ...)
{
	char buffer[512];
	va_list aptr;

	va_start(aptr, format);
	int ret = vsnprintf(buffer, sizeof(buffer), format, aptr);
	va_end(aptr);

	SetWindowTextA(buffer);

	return ret;
}
>>>>>>> origin/master
