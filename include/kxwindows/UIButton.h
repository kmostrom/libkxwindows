/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <commctrl.h>

#include "UIWindow.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class UIButton: public UIWindow
{
public:
	UIButton()
		:	UIWindow()
	{
		SetClassName(WC_BUTTON);
	};

	// to be used if button is created in the resource editor
	// to take control of it
	UIButton(HWND parentWindowHandle, UINT id)
		:	UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	//

	LRESULT Click(void);
	LRESULT GetCheck(void);
	LRESULT GetImage(int iType);
	LRESULT GetState(void);
	LRESULT SetCheck(int iCheckState);
	LRESULT SetImage(int iImageType, HANDLE hImage);
	LRESULT SetState(BOOL bHighlight);
	LRESULT SetStyle(DWORD dwStyles, BOOL bRedraw);

	// Common Control Messages
	LRESULT GetIdealSize(LPSIZE pSize);
	LRESULT GetImageList(PBUTTON_IMAGELIST pImageList);
	LRESULT GetTextMargin(LPRECT pRect);
	LRESULT SetImageList(PBUTTON_IMAGELIST pImageList);
	LRESULT SetTextMargin(LPRECT pRect);
	//
//	LRESULT SetBitmapFromFile(LPCTSTR pszBitmap);
//	LRESULT SetIconFromFile(LPCTSTR pszIcon);
	void Create(const char* buttonText, HWND parentWindowHandle, UINT id);

protected:

	// The message handler for this window
	LRESULT CALLBACK WinMsgHandler(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		switch (uMsg)
		{
			case WM_SIZE:
	//			MessageBox(NULL, "WM_SIZE", "", MB_OK);
			break;

			default:
				return DefWindowProc(hwnd, uMsg, wParam, lParam);
		}

		return 0;
	};

};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
