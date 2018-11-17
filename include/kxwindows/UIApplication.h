
/////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <kxWindows/WindowsApplication.h>
#include <kxWindows/UIWindow.h>

#include <Windows.h>
#include <CommCtrl.h>

/////////////////////////////////////////////////////////////////////////////////

class UIApplication : public WindowsApplication
{
public:
	UIApplication() { }

	virtual void CreateWindows(const char* title, int width, int height);
	virtual LRESULT CALLBACK WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);

private:
	UIWindow mWindow;
	HACCEL mAcceleratorTable;
};

/////////////////////////////////////////////////////////////////////////////////
