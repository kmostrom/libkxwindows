/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <windows.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class UIWindow
{
public:
	UIWindow();
	UIWindow(HWND parentWindowHandle);
	virtual ~UIWindow();

	inline	HWND		GetWindowHandle(void) const						{ return mWindowHandle; }
	inline  void		SetWindowHandle(HWND windowHandle)				{ mWindowHandle = windowHandle; }
	inline	HWND		SetFocus(void)									{ return ::SetFocus(mWindowHandle); }
	inline	BOOL		ShowWindow(int cmdShow)							{ return ::ShowWindow(mWindowHandle, cmdShow); }
	inline	BOOL		UpdateWindow(void)								{ return ::UpdateWindow(mWindowHandle); }
			bool		SetWindowText(const char* windowText);
	inline	int			GetWindowTextLength(void) const					{ return ::GetWindowTextLength(mWindowHandle); }
			bool		SetClassName(const char* className);
	inline	const char*	GetClassName(void) const						{ return mClassName; }
			int			GetWindowText(char* text, int length) const		{ return ::GetWindowText(mWindowHandle, text, length); }

	inline	BOOL		EnableWindow(bool enable)						{ return ::EnableWindow(mWindowHandle, enable); }
			RECT		GetClientRect() const;

			BOOL		MoveWindow(int x, int y, int width, int height, bool forceRepaint);

			void		SetFont(HFONT fontHandle, bool forceRedraw);

			HWND		SetParent(HWND newParentWindowHandle);
	inline	HWND		GetParent(void) const							{ return ::GetParent(mWindowHandle); }

			void		Assimilate(HWND windowHandle);

			LRESULT		SendMessage(UINT message, WPARAM wParam, LPARAM lParam);

			LONG_PTR	SetWindowLongPTR(int index, LONG_PTR dwNewLong);
			LONG_PTR	GetWindowLongPTR(int index) const;

			HWND		CreateEx(DWORD exStyle, const char* className, const char* windowText, DWORD style, RECT clientRect, HWND hWndParent, HMENU hMenu, void* createParam);

	static LRESULT CALLBACK stWndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);

	virtual LRESULT CALLBACK WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);

			void SubClass(WNDPROC wndProc);
			void UnSubClass();

protected:
	HWND mWindowHandle;				
	HWND mParentWindowHandle;
	char* mWindowText;
	char* mClassName;
	RECT mClientRect;
	DWORD mStyle;
	DWORD mExStyle;
	HMENU mMenuHandle;

	WNDPROC mOldWndProc;
};

////////////////////////////////////////////////////////////////////////////////
