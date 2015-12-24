
////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/UIProgressBar.h>

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::DeltaPos(long increment)
{
	return ::SendMessage(mWindowHandle, PBM_DELTAPOS, (WPARAM) increment, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::GetPos(void)
{
	return ::SendMessage(mWindowHandle, PBM_GETPOS, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::GetRange(BOOL whichLimit, PBRANGE *range)
{
	return ::SendMessage(mWindowHandle, PBM_GETRANGE, (WPARAM) whichLimit, (LPARAM) range);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetBarColor(COLORREF colorRef)
{
	return ::SendMessage(mWindowHandle, PBM_SETBARCOLOR, (WPARAM) 0, (LPARAM) colorRef);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetBkColor(COLORREF backgroundColorRef)
{
	return ::SendMessage(mWindowHandle, PBM_SETBKCOLOR, (WPARAM) 0, (LPARAM) backgroundColorRef);
}

///////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetMarquee(BOOL on, UINT updateInterval)
{
	return ::SendMessage(mWindowHandle, PBM_SETMARQUEE, (WPARAM) on, (LPARAM) updateInterval);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetPos(int newPosition)
{
	return ::SendMessage(mWindowHandle, PBM_SETPOS, (WPARAM) newPosition, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetRange(int min, int max)
{
	return ::SendMessage(mWindowHandle, PBM_SETRANGE, (WPARAM) 0, (LPARAM) MAKELPARAM(min, max));
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetRange32(int min, int max)
{
	return ::SendMessage(mWindowHandle, PBM_SETRANGE32, (WPARAM) min, (LPARAM) max);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::SetStep(long step)
{
	return ::SendMessage(mWindowHandle, PBM_SETSTEP, (WPARAM) step, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIProgressBar::StepIt(void)
{
	return ::SendMessage(mWindowHandle, PBM_STEPIT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
=======

void UIProgressBar::Create(const char* text, HWND parentWindowHandle, UINT id)
{
	mWindowHandle = CreateWindowEx(
		0,
		PROGRESS_CLASS,
		text,
		WS_VISIBLE | WS_CHILD | PBS_SMOOTH,
		0, 0, 120, 27,
		parentWindowHandle,
		(HMENU) id,
		GetModuleHandle(NULL),
		NULL);

	PostMessage(mWindowHandle, WM_SETFONT, (WPARAM) GetStockObject(ANSI_VAR_FONT), FALSE);
}

////////////////////////////////////////////////////////////////////////////////
>>>>>>> origin/master
