// CPP /////////////////////////////////////////////////////////////////////////

#include "ZReBar.h"

////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::BeginDrag(UINT uiBand, DWORD dwPos)
{
	return( ::SendMessage(_hWnd, RB_BEGINDRAG, (WPARAM) uiBand, (LPARAM) dwPos) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::DeleteBand(UINT uiBand)
{
	return( ::SendMessage(_hWnd, RB_DELETEBAND, (WPARAM) uiBand, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::DragMove(DWORD dwPos)
{
	return( ::SendMessage(_hWnd, RB_DRAGMOVE, (WPARAM) 0, (LPARAM) dwPos) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::EndDrag(void)
{
	return( ::SendMessage(_hWnd, RB_ENDDRAG, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetBandBorders(UINT uiBand, LPRECT pRect)
{
	return( ::SendMessage(_hWnd, RB_GETBANDBORDERS, (WPARAM) uiBand, (LPARAM) pRect) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ZReBar::GetBandCount(void)
{
	return( (UINT) ::SendMessage(_hWnd, RB_GETBANDCOUNT, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetBandInfo(UINT uiBand, LPREBARBANDINFO pBandInfo)
{
	pBandInfo->cbSize = sizeof( REBARBANDINFO );
	return( ::SendMessage(_hWnd, RB_GETBANDINFO, (WPARAM) uiBand, (LPARAM) pBandInfo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetBandMargins(PMARGINS pMargins)
{
	return( ::SendMessage(_hWnd, RB_GETBANDMARGINS, (WPARAM) 0, (LPARAM) pMargins) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetBarHeight(void)
{
	return( ::SendMessage(_hWnd, RB_GETBARHEIGHT, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetBarInfo(LPREBARINFO pRebarInfo)
{
	return( ::SendMessage(_hWnd, RB_GETBARINFO, (WPARAM) 0, (LPARAM) pRebarInfo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetBkColor(void)
{
	return( ::SendMessage(_hWnd, RB_GETBKCOLOR, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetColorScheme(LPCOLORSCHEME pColorScheme)
{
	return( ::SendMessage(_hWnd, RB_GETCOLORSCHEME, (WPARAM) 0, (LPARAM) pColorScheme) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetDropTarget(IDropTarget **ppDropTarget)
{
	return( ::SendMessage(_hWnd, RB_GETDROPTARGET, (WPARAM) 0, (LPARAM) ppDropTarget) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetPalette(void)
{
	return( ::SendMessage(_hWnd, RB_GETPALETTE, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetRect(UINT uiBand, LPRECT pRect)
{
	return( ::SendMessage(_hWnd, RB_GETRECT, (WPARAM) uiBand, (LPARAM) pRect) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetRowCount(void)
{
	return( ::SendMessage(_hWnd, RB_GETROWCOUNT, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetRowHeight(UINT uiBand)
{
	return( ::SendMessage(_hWnd, RB_GETROWHEIGHT, (WPARAM) uiBand, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetTextColor(void)
{
	return( ::SendMessage(_hWnd, RB_GETTEXTCOLOR, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetToolTips(void)
{
	return( ::SendMessage(_hWnd, RB_GETTOOLTIPS, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::GetUnicodeFormat(void)
{
	return( ::SendMessage(_hWnd, RB_GETUNICODEFORMAT, (WPARAM) 0, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::HitTest(LPRBHITTESTINFO pHitTestInfo)
{
	return( ::SendMessage(_hWnd, RB_HITTEST, (WPARAM) 0, (LPARAM) pHitTestInfo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::IDToIndex(UINT uiBand)
{
	return( ::SendMessage(_hWnd, RB_IDTOINDEX, (WPARAM) uiBand, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::InsertBand(UINT uiBand, LPREBARBANDINFO pBandInfo)
{
	pBandInfo->cbSize = sizeof( REBARBANDINFO );
	return( ::SendMessage(_hWnd, RB_INSERTBAND, (WPARAM) uiBand, (LPARAM) pBandInfo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::MaximizeBand(UINT uiBand, BOOL bIdeal)
{
	return( ::SendMessage(_hWnd, RB_MAXIMIZEBAND, (WPARAM) uiBand, (LPARAM) bIdeal) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::MinimizeBand(UINT uiBand)
{
	return( ::SendMessage(_hWnd, RB_MINIMIZEBAND, (WPARAM) uiBand, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::MoveBand(UINT uiFrom, UINT uiTo)
{
	return( ::SendMessage(_hWnd, RB_MOVEBAND, (WPARAM) uiFrom, (LPARAM) uiTo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::PushChevron(UINT uiBand, long lAppValue)
{
	return( ::SendMessage(_hWnd, RB_PUSHCHEVRON, (WPARAM) uiBand, (LPARAM) lAppValue) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetBandInfo(UINT uiBand, LPREBARBANDINFO pBandInfo)
{
	return( ::SendMessage(_hWnd, RB_SETBANDINFO, (WPARAM) uiBand, (LPARAM) pBandInfo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetBarInfo(LPREBARINFO pRebarInfo)
{
	return( ::SendMessage(_hWnd, RB_SETBARINFO, (WPARAM) 0, (LPARAM) pRebarInfo) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetBkColor(COLORREF clrBk)
{
	return( ::SendMessage(_hWnd, RB_SETBKCOLOR, (WPARAM) 0, (LPARAM) clrBk) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetColorScheme(LPCOLORSCHEME pColorScheme)
{
	return( ::SendMessage(_hWnd, RB_SETCOLORSCHEME, (WPARAM) 0, (LPARAM) pColorScheme) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetPalette(HPALETTE hPalette)
{
	return( ::SendMessage(_hWnd, RB_SETPALETTE, (WPARAM) 0, (LPARAM) hPalette) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetParent(HWND hWndParent)
{
	return( ::SendMessage(_hWnd, RB_SETPARENT, (WPARAM) hWndParent, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetTextColor(COLORREF clrText)
{
	return( ::SendMessage(_hWnd, RB_SETTEXTCOLOR, (WPARAM) 0, (LPARAM) clrText) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetToolTips(HWND hWndToolTip)
{
	return( ::SendMessage(_hWnd, RB_SETTOOLTIPS, (WPARAM) hWndToolTip, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetUnicodeFormat(BOOL bUnicode)
{
	return( ::SendMessage(_hWnd, RB_SETUNICODEFORMAT, (WPARAM) bUnicode, (LPARAM) 0) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetWindowTheme(LPWSTR pwszStr)
{
	return( ::SendMessage(_hWnd, RB_SETWINDOWTHEME, (WPARAM) 0, (LPARAM) pwszStr) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::ShowBand(UINT uiBand, BOOL bShow)
{
	return( ::SendMessage(_hWnd, RB_SHOWBAND, (WPARAM) uiBand, (LPARAM) bShow) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SizeToRect(LPRECT pRect)
{
	return( ::SendMessage(_hWnd, RB_SIZETORECT, (WPARAM) 0, (LPARAM) pRect) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

DWORD ZReBar::GetBandIndex(HWND hWnd)
{
	DWORD dwNumBands = GetBandCount();

	REBARBANDINFO rbi;
	rbi.cbSize = sizeof( REBARBANDINFO );
	rbi.fMask = RBBIM_CHILD;

	for( DWORD i=0; i < dwNumBands; i++ )
	{
		GetBandInfo( i, &rbi );
		if( rbi.hwndChild == hWnd )
			return( i );
	}
	return( -1 );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::SetBarInfo(HIMAGELIST himl)
{
	REBARINFO rbi;
	rbi.cbSize = sizeof( REBARINFO );
	if( himl )
	{
		rbi.fMask = RBIM_IMAGELIST;
	}
	rbi.himl = himl;

	return( SetBarInfo(&rbi) );
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT ZReBar::InsertBand(HBITMAP hbmBackground, HWND hWndChild, UINT cxMinChild, UINT cyMinChild, UINT cyChild, UINT cyMaxChild, UINT cyIntegral, COLORREF clrFore, COLORREF clrBack, UINT cxHeader, UINT cxIdeal, UINT wID, int iImage, LPARAM lParam, UINT cx, UINT fStyle, LPTSTR lpText)
{
	REBARBANDINFO rbbi;
	rbbi.cbSize = sizeof( REBARBANDINFO );
	rbbi.fMask	= 0;

	if( hbmBackground )
		rbbi.fMask |= RBBIM_BACKGROUND;
	rbbi.hbmBack = hbmBackground;

	if( hWndChild )
		rbbi.fMask |= RBBIM_CHILD;
	rbbi.hwndChild = hWndChild;

	if( cxMinChild && cyMinChild && cyChild && cyMaxChild && cyIntegral )
		rbbi.fMask |= RBBIM_CHILDSIZE;
	rbbi.cxMinChild = cxMinChild;
	rbbi.cyMinChild = cyMinChild;
	rbbi.cyChild	= cyChild;
	rbbi.cyMaxChild = cyMaxChild;
	rbbi.cyIntegral = cyIntegral;

	if( clrFore && clrBack )
		rbbi.fMask |= RBBIM_COLORS;
	rbbi.clrFore = clrFore;
	rbbi.clrBack = clrBack;

	if( cxHeader )
		rbbi.fMask |= RBBIM_HEADERSIZE;
	rbbi.cxHeader = cxHeader;

	if( cxIdeal )
		rbbi.fMask |= RBBIM_IDEALSIZE;
	rbbi.cxIdeal = cxIdeal;

	if( wID )
		rbbi.fMask |= RBBIM_ID;
	rbbi.wID = wID;

	if( iImage )
		rbbi.fMask |= RBBIM_IMAGE;
	rbbi.iImage = iImage;

	if( lParam )
		rbbi.fMask |= RBBIM_LPARAM;
	rbbi.lParam = lParam;

	if( cx )
		rbbi.fMask |= RBBIM_SIZE;
	rbbi.cx = cx;

	if( fStyle )
		rbbi.fMask |= RBBIM_STYLE;
	rbbi.fStyle = fStyle;

	if( lpText )
		rbbi.fMask |= RBBIM_TEXT;
	rbbi.lpText = lpText;

	return( InsertBand(-1, &rbbi) );
}