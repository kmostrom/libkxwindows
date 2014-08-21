
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UITrackBar: public UIWindow
{
public:
	enum EMessage
	{
		WM_TRACKBAR_LBUTTONDOWN = WM_USER, // wParam == filePaneWindowHandle, lParam == 0
		WM_TRACKBAR_MOUSEMOVE,
		WM_TRACKBAR_LBUTTONUP
	};

public:
	UITrackBar()
		: UIWindow()
	{
		SetClassName(TRACKBAR_CLASS);
	};

	LRESULT ClearSel(BOOL bRedraw);
	LRESULT ClearTics(BOOL bRedraw);
	LRESULT GetBuddy(BOOL bLocationLeft);
	LRESULT GetChannelRect(LPRECT pRect);
	LRESULT GetLineSize(void);
	LRESULT GetNumTics(void);
	LRESULT GetPageSize(void);
	LRESULT GetPos(void);
	LRESULT GetPTics(void);
	LRESULT GetRangeMax(void);
	LRESULT GetRangeMin(void);
	LRESULT GetSelEnd(void);
	LRESULT GetSelStart(void);
	LRESULT GetThumbLength(void);
	LRESULT GetThumbRect(LPRECT pRect);
	LRESULT GetTic(WORD wTic);
	LRESULT GetTicPos(WORD wTicPos);
	LRESULT GetToolTips(void);
	LRESULT GetUnicodeFormat(void);
	LRESULT SetBuddy(BOOL bLocationLeftOrUp, HWND hWndBuddy);
	LRESULT SetLineSize(long lLineSize);
	LRESULT SetPageSize(long lPageSize);
	LRESULT SetPos(BOOL bPosition, long lPosition);
	LRESULT SetRange(long lMin, long lMax, BOOL bRedraw);
	LRESULT SetRangeMax(long lMax, BOOL bRedraw);
	LRESULT SetRangeMin(long lMin, BOOL bRedraw);
	LRESULT SetSel(long lStart, long lEnd, BOOL bRedraw);
	LRESULT SetSelEnd(long lEnd, BOOL bRedraw);
	LRESULT SetSelStart(long lStart, BOOL bRedraw);
	LRESULT SetThumbLength(UINT uiLength);
	LRESULT SetTic(long lPosition);
	LRESULT SetTicFreq(WORD wFreq);
	LRESULT SetTipSide(int iLocation);
	LRESULT SetToolTips(HWND hWndToolTips);
	LRESULT SetUnicodeFormat(BOOL bUnicode);

	void Create(const char* text, HWND parentWindowHandle, UINT id);

	virtual LRESULT CALLBACK WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);
};

////////////////////////////////////////////////////////////////////////////////
