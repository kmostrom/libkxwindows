
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "UIWindow.h"

#include <windows.h>
#include <commctrl.h>

////////////////////////////////////////////////////////////////////////////////

class UITreeView: public UIWindow
{
public:
	UITreeView(HWND hWndParent)
		: UIWindow(hWndParent)
	{
		SetClassName( WC_TREEVIEW );
	};

	UITreeView(HWND hWndParent, UINT id)
		: UIWindow(hWndParent)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT CreateDragImage(HTREEITEM hTreeItem);
	LRESULT DeleteItem(HTREEITEM hTreeItem);
	LRESULT EditLabel(HTREEITEM hTreeItem);
	LRESULT EndEditLabelNow(BOOL bCancel);
	LRESULT EnsureVisible(HTREEITEM hTreeItem);
	LRESULT Expand(HTREEITEM hTreeItem, UINT uiFlag);
	LRESULT GetBkColor(void);
	LRESULT GetCount(void);
	LRESULT GetEditControl(void);
	LRESULT GetImageList(int iImageListType);
	LRESULT GetIndent(void);
	LRESULT GetInsertMarkColor(void);
	LRESULT GetISearchString(LPSTR pszString);
	LRESULT GetItem(LPTVITEMEX pItemEx);
	LRESULT GetItemHeight(void);
	LRESULT GetItemRect(BOOL bItemTextRectOnly, LPRECT pRect);
	LRESULT GetItemState(HTREEITEM hItem, UINT uiStateMask);
	LRESULT GetLineColor(void);
	LRESULT GetNextItem(UINT uiFlag, HTREEITEM hItem);
	LRESULT GetScrollTime(void);
	LRESULT GetTextColor(void);
	LRESULT GetToolTips(void);
	LRESULT GetUnicodeFormat(void);
	LRESULT GetVisibleCount(void);
	LRESULT HitTest(LPTVHITTESTINFO pHitTestInfo);
	LRESULT InsertItem(LPTVINSERTSTRUCT pInsertStruct);
	LRESULT MapAcIDToHTreeItem(UINT uiID);
	LRESULT MapHTreeItemToAccID(HTREEITEM hItem);
	LRESULT SelectItem(DWORD dwFlags, HTREEITEM hTreeItem);
	LRESULT SetBkColor(COLORREF clrBk);
	LRESULT SetImageList(DWORD dwImageType, HIMAGELIST hImageList);
	LRESULT SetIndent(int iIndent);
	LRESULT SetInsertMark(BOOL bAfter, HTREEITEM hTreeItem);
	LRESULT SetInsertMarkColor(COLORREF clrInsertMarkColor);
	LRESULT SetItem(const LPTVITEMEX pItemEx);
	LRESULT SetItemHeight(short siHeight);
	LRESULT SetLineColor(COLORREF clrLineColor);
	LRESULT SetScrollTime(UINT uiScrollTime);
	LRESULT SetTextColor(COLORREF clrTextColor);
	LRESULT SetTooltips(HWND hWndTooltip);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
	LRESULT SortChildren(BOOL bRecurse, HTREEITEM hTreeItem);
	LRESULT SortChildrenCB(BOOL bRecurse, LPTVSORTCB pSort);
};

////////////////////////////////////////////////////////////////////////////////
