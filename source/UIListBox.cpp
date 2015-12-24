<<<<<<< HEAD
// CPP /////////////////////////////////////////////////////////////////////////
=======
///////////////////////////////////////////////////////////////////////////////////////////////////////
>>>>>>> origin/master

#include <kxWindows/UIListBox.h>
#include <kxWindows/Rect.h>

<<<<<<< HEAD
////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::AddFile(LPCTSTR pszFilename)
{
	return(::SendMessage(mWindowHandle, LB_ADDFILE, (WPARAM)0, (LPARAM)pszFilename));
}

////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::AddString(LPCTSTR pszString)
{
	return(::SendMessage(mWindowHandle, LB_ADDSTRING, (WPARAM)0, (LPARAM)pszString));
=======
///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::AddFile(LPCTSTR filename)
{
	return ::SendMessage(mWindowHandle, LB_ADDFILE, (WPARAM) 0, (LPARAM) filename);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::AddString(LPCTSTR string)
{
	return ::SendMessage(mWindowHandle, LB_ADDSTRING, (WPARAM) 0, (LPARAM) string);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::DeleteString(int iIndex)
{
	return(::SendMessage(mWindowHandle, LB_DELETESTRING, (WPARAM)iIndex, (LPARAM)0));
=======
LRESULT UIListBox::DeleteString(int index)
{
	return ::SendMessage(mWindowHandle, LB_DELETESTRING, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::Dir(UINT uiAttrib, LPCTSTR pszPath)
{
	return(::SendMessage(mWindowHandle, LB_DIR, (WPARAM)uiAttrib, (LPARAM)pszPath));
=======
LRESULT UIListBox::Dir(UINT attribute, LPCTSTR path)
{
	return ::SendMessage(mWindowHandle, LB_DIR, (WPARAM) attribute, (LPARAM) path);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::FindString(long lIndex, LPCTSTR pszString)
{
	return(::SendMessage(mWindowHandle, LB_FINDSTRING, (WPARAM)lIndex, (LPARAM)pszString));
=======
LRESULT UIListBox::FindString(long index, LPCTSTR string)
{
	return ::SendMessage(mWindowHandle, LB_FINDSTRING, (WPARAM) index, (LPARAM) string);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::FindStringExact(long lIndex, LPCSTR pszString)
{
	return(::SendMessage(mWindowHandle, LB_FINDSTRINGEXACT, (WPARAM)lIndex, (LPARAM)pszString));
=======
LRESULT UIListBox::FindStringExact(long index, LPCSTR string)
{
	return ::SendMessage(mWindowHandle, LB_FINDSTRINGEXACT, (WPARAM) index, (LPARAM) string);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetAnchorIndex(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETANCHORINDEX, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETANCHORINDEX, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetCaretIndex(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETCARETINDEX, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETCARETINDEX, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetCount(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETCOUNT, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETCOUNT, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetCurSel(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETCURSEL, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETCURSEL, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetHorizontalExtent(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETHORIZONTALEXTENT, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETHORIZONTALEXTENT, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetItemData(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_GETITEMDATA, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::GetItemData(long index)
{
	return ::SendMessage(mWindowHandle, LB_GETITEMDATA, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetItemHeight(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_GETITEMHEIGHT, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::GetItemHeight(long index)
{
	return ::SendMessage(mWindowHandle, LB_GETITEMHEIGHT, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetItemRect(long lIndex, LPRECT pRect)
{
	return(::SendMessage(mWindowHandle, LB_GETITEMRECT, (WPARAM)lIndex, (LPARAM)pRect));
=======
LRESULT UIListBox::GetItemRect(long index, LPRECT rect)
{
	return ::SendMessage(mWindowHandle, LB_GETITEMRECT, (WPARAM) index, (LPARAM) rect);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetListboxInfo(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETLISTBOXINFO, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETLISTBOXINFO, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetLocale(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETLOCALE, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETLOCALE, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetSel(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_GETSEL, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::GetSel(long index)
{
	return ::SendMessage(mWindowHandle, LB_GETSEL, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetSelCount(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETSELCOUNT, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETSELCOUNT, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetSelItems(long lItemCount, LPUINT puiItems)
{
	return(::SendMessage(mWindowHandle, LB_GETSELITEMS, (WPARAM)lItemCount, (LPARAM)puiItems));
=======
LRESULT UIListBox::GetSelItems(long itemCount, LPUINT items)
{
	return ::SendMessage(mWindowHandle, LB_GETSELITEMS, (WPARAM) itemCount, (LPARAM) items);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetText(long lIndex, LPCTSTR pszString)
{
	return(::SendMessage(mWindowHandle, LB_GETTEXT, (WPARAM)lIndex, (LPARAM)pszString));
=======
LRESULT UIListBox::GetText(long index, LPCTSTR string)
{
	return ::SendMessage(mWindowHandle, LB_GETTEXT, (WPARAM) index, (LPARAM) string);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::GetTextLen(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_GETTEXTLEN, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::GetTextLen(long index)
{
	return ::SendMessage(mWindowHandle, LB_GETTEXTLEN, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::GetTopIndex(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_GETTOPINDEX, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_GETTOPINDEX, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::InitStorage(long lItemCount, long lBytes)
{
	return(::SendMessage(mWindowHandle, LB_INITSTORAGE, (WPARAM)lItemCount, (LPARAM)lBytes));
=======
LRESULT UIListBox::InitStorage(long itemCount, long bytes)
{
	return ::SendMessage(mWindowHandle, LB_INITSTORAGE, (WPARAM) itemCount, (LPARAM) bytes);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::InsertString(long lIndex, LPCTSTR pszString)
{
	return(::SendMessage(mWindowHandle, LB_INSERTSTRING, (WPARAM)lIndex, (LPARAM)pszString));
=======
LRESULT UIListBox::InsertString(long index, LPCTSTR string)
{
	return ::SendMessage(mWindowHandle, LB_INSERTSTRING, (WPARAM) index, (LPARAM) string);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::ItemFromPoint(long lX, long lY)
{
	return(::SendMessage(mWindowHandle, LB_ITEMFROMPOINT, (WPARAM)0, (LPARAM)MAKELPARAM(lX, lY)));
=======
LRESULT UIListBox::ItemFromPoint(long x, long y)
{
	return ::SendMessage(mWindowHandle, LB_ITEMFROMPOINT, (WPARAM) 0, (LPARAM) MAKELPARAM(x, y));
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT UIListBox::ResetContent(void)
{
<<<<<<< HEAD
	return(::SendMessage(mWindowHandle, LB_RESETCONTENT, (WPARAM)0, (LPARAM)0));
=======
	return ::SendMessage(mWindowHandle, LB_RESETCONTENT, (WPARAM) 0, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SelectString(long lIndex, LPCTSTR pszString)
{
	return(::SendMessage(mWindowHandle, LB_SELECTSTRING, (WPARAM)lIndex, (LPARAM)pszString));
=======
LRESULT UIListBox::SelectString(long index, LPCTSTR string)
{
	return ::SendMessage(mWindowHandle, LB_SELECTSTRING, (WPARAM) index, (LPARAM) string);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SelItemRange(BOOL bSelect, long lStartIndex, long lEndIndex)
{
	return(::SendMessage(mWindowHandle, LB_SELITEMRANGE, (WPARAM)bSelect, (LPARAM)MAKELPARAM(lStartIndex, lEndIndex)));
=======
LRESULT UIListBox::SelItemRange(BOOL select, long startIndex, long endIndex)
{
	return ::SendMessage(mWindowHandle, LB_SELITEMRANGE, (WPARAM) select, (LPARAM) MAKELPARAM(startIndex, endIndex));
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SelItemRangeEx(long lStartIndex, long lEndIndex)
{
	return(::SendMessage(mWindowHandle, LB_SELITEMRANGEEX, (WPARAM)lStartIndex, (LPARAM)lEndIndex));
=======
LRESULT UIListBox::SelItemRangeEx(long startIndex, long endIndex)
{
	return ::SendMessage(mWindowHandle, LB_SELITEMRANGEEX, (WPARAM) startIndex, (LPARAM) endIndex);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetAnchorIndex(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_SETANCHORINDEX, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::SetAnchorIndex(long index)
{
	return ::SendMessage(mWindowHandle, LB_SETANCHORINDEX, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetCaretIndex(long lIndex, BOOL bScroll)
{
	return(::SendMessage(mWindowHandle, LB_SETCARETINDEX, (WPARAM)lIndex, (LPARAM)bScroll));
=======
LRESULT UIListBox::SetCaretIndex(long index, BOOL scroll)
{
	return ::SendMessage(mWindowHandle, LB_SETCARETINDEX, (WPARAM) index, (LPARAM) scroll);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetColumnWidth(long lWidth)
{
	return(::SendMessage(mWindowHandle, LB_SETCOLUMNWIDTH, (WPARAM)lWidth, (LPARAM)0));
=======
LRESULT UIListBox::SetColumnWidth(long width)
{
	return ::SendMessage(mWindowHandle, LB_SETCOLUMNWIDTH, (WPARAM) width, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetCount(long lCount)
{
	return(::SendMessage(mWindowHandle, LB_SETCOUNT, (WPARAM)lCount, (LPARAM)0));
=======
LRESULT UIListBox::SetCount(long count)
{
	return ::SendMessage(mWindowHandle, LB_SETCOUNT, (WPARAM) count, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetCurSel(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_SETCURSEL, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::SetCurSel(long index)
{
	return ::SendMessage(mWindowHandle, LB_SETCURSEL, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetHorizontalExtent(long lExtent)
{
	return(::SendMessage(mWindowHandle, LB_SETHORIZONTALEXTENT, (WPARAM)lExtent, (LPARAM)0));
=======
LRESULT UIListBox::SetHorizontalExtent(long extent)
{
	return ::SendMessage(mWindowHandle, LB_SETHORIZONTALEXTENT, (WPARAM) extent, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetItemData(long lIndex, long lValue)
{
	return(::SendMessage(mWindowHandle, LB_SETITEMDATA, (WPARAM)lIndex, (LPARAM)lValue));
=======
LRESULT UIListBox::SetItemData(long index, long value)
{
	return ::SendMessage(mWindowHandle, LB_SETITEMDATA, (WPARAM) index, (LPARAM) value);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetItemHeight(long lIndex, long lHeight)
{
	return(::SendMessage(mWindowHandle, LB_SETITEMHEIGHT, (WPARAM)lIndex, (LPARAM)lHeight));
=======
LRESULT UIListBox::SetItemHeight(long index, long height)
{
	return ::SendMessage(mWindowHandle, LB_SETITEMHEIGHT, (WPARAM) index, (LPARAM) height);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetLocale(WORD wLocale)
{
	return(::SendMessage(mWindowHandle, LB_SETLOCALE, (WPARAM)wLocale, (LPARAM)0));
=======
LRESULT UIListBox::SetLocale(WORD locale)
{
	return ::SendMessage(mWindowHandle, LB_SETLOCALE, (WPARAM) locale, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetSel(BOOL bSelect, long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_SETSEL, (WPARAM)bSelect, (LPARAM)lIndex));
=======
LRESULT UIListBox::SetSel(BOOL select, long index)
{
	return ::SendMessage(mWindowHandle, LB_SETSEL, (WPARAM) select, (LPARAM) index);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetTabStops(long lTabStopCount, LPUINT puiTabStops)
{
	return(::SendMessage(mWindowHandle, LB_SETTABSTOPS, (WPARAM)lTabStopCount, (LPARAM)puiTabStops));
=======
LRESULT UIListBox::SetTabStops(long tabStopCount, LPUINT tabStops)
{
	return ::SendMessage(mWindowHandle, LB_SETTABSTOPS, (WPARAM) tabStopCount, (LPARAM) tabStops);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
LRESULT UIListBox::SetTopIndex(long lIndex)
{
	return(::SendMessage(mWindowHandle, LB_SETTOPINDEX, (WPARAM)lIndex, (LPARAM)0));
=======
LRESULT UIListBox::SetTopIndex(long index)
{
	return ::SendMessage(mWindowHandle, LB_SETTOPINDEX, (WPARAM) index, (LPARAM) 0);
>>>>>>> origin/master
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

HWND UIListBox::Create(HWND parentWindowHandle, UINT id)
{
	mParentWindowHandle = parentWindowHandle;

	mWindowHandle = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		WC_LISTBOX,
		"",
		WS_VISIBLE | WS_CHILD | LBS_WANTKEYBOARDINPUT,
		0, 0, 220, 127,
		mParentWindowHandle,
		(HMENU) id,
		GetModuleHandle(NULL),
		this);

	SubClass(UIWindow::stWndProc);
<<<<<<< HEAD
	/*
	mWindowHandle = CreateEx(
		WS_EX_CLIENTEDGE,
		WC_LISTBOX,
		"",
		WS_VISIBLE | WS_CHILD | LBS_WANTKEYBOARDINPUT,
		Rect(0, 0, 220, 127),
		parentWindowHandle,
		(HMENU) id,
		this);
	*/
=======

>>>>>>> origin/master
	PostMessage(mWindowHandle, WM_SETFONT, (WPARAM) GetStockObject(ANSI_VAR_FONT), FALSE);

	return mWindowHandle;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UIListBox::WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	return CallWindowProc(mOldWndProc, windowHandle, message, wParam, lParam);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
=======
>>>>>>> origin/master

std::string UIListBox::GetText(int index)
{
	std::string text;

	int selectionIndex = this->GetCurSel();

	if (selectionIndex != LB_ERR)
	{
		int length = this->GetTextLen(selectionIndex);

		if (length > 0)
		{
			char* buffer = new char[length + 1];

			if (buffer)
			{
				this->GetText(selectionIndex, buffer);
				text = std::string(buffer);

				delete buffer;
			}
		}
	}

	return text;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
