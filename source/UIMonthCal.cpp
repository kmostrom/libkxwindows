
////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/UIMonthCal.h>

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetColor(int color)
{
	return ::SendMessage(mWindowHandle, MCM_GETCOLOR, (WPARAM) color, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetCurSel(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_GETCURSEL, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetFirstDayOfWeek(void)
{
	return ::SendMessage(mWindowHandle, MCM_GETFIRSTDAYOFWEEK, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetMaxSelCount(void)
{
	return ::SendMessage(mWindowHandle, MCM_GETMAXSELCOUNT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetMaxTodayWidth(void)
{
	return ::SendMessage(mWindowHandle, MCM_GETMAXTODAYWIDTH, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetMinReqRect(LPRECT rect)
{
	return ::SendMessage(mWindowHandle, MCM_GETMINREQRECT, (WPARAM) 0, (LPARAM) rect);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetMonthDelta(void)
{
	return ::SendMessage(mWindowHandle, MCM_GETMONTHDELTA, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetMonthRange(DWORD flag, LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_GETMONTHRANGE, (WPARAM) flag, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetRange(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_GETRANGE, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetSelRange(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_GETSELRANGE, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetToday(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_GETTODAY, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::GetUnicodeFormat(void)
{
	return ::SendMessage(mWindowHandle, MCM_GETUNICODEFORMAT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::HitTest(PMCHITTESTINFO hitTestInfo)
{
	return ::SendMessage(mWindowHandle, MCM_HITTEST, (WPARAM) 0, (LPARAM) hitTestInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetColor(int color, COLORREF colorStruct)
{
	return ::SendMessage(mWindowHandle, MCM_SETCOLOR, (WPARAM) color, (LPARAM) colorStruct);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetCurSel(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_SETCURSEL, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetDayState(int months, LPMONTHDAYSTATE dayState)
{
	return ::SendMessage(mWindowHandle, MCM_SETDAYSTATE, (WPARAM) months, (LPARAM) dayState);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetFirstDayOfWeek(int day)
{
	return ::SendMessage(mWindowHandle, MCM_SETFIRSTDAYOFWEEK, (WPARAM) 0, (LPARAM) day);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetMaxSelCount(int max)
{
	return ::SendMessage(mWindowHandle, MCM_SETMAXSELCOUNT, (WPARAM) max, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetMonthDelta(int delta)
{
	return ::SendMessage(mWindowHandle, MCM_SETMONTHDELTA, (WPARAM) delta, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetRange(short whichLimit, LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_SETRANGE, (WPARAM) whichLimit, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetSelRange(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_SETSELRANGE, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetToday(LPSYSTEMTIME systemTime)
{
	return ::SendMessage(mWindowHandle, MCM_SETTODAY, (WPARAM) 0, (LPARAM) systemTime);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIMonthCal::SetUnicodeFormat(BOOL unicode)
{
	return ::SendMessage(mWindowHandle, MCM_SETUNICODEFORMAT, (WPARAM) unicode, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////
