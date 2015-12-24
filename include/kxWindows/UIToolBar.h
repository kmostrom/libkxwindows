
////////////////////////////////////////////////////////////////////////////////

#pragma once

#define ZRBSTYLE_IE (RBS_BANDBORDERS | RBS_DBLCLKTOGGLE | RBS_REGISTERDROP | RBS_VARHEIGHT | CCS_NODIVIDER | CCS_NOPARENTALIGN | WS_BORDER | WS_CHILD | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE)
#define ZTBSTYLE_REBARBAND (WS_VISIBLE | WS_CHILD | WS_CLIPCHILDREN | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS | CCS_NORESIZE | CCS_NODIVIDER | CCS_ADJUSTABLE)

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UIToolBar: public UIWindow
{
public:
	UIToolBar(HWND hWndParent)
		:	UIWindow(hWndParent)
	{
		SetClassName(TOOLBARCLASSNAME);
	};

	UIToolBar(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT MakeBackwardsCompatible(void);

	LRESULT AddBitmap(int iButtonCount, LPTBADDBITMAP pAddBitmap);
	LRESULT AddButtons(int iButtonCount, LPTBBUTTON pButtons);
	LRESULT AddString(HINSTANCE hInstance, UINT uiString);
	LRESULT AutoSize(void);
	LRESULT ButtonCount(void);
	LRESULT ButtonStructSize(int iSize);
	LRESULT ChangeBitmap(int iButtonID, int iImageIndex);
	LRESULT CheckButton(int iButtonID, BOOL bCheck);
	LRESULT CommandToIndex(int iButtonID);
	LRESULT Customize(void);
	LRESULT DeleteButton(int iButtonID);
	LRESULT EnableButton(int iButtonID, BOOL bEnable);
	LRESULT GetAnchorHighlight(void);
	LRESULT GetBitmap(int iButtonID);
	LRESULT GetBitmapFlags(void);
	LRESULT GetButton(int iButtonID, LPTBBUTTON pButton);
	LRESULT GetButtonInfo(int iButtonID, LPTBBUTTONINFO pButtonInfo);
	LRESULT GetButtonSize(void);
	LRESULT GetButtonText(int iButtonID, LPTSTR szText);
	LRESULT GetColorScheme(LPCOLORSCHEME pColorScheme);
	LRESULT GetDisabledImageList(void);
	LRESULT GetExtendedStyle(void);
	LRESULT GetHotImageList(void);
	LRESULT GetHotItem(void);
	LRESULT GetImageList(void);
	LRESULT GetInsertMark(LPTBINSERTMARK pInsertMark);
	LRESULT GetInsertMarkColor(void);
	LRESULT GetItemRect(int iButtonID, LPRECT pRect);
	LRESULT GetMaxSize(LPSIZE pSize);
	LRESULT GetMetrics(LPTBMETRICS pMetrics);
//	LRESULT GetObject(REFIID iID, LPVOID *ppvObject);
	LRESULT GetPadding(void);
	LRESULT GetRect(INT iButtonID, LPRECT pRect);
	LRESULT GetRows(void);
	LRESULT GetState(INT iButtonID);
	LRESULT GetString(int iMaxCh, int iString, LPTSTR szString);
	LRESULT GetStyle(void);
	LRESULT GetTextRows(void);
	LRESULT GetToolTips(void);
	LRESULT GetUnicodeFormat(void);
	LRESULT HideButton(INT iButtonID, BOOL bShow); // Show/Hide?
	LRESULT HitTest(LPPOINT pPoint);
	LRESULT Indeterminate(INT iButtonID, BOOL bIndeterminate);
	LRESULT InsertButton(INT iButtonID, LPTBBUTTON pButton);
	LRESULT InsertMarkHitTest(LPPOINT pPoint, LPTBINSERTMARK pInsertMark);
	LRESULT IsButtonChecked(INT iButtonID);
	LRESULT IsButtonEnabled(INT iButtonID);
	LRESULT IsButtonHidden(INT iButtonID);
	LRESULT IsButtonHighlighted(INT iButtonID);
	LRESULT IsButtonIndeterminate(INT iButtonID);
	LRESULT IsButtonPressed(INT iButtonID);
	LRESULT LoadImages(int iBitmapID, HINSTANCE hInstance);
	LRESULT MapAccelerator(TCHAR cAccel, LPUINT puiButton);
	LRESULT MarkButton(INT iButtonID, BOOL bHighlight);
	LRESULT MoveButton(UINT uiOldPos, UINT uiNewPos);
	LRESULT PressButton(INT iButtonID, BOOL bPress);
	LRESULT ReplaceBitmap(LPTBREPLACEBITMAP ptbrBitmap);
	LRESULT SaveRestore(BOOL bSave, TBSAVEPARAMS *pSaveParams);
	LRESULT SetAnchorHighlight(BOOL bAnchorHighlight);
	LRESULT SetBitmapSize(int iBitmapX, int iBitmapY);
	LRESULT SetButtonInfo(INT iButtonID, LPTBBUTTONINFO pButtonInfo);
	LRESULT SetButtonSize(int iButtonX, int iButtonY);
	LRESULT SetButtonWidth(int iMin, int iMax);
	LRESULT SetCmdID(UINT uiButtonID, UINT uiCmdID);
	LRESULT SetColorScheme(LPCOLORSCHEME pColorScheme);
	LRESULT SetDisabledImageList(HIMAGELIST hImageList);
	LRESULT SetDrawTextFlags(DWORD dwMask, DWORD dwFlags);
	LRESULT SetExtendedStyle(DWORD dwExStyle);
	LRESULT SetHotImageList(HIMAGELIST hHotImageList);
	LRESULT SetHotItem(INT iHotItem);
	LRESULT SetImageList(INT iImageID, HIMAGELIST hImageList);
	LRESULT SetIndent(INT iIndent);
	LRESULT SetInsertMark(LPTBINSERTMARK pInsertMark);
	LRESULT SetInsertMarkColor(COLORREF clrInsertMark);
	LRESULT SetMaxTextRows(INT iMaxRows);
	LRESULT SetMetrics(LPTBMETRICS pMetrics);
	LRESULT SetPadding(int iX, int iY);
	LRESULT SetParent(HWND hWndParent);
	LRESULT SetRows(int iRowCount, BOOL bLarger, LPRECT pRect);
	LRESULT SetState(INT iButtonID, DWORD dwState);
	LRESULT SetStyle(DWORD dwStyle);
	LRESULT SetToolTips(HWND hWndToolTip);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
	LRESULT SetWindowTheme(LPWSTR pwStr);

//////////////////////////////////////////////////////////////////////////////////////////////////////

	LRESULT AddCommCtlBitmap(void);
	// TODO: Add appropriate default values / Rearrange parameter order
	BOOL	AddButton(int iBitmap, int iCommand, char cState, char cStyle, DWORD_PTR dwData, INT_PTR piString);
};

////////////////////////////////////////////////////////////////////////////////
