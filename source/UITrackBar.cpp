
////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/UITrackBar.h>

////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::ClearSel(BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_CLEARSEL, (WPARAM) bRedraw, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::ClearTics(BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_CLEARTICS, (WPARAM) bRedraw, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetBuddy(BOOL bLocationLeft)
{
	return ::SendMessage(mWindowHandle, TBM_GETBUDDY, (WPARAM) bLocationLeft, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetChannelRect(LPRECT pRect)
{
	return ::SendMessage(mWindowHandle, TBM_GETCHANNELRECT, (WPARAM) 0, (LPARAM) pRect);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetLineSize(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETLINESIZE, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetNumTics(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETNUMTICS, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetPageSize(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETPAGESIZE, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetPos(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETPOS, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetPTics(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETPTICS, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetRangeMax(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETRANGEMAX, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetRangeMin(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETRANGEMIN, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetSelEnd(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETSELEND, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetSelStart(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETSELSTART, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetThumbLength(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETTHUMBLENGTH, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetThumbRect(LPRECT pRect)
{
	return ::SendMessage(mWindowHandle, TBM_GETTHUMBRECT, (WPARAM) 0, (LPARAM) pRect);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetTic(WORD wTic)
{
	return ::SendMessage(mWindowHandle, TBM_GETTIC, (WPARAM) wTic, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetTicPos(WORD wTicPos)
{
	return ::SendMessage(mWindowHandle, TBM_GETTICPOS, (WPARAM) wTicPos, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetToolTips(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETTOOLTIPS, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::GetUnicodeFormat(void)
{
	return ::SendMessage(mWindowHandle, TBM_GETUNICODEFORMAT, (WPARAM) 0, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetBuddy(BOOL bLocationLeftOrUp, HWND hWndBuddy)
{
	return ::SendMessage(mWindowHandle, TBM_SETBUDDY, (WPARAM) bLocationLeftOrUp, (LPARAM) hWndBuddy);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetLineSize(long lLineSize)
{
	return ::SendMessage(mWindowHandle, TBM_SETLINESIZE, (WPARAM) 0, (LPARAM) lLineSize);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetPageSize(long lPageSize)
{
	return ::SendMessage(mWindowHandle, TBM_SETPAGESIZE, (WPARAM) 0, (LPARAM) lPageSize);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UITrackBar::SetPos(BOOL bPosition, long lPosition)
{
	return ::SendMessage(mWindowHandle, TBM_SETPOS, (WPARAM) bPosition, (LPARAM) lPosition);
=======
LRESULT UITrackBar::SetPos(long position, BOOL redraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETPOS, (WPARAM) redraw, (LPARAM) position);
>>>>>>> origin/master
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetRange(long lMin, long lMax, BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETRANGE, (WPARAM) bRedraw, (LPARAM) MAKELONG(lMin, lMax));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetRangeMax(long lMax, BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETRANGEMAX, (WPARAM) bRedraw, (LPARAM) lMax);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetRangeMin(long lMin, BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETRANGEMIN, (WPARAM) bRedraw, (LPARAM) lMin);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetSel(long lStart, long lEnd, BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETSEL, (WPARAM) bRedraw, (LPARAM) MAKELONG(lStart, lEnd));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetSelEnd(long lEnd, BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETSELEND, (WPARAM) bRedraw, (LPARAM) lEnd);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetSelStart(long lStart, BOOL bRedraw)
{
	return ::SendMessage(mWindowHandle, TBM_SETSELSTART, (WPARAM) bRedraw, (LPARAM) lStart);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetThumbLength(UINT uiLength)
{
	return ::SendMessage(mWindowHandle, TBM_SETTHUMBLENGTH, (WPARAM) uiLength, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetTic(long lPosition)
{
	return ::SendMessage(mWindowHandle, TBM_SETTIC, (WPARAM) 0, (LPARAM) lPosition);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetTicFreq(WORD wFreq)
{
	return ::SendMessage(mWindowHandle, TBM_SETTICFREQ, (WPARAM) wFreq, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetTipSide(int iLocation)
{
	return ::SendMessage(mWindowHandle, TBM_SETTIPSIDE, (WPARAM) iLocation, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetToolTips(HWND hWndToolTips)
{
	return ::SendMessage(mWindowHandle, TBM_SETTOOLTIPS, (WPARAM) hWndToolTips, (LPARAM) 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UITrackBar::SetUnicodeFormat(BOOL bUnicode)
{
	return ::SendMessage(mWindowHandle, TBM_SETUNICODEFORMAT, (WPARAM) bUnicode, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
=======

void UITrackBar::Create(const char* text, HWND parentWindowHandle, UINT id)
{
	mWindowHandle = CreateWindowEx(
		0,
		TRACKBAR_CLASS,
		text,
		WS_VISIBLE | WS_CHILD,
		0, 0, 120, 27,
		parentWindowHandle,
		(HMENU) id,
		GetModuleHandle(NULL),
		NULL);

	mParentWindowHandle = parentWindowHandle;

	PostMessage(mWindowHandle, WM_SETFONT, (WPARAM) GetStockObject(ANSI_VAR_FONT), FALSE);

	SubClass(UIWindow::stWndProc);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UITrackBar::WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
		case WM_LBUTTONDOWN: 
			// WPARAM = (UITrackBar*) source,
			// LPARAM = 0 (not used)
			PostMessage(mParentWindowHandle, EMessage::WM_TRACKBAR_LBUTTONDOWN, (WPARAM) this, (LPARAM) 0);
			mIsDraggingSlider = true;
			break;

		case WM_MOUSEMOVE:
			PostMessage(mParentWindowHandle, EMessage::WM_TRACKBAR_MOUSEMOVE, (WPARAM) this, (LPARAM) 0);
			if (mIsDraggingSlider)
			{
				unsigned int position = GetPos();
				PostMessage(mParentWindowHandle, EMessage::WM_TRACKBAR_CHANGED, (WPARAM) this, (LPARAM) position);
			}
			break;

		case WM_LBUTTONUP:
			PostMessage(mParentWindowHandle, EMessage::WM_TRACKBAR_LBUTTONUP, (WPARAM) this, (LPARAM) 0);
			mIsDraggingSlider = false;
			break;

		default:
			break;
	}

	return CallWindowProc(mOldWndProc, windowHandle, message, wParam, lParam);
}
>>>>>>> origin/master
