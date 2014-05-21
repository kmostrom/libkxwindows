
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <RichEdit.h>
//#include <oleidl.h>
#include <richole.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIRichEdit: public UIWindow
{
public:
	UIRichEdit(HWND hWndParent)
		: UIWindow(hWndParent)
	{ 
		// SetClassName( WC_RICHEDIT ); // TODO: classname
	};

	UIRichEdit(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT AutoURLDetect(BOOL bDetectState);
	LRESULT CanPaste(DWORD dwClipboardFormat);
	LRESULT CanRedo(void);
	LRESULT CanUndo(void);
	LRESULT CharFromPos(POINTL *pPointl);
	LRESULT DisplayBand(LPRECT pRect);
	LRESULT EmptyUndoBuffer(void);
	LRESULT ExGetSel(CHARRANGE *pstCharRange);
	LRESULT ExLimitText(UINT uiLimit);
	LRESULT ExLineFromChar(long lIndex);
	LRESULT ExSetSel(CHARRANGE *pCharRange);
	LRESULT FindText(DWORD dwOptions, FINDTEXT *pFindText);
	LRESULT FindTextEx(DWORD dwOptions, FINDTEXTEX *pFindTextEx);
	LRESULT FindTextExW(DWORD dwOptions, FINDTEXTEX *pFindTextExW);
	LRESULT FindTextW(DWORD dwOptions, FINDTEXT *pFindTextW);
	LRESULT FindWordBreak(DWORD dwOperation, long lStartingIndex);
	LRESULT FmtLines(BOOL bInsertEOL);
	LRESULT FormatRange(BOOL bRenderOption, FORMATRANGE *pFormatRange);
	LRESULT GetAutoURLDetect(void);
	LRESULT GetBidiOptions(BIDIOPTIONS *pBidiOptions);
	LRESULT GetCharFormat(int nFormatOption, CHARFORMAT *pCharFormat);
	LRESULT GetCueBanner(LPCWSTR pcwText);
	LRESULT GetEditStyle(void);
	LRESULT GetEventMask(void);
	LRESULT GetFirstVisibleLine(void);
	LRESULT GetHandle(void);
	LRESULT GetIMEColor(COMPCOLOR *pCompColor);
	LRESULT GetIMECompMode(void);
	LRESULT GetIMEOptions(void);
	LRESULT GetIMEStatus(long lStatusValue);
	LRESULT GetLimitText(void);
	LRESULT GetLine(long lLine, LPCTSTR pszBuffer);
	LRESULT GetLineCount(void);
	LRESULT GetMargins(void);
	LRESULT GetModify(void);
	LRESULT GetOLEInterface(LPVOID *ppvRichEditOLEObject);
	LRESULT GetOptions(void);
	LRESULT GetParaFormat(PARAFORMAT *pParaFormat);
	LRESULT GetPasswordChar(void);
	LRESULT GetPunctuation(DWORD dwPunctuationType, PUNCTUATION *pPunctuation);
	LRESULT GetRect(LPRECT pRect);
	LRESULT GetRedoName(void);
	LRESULT GetScrollPos(POINT *pPoint);
	LRESULT GetSel(LPDWORD pdwStartPos, LPDWORD pdwEndPos);
	LRESULT GetSelText(LPSTR pszText);
	LRESULT GetTextEx(GETTEXTEX *pTextInfo, LPCTSTR pszOutput);
	LRESULT GetTextLengthEx(GETTEXTLENGTHEX *pGetTextLengthEx);
	LRESULT GetTextMode(void);
	LRESULT GetTextRange(TEXTRANGE *pTextRange);
	LRESULT GetThumb(void);
	LRESULT GetTypographyOptions(void);
	LRESULT GetUndoName(void);
	LRESULT GetWordBreakProc(void);
	LRESULT GetWordBreakProcEx(void);
	LRESULT GetWordWrapMode(void);
	LRESULT GetZoom(WORD wNumerator, WORD wDenominator);
	LRESULT HideBalloonTip(void);
	LRESULT HideSelection(BOOL bHide);
	LRESULT LimitText(long lTextLength);
	LRESULT LineFromChar(long lCharIndex);
	LRESULT LineIndex(long lLine);
	LRESULT LineLength(long lIndex);
	LRESULT LineScroll(long lVert);
	LRESULT PasteSpecial(UINT uiClipboardFormat, REPASTESPECIAL *pPaste);
	LRESULT PosFromChar(UINT uiCharIndex);
	LRESULT Reconversion(void);
	LRESULT Redo(void);
	LRESULT ReplaceSel(BOOL bUndoEnabled, LPCTSTR pszString);
	LRESULT RequestResize(void);
	LRESULT Scroll(long lScrollAction);
	LRESULT ScrollCaret(void);
	LRESULT SelectionType(void);
	LRESULT SetBidiOptions(BIDIOPTIONS *pBidiOptions);
	LRESULT SetBkgndColor(BOOL bUseBackgroundColor, COLORREF rgbColor);
	LRESULT SetCharFormat(long lFormatOptions, CHARFORMAT *pCharFormat);
	LRESULT SetCueBanner(LPCWSTR pcwText);
	LRESULT SetEditStyle(WORD wOptions, WORD wMask);
	LRESULT SetEventMask(DWORD dwEventMask);
	LRESULT SetFontSize(int iFontSize);
	LRESULT SetHandle(HLOCAL hHandle);
	LRESULT SetIMEColor(COMPCOLOR *pCompColor);
	LRESULT SetIMEOptions(long lOperation, long lOptions);
	LRESULT SetIMEStatus(long lStatusType, long lStatusData);
	LRESULT SetLangOptions(long lLangOptions);
	LRESULT SetLimitText(long lLength);
	LRESULT SetMargins(WORD wMargins, long lNewWidth);
	LRESULT SetModify(BOOL bModified);
	LRESULT SetOLECallback(IRichEditOleCallback *pOleCallback);
	LRESULT SetOptions(int iOperation, int iOptions);
	LRESULT SetPalette(HPALETTE *pPalette);
	LRESULT SetParaFormat(PARAFORMAT *pParaFormat);
	LRESULT SetPasswordChar(char chChar);
	LRESULT SetPunctuation(WORD wPunctuationType, PUNCTUATION *pPunctuation);
	LRESULT SetReadOnly(BOOL bReadOnly);
	LRESULT SetRect(BOOL bAbsoluteCoord, LPRECT pRect);
	LRESULT SetRectNP(BOOL bAbsoluteCoord, LPRECT pRect);
	LRESULT SetScrollPos(POINT *pPoint);
	LRESULT SetSel(long lStartPos, long lEndPos);
	LRESULT SetTabStops(long lTabStopCount, UINT *puiTabStops);
	LRESULT SetTargetDevice(HDC hDC, long lLineWidth);
	LRESULT SetTextEx(SETTEXTEX *pTextOptions, TCHAR *szText);
	LRESULT SetTextMode(int iTextMode);	
	LRESULT SetTypographyOptions(DWORD dwOptions, DWORD dwMask);
	LRESULT SetUndoLimit(long lMax);
	LRESULT SetWordBreakProc(WNDPROC *pWordBreakProc);
	LRESULT SetWordBreakProcEx(WNDPROC *pWordBreakProcEx);
	LRESULT SetWordWrapMode(DWORD dwOptions);
	LRESULT SetZoom(int iNumerator, int iDenominator);
	LRESULT ShowBalloonTip(struct tagEDITBALLOONTIP *pEditBalloonTip);
	LRESULT ShowScrollbar(int iIdentifier, BOOL bVisible);
	LRESULT StopGroupTyping(void);
	LRESULT StreamIn(int iFormatOptions, EDITSTREAM *pStreamData);
	LRESULT StreamOut(int iFormatOptions, EDITSTREAM *pStreamData);
	LRESULT Undo(void);
};

////////////////////////////////////////////////////////////////////////////////
