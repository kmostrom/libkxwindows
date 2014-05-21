////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/UIReBar.h>

// TODO: band parameter should be stored in instance and not passed as parameter

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::BeginDrag(UINT band, DWORD position)
{
	return ::SendMessage(mWindowHandle, RB_BEGINDRAG, (WPARAM) band, (LPARAM) position);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::DeleteBand(UINT band)
{
	return ::SendMessage(mWindowHandle, RB_DELETEBAND, (WPARAM) band, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::DragMove(DWORD position)
{
	return ::SendMessage(mWindowHandle, RB_DRAGMOVE, (WPARAM) 0, (LPARAM) position);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::EndDrag(void)
{
	return ::SendMessage(mWindowHandle, RB_ENDDRAG, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetBandBorders(UINT band, LPRECT rect)
{
	return ::SendMessage(mWindowHandle, RB_GETBANDBORDERS, (WPARAM) band, (LPARAM) rect);
}

////////////////////////////////////////////////////////////////////////////////

UINT UIReBar::GetBandCount(void)
{
	return (UINT) ::SendMessage(mWindowHandle, RB_GETBANDCOUNT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetBandInfo(UINT band, LPREBARBANDINFO bandInfo)
{
	bandInfo->cbSize = sizeof(REBARBANDINFO);
	return ::SendMessage(mWindowHandle, RB_GETBANDINFO, (WPARAM) band, (LPARAM) bandInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetBandMargins(PMARGINS margins)
{
	return ::SendMessage(mWindowHandle, RB_GETBANDMARGINS, (WPARAM) 0, (LPARAM) margins);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetBarHeight(void)
{
	return ::SendMessage(mWindowHandle, RB_GETBARHEIGHT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetBarInfo(LPREBARINFO rebarInfo)
{
	return ::SendMessage(mWindowHandle, RB_GETBARINFO, (WPARAM) 0, (LPARAM) rebarInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetBkColor(void)
{
	return ::SendMessage(mWindowHandle, RB_GETBKCOLOR, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetColorScheme(LPCOLORSCHEME colorScheme)
{
	return ::SendMessage(mWindowHandle, RB_GETCOLORSCHEME, (WPARAM) 0, (LPARAM) colorScheme);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetDropTarget(IDropTarget **dropTarget)
{
	return ::SendMessage(mWindowHandle, RB_GETDROPTARGET, (WPARAM) 0, (LPARAM) dropTarget);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetPalette(void)
{
	return ::SendMessage(mWindowHandle, RB_GETPALETTE, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetRect(UINT band, LPRECT rect)
{
	return ::SendMessage(mWindowHandle, RB_GETRECT, (WPARAM) band, (LPARAM) rect);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetRowCount(void)
{
	return ::SendMessage(mWindowHandle, RB_GETROWCOUNT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetRowHeight(UINT band)
{
	return ::SendMessage(mWindowHandle, RB_GETROWHEIGHT, (WPARAM) band, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetTextColor(void)
{
	return ::SendMessage(mWindowHandle, RB_GETTEXTCOLOR, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetToolTips(void)
{
	return ::SendMessage(mWindowHandle, RB_GETTOOLTIPS, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::GetUnicodeFormat(void)
{
	return ::SendMessage(mWindowHandle, RB_GETUNICODEFORMAT, (WPARAM) 0, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::HitTest(LPRBHITTESTINFO hitTestInfo)
{
	return ::SendMessage(mWindowHandle, RB_HITTEST, (WPARAM) 0, (LPARAM) hitTestInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::IDToIndex(UINT band)
{
	return ::SendMessage(mWindowHandle, RB_IDTOINDEX, (WPARAM) band, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::InsertBand(UINT band, LPREBARBANDINFO bandInfo)
{
	bandInfo->cbSize = sizeof(REBARBANDINFO);
	return ::SendMessage(mWindowHandle, RB_INSERTBAND, (WPARAM) band, (LPARAM) bandInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::MaximizeBand(UINT band, BOOL ideal)
{
	return ::SendMessage(mWindowHandle, RB_MAXIMIZEBAND, (WPARAM) band, (LPARAM) ideal);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::MinimizeBand(UINT band)
{
	return ::SendMessage(mWindowHandle, RB_MINIMIZEBAND, (WPARAM) band, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::MoveBand(UINT from, UINT to)
{
	return ::SendMessage(mWindowHandle, RB_MOVEBAND, (WPARAM) from, (LPARAM) to);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::PushChevron(UINT band, long appValue)
{
	return ::SendMessage(mWindowHandle, RB_PUSHCHEVRON, (WPARAM) band, (LPARAM) appValue);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetBandInfo(UINT band, LPREBARBANDINFO bandInfo)
{
	return ::SendMessage(mWindowHandle, RB_SETBANDINFO, (WPARAM) band, (LPARAM) bandInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetBarInfo(LPREBARINFO rebarInfo)
{
	return ::SendMessage(mWindowHandle, RB_SETBARINFO, (WPARAM) 0, (LPARAM) rebarInfo);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetBkColor(COLORREF backgroundColor)
{
	return ::SendMessage(mWindowHandle, RB_SETBKCOLOR, (WPARAM) 0, (LPARAM) backgroundColor);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetColorScheme(LPCOLORSCHEME colorScheme)
{
	return ::SendMessage(mWindowHandle, RB_SETCOLORSCHEME, (WPARAM) 0, (LPARAM) colorScheme);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetPalette(HPALETTE palette)
{
	return ::SendMessage(mWindowHandle, RB_SETPALETTE, (WPARAM) 0, (LPARAM) palette);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetParent(HWND parentWindowHandle)
{
	return ::SendMessage(mWindowHandle, RB_SETPARENT, (WPARAM) parentWindowHandle, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetTextColor(COLORREF textColor)
{
	return ::SendMessage(mWindowHandle, RB_SETTEXTCOLOR, (WPARAM) 0, (LPARAM) textColor);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetToolTips(HWND toolTipWindowHandle)
{
	return ::SendMessage(mWindowHandle, RB_SETTOOLTIPS, (WPARAM) toolTipWindowHandle, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetUnicodeFormat(BOOL unicode)
{
	return ::SendMessage(mWindowHandle, RB_SETUNICODEFORMAT, (WPARAM) unicode, (LPARAM) 0);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetWindowTheme(LPWSTR windowThemeName)
{
	return ::SendMessage(mWindowHandle, RB_SETWINDOWTHEME, (WPARAM) 0, (LPARAM) windowThemeName);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::ShowBand(UINT band, BOOL show)
{
	return ::SendMessage(mWindowHandle, RB_SHOWBAND, (WPARAM) band, (LPARAM) show);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SizeToRect(LPRECT rect)
{
	return ::SendMessage(mWindowHandle, RB_SIZETORECT, (WPARAM) 0, (LPARAM) rect);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

DWORD UIReBar::GetBandIndex(HWND windowHandle)
{
	DWORD dwNumBands = GetBandCount();

	REBARBANDINFO rbi;
	rbi.cbSize = sizeof(REBARBANDINFO);
	rbi.fMask = RBBIM_CHILD;

	for (DWORD i=0; i < dwNumBands; i++)
	{
		GetBandInfo(i, &rbi);
		if (rbi.hwndChild == windowHandle)
			return i;
	}
	return -1;
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::SetBarInfo(HIMAGELIST imageList)
{
	REBARINFO rbi;
	rbi.cbSize = sizeof(REBARINFO);
	if (imageList)
	{
		rbi.fMask = RBIM_IMAGELIST;
	}
	rbi.himl = imageList;

	return SetBarInfo(&rbi);
}

////////////////////////////////////////////////////////////////////////////////

LRESULT UIReBar::InsertBand(REBARBANDINFO& rebarBandInfo)
{
	return InsertBand(-1, &rebarBandInfo);
}