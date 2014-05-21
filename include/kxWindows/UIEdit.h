
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#define USE_FONTINFO_RIGHT 1
#define USE_FONTINFO_LEFT  2
#define USE_FONTINFO_NONE  3

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////

class UIEdit: public UIWindow
{
public:
	UIEdit(HWND parentWindowHandle)
		: UIWindow(parentWindowHandle)
	{
		SetClassName(WC_EDIT);
		mStyle = WS_CHILD | WS_VISIBLE;
	};

	UIEdit(HWND parentWindowHandle, UINT id)
		: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT CharFromPos(long lX, long lY);
	LRESULT EmptyUndoBuffer(void);
	LRESULT FmtLines(BOOL bAddEOL);
	LRESULT GetFirstVisibleLine(void);
	LRESULT GetHandle(void);
	LRESULT GetLimitText(void);
	LRESULT GetLine(long lLineNr, LPCSTR szString);
	LRESULT GetLineCount(void);
	LRESULT GetMargins(void);
	LRESULT GetModify(void);
	LRESULT GetPasswordChar(void);
	LRESULT GetRect(LPRECT pRect);
	LRESULT GetSel(LPDWORD dwStart, LPDWORD dwEnd);
	LRESULT GetThumb(void);
	LRESULT GetWordBreakProc(void);
	LRESULT LimitText(int iChars);
	LRESULT LineFromChar(int iIndex = -1);
	LRESULT LineIndex(int iLine = -1);
	LRESULT LineLength(int iLine = -1);
	LRESULT LineScroll(int iLines, int iChars = 0);
	LRESULT PosFromChar(UINT uiCh);
	LRESULT ReplaceSel(LPCTSTR pszNewText, BOOL bCanUndo = FALSE);
	LRESULT Scroll(int iAction);
	LRESULT ScrollCaret(void);
	LRESULT SetHandle(HLOCAL hBuffer);
	LRESULT SetLimitText(UINT uiMax);
	LRESULT SetMargins(long lMarginOptions, long lNewMargin, int iUseFontInfo);
	LRESULT SetModify(BOOL bModified = TRUE);
	LRESULT SetPasswordChar(TCHAR chChar);
	LRESULT SetReadOnly(BOOL bReadOnly = TRUE);
	LRESULT SetRect(LPRECT pRect);
	LRESULT SetRectNP(LPRECT pRect = NULL);
	LRESULT SetSel(int iStartPos, int iEndPos);
	LRESULT SetTabStops(int iTabStops, LPINT lpiTabStops);
	LRESULT SetWordBreakProc(WNDPROC *WndProc);
	LRESULT Undo(void);
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PEDIT Edit*

///////////////////////////////////////////////////////////////////////////////////////////////////////////
