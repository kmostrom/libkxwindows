
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <windows.h>
#include <commctrl.h>

#include "UIWindow.h"

////////////////////////////////////////////////////////////////////////////////

class UIListView: public UIWindow
{
public:
	UIListView()
	: UIWindow()
	{
		SetClassName(WC_LISTVIEW);
	};

	UIListView(HWND parentWindowHandle, UINT id)
	: UIWindow(parentWindowHandle)
	{
		mMenuHandle = (HMENU) id;
	};

	LRESULT ApproximateViewRect(int iX, int iY, int iCount);
	LRESULT Arrange(int iCode);
	LRESULT CancelEditLabel(void);
	LRESULT CreateDragImage(int iItem, LPPOINT pPointUpLeft);
	LRESULT DeleteAllItems(void);
	LRESULT DeleteColumn(int iCol);
	LRESULT DeleteItem(int iItem);
	LRESULT EditLabel(int iItem);
	LRESULT EnableGroupView(BOOL bEnable);
	LRESULT EnsureVisible(int iItem, BOOL bPartialOK);
	LRESULT FindItem(int iStart, const LVFINDINFO *pFindInfoI);
	LRESULT GetBkColor(void);
	LRESULT GetBkImage(LPLVBKIMAGE pBkImage);
	LRESULT GetCallbackMask(void);
	LRESULT GetColumn(int iColumn, LPLVCOLUMN pColumn);
	LRESULT GetColumnOrderArray(int iCount, LPINT piArray);
	LRESULT GetColumnWidth(int iColumn);
	LRESULT GetCountPerPage(void);
	LRESULT GetEditControl(void);
	LRESULT GetExtendedListViewStyle(void);
	LRESULT GetGroupInfo(int iGroupID, PLVGROUP pGroup);
	LRESULT GetGroupMetrics(PLVGROUPMETRICS pGroupMetrics);
	LRESULT GetHeader(void);
	LRESULT GetHotCursor(void);
	LRESULT GetHotItem(void);
	LRESULT GetHoverTime(void);
	LRESULT GetImageList(int iImageList);
	LRESULT GetInsertMark(LPLVINSERTMARK pInsertMark);
	LRESULT GetInsertMarkColor(void);
	LRESULT GetInsertMarkRect(LPRECT pRect);
	LRESULT GetISearchString(LPSTR pszString);
	LRESULT GetItem(LPLVITEM pItem);
	LRESULT GetItemCount(void);
	LRESULT GetItemPosition(int iItem, LPPOINT pPoint);
	LRESULT GetItemRect(int iItem, LPRECT pRect);
	LRESULT GetItemSpacing(BOOL bSmall);
	LRESULT GetItemState(int iItem, UINT uiMask);
	LRESULT GetItemText(int iItem, LPLVITEM pItem);
	LRESULT GetNextItem(int iStart, UINT uiFlags);
	LRESULT GetNumberOfWorkAreas(LPUINT puiWorkAreas);
	LRESULT GetOrigin(LPPOINT pOrigin);
	LRESULT GetOutlineColor(void);
	LRESULT GetSelectedColumn(void);
	LRESULT GetSelectedCount(void);
	LRESULT GetSelectionMark(void);//
	LRESULT GetStringWidth(LPCSTR pszString);
	LRESULT GetSubItemRect(int iItem, LPRECT pRect);
	LRESULT GetTextBkColor(void);
	LRESULT GetTextColor(void);
	LRESULT GetTileInfo(PLVTILEINFO pTileInfo);
	LRESULT GetTileViewInfo(PLVTILEVIEWINFO pTileViewInfo);
	LRESULT GetToolTips(void);
	LRESULT GetTopIndex(void);
	LRESULT GetUnicodeFormat(void);
	LRESULT GetView(void);
	LRESULT GetViewRect(LPRECT pRect);
	LRESULT GetWorkAreas(int iWorkAreas, LPRECT pRect);
	LRESULT HasGroup(DWORD dwGroupID);
	LRESULT HitTest(LPLVHITTESTINFO pHitTestInfo);
	LRESULT InsertColumn(int iColumn, const LV_COLUMN *pColumn);
	LRESULT InsertGroup(int iIndex, PLVGROUP pGroup);
	LRESULT InsertGroupSorted(PLVINSERTGROUPSORTED pGroup, int iIndex);
	LRESULT InsertItem(const LV_ITEM *pItem);
	LRESULT InsertMarkHitTest(LPPOINT pPoint, LPLVINSERTMARK pInsertMark);
	LRESULT IsGroupViewEnabled(void);
	LRESULT MapIDToIndex(UINT uiID);
	LRESULT MapIndexToID(UINT uiIndex);
	LRESULT MoveGroup(int iGroupID, int iDestinationIndex);
	LRESULT MoveItemToGroup(int iItemID, int iGroupID);
	LRESULT RedrawItems(int iFirst, int iLast);
	LRESULT RemoveAllGroups(void);
	LRESULT RemoveGroup(int iGroupID);
	LRESULT Scroll(int iX, int iY);
	LRESULT SetBkColor(COLORREF clrBk);
	LRESULT SetBkImage(LPLVBKIMAGE pBkImage);
	LRESULT SetCallbackMask(UINT uiMask);
	LRESULT SetColumn(int iColumn, LPLVCOLUMN pColumn);
	LRESULT SetColumnOrderArray(int iCount, LPINT piArray);
	LRESULT SetColumnWidth(int iColumn, int iX);
	LRESULT SetExtendedListViewStyle(DWORD dwExStyle);
	LRESULT SetExtendedListViewStyleEx(DWORD dwExMask, DWORD dwExStyle);
	LRESULT SetGroupInfo(int iGroupID, PLVGROUP pGroup);
	LRESULT SetGroupMetrics(PLVGROUPMETRICS pGroupMetrics);
	LRESULT SetHotCursor(HCURSOR hCursor);
	LRESULT SetHotItem(int iIndex);
	LRESULT SetHoverTime(DWORD dwHoverTime);
	LRESULT SetIconSpacing(int iX, int iY);
	LRESULT SetImageList(HIMAGELIST hImageList, int iImageList);
	LRESULT SetInfoTip(PLVSETINFOTIP pSetInfoTip);
	LRESULT SetInsertMark(LPLVINSERTMARK pInsertMark);
	LRESULT SetInsertMarkColor(COLORREF clrColor);
	LRESULT SetItem(LPLVITEM pItem);
	LRESULT SetItemCount(int iItemCount);
	LRESULT SetItemCountEx(int iItemCount, DWORD dwFlags);
	LRESULT SetItemPosition(int iItem, int iX, int iY);
	LRESULT SetItemPosition32(int iItem, LPPOINT pPoint);
	LRESULT SetItemState(int iItem, LPLVITEM pItem);
	LRESULT SetItemText(int iItem, LPLVITEM pItem);
	LRESULT SetOutlineColor(COLORREF clrColor);
	LRESULT SetSelectedColumn(int iColumn);
	LRESULT SetSelectionMark(int iIndex);
	LRESULT SetTextBkColor(COLORREF clrTextBkColor);
	LRESULT SetTextColor(COLORREF clrTextColor);
	LRESULT SetTileInfo(PLVTILEINFO pTileInfo);
	LRESULT SetTileViewInfo(PLVTILEVIEWINFO pTileViewInfo);
//	LRESULT SetTileWidth(PLVTILEINFO pTileInfo);
	LRESULT SetToolTips(HWND hWndToolTip);
	LRESULT SetUnicodeFormat(BOOL bUnicode);
	LRESULT SetView(DWORD dwView);
	LRESULT SetWorkAreas(int iWorkAreaCount, LPRECT pRect);
	LRESULT SortGroups(PFNLVGROUPCOMPARE pfnGroupCompare, LPVOID lpVoid);
	LRESULT SortItems(PFNLVCOMPARE pfnCompare, LPARAM lParamSort);
	LRESULT SortItemsEx(PFNLVCOMPARE pfnCompare, LPARAM lParamSort);
	LRESULT SubItemHitTest(LPLVHITTESTINFO pHitTestInfo);
	LRESULT Update(int iItem);

	//

//	LRESULT InsertColumn(PSTR pszText, int iWidth = 0);
//	LRESULT InsertItem(PSTR pszText, int iIndex);
//	LRESULT InsertItem(LPLVITEM *pItem);

//	BOOL InitListViewImageListsFromResource(DWORD dwResourceName);
	HWND Create(HWND parentWindowHandle, UINT id);
};

////////////////////////////////////////////////////////////////////////////////
