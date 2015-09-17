
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <windowsx.h>

#include <kxWindows/UIFileListPane.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

UIFileListPane::UIFileListPane()
	: mSavedSelectionIndex(0) 
{
}

UIFileListPane::~UIFileListPane() {}

///////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK UIFileListPane::WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_LBUTTONDBLCLK: 
		// WPARAM = (UIFileListPane*) source,
		// LPARAM = 0 (not used)
		PostMessage(mParentWindowHandle, EMessage::WM_FILEPANE_LBUTTONDBLK, (WPARAM) this, (LPARAM) 0);
		break;
	case WM_SETFOCUS:
		{
			PostMessage(mParentWindowHandle, EMessage::WM_FILEPANE_GOTFOCUS, (WPARAM) windowHandle, (LPARAM) 0);
			SetCurSel(mSavedSelectionIndex);
		}
		break;
	case WM_KILLFOCUS:
		{
			mSavedSelectionIndex = GetCurSel();
			SetCurSel(-1);
		}

		break;
	case WM_MOUSEWHEEL:
		{
			::PostMessage(mParentWindowHandle, EMessage::WM_FILEPANE_MOUSEWHEEL, wParam, lParam);
		}
		return 0;
	}

	return CallWindowProc(mOldWndProc, windowHandle, message, wParam, lParam);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

void UIFileListPane::Populate(const std::vector<SFileInfo>& files)
{
	int i=0;
	for(std::vector<SFileInfo>::const_iterator it=files.begin(); it != files.end(); ++it) {
		SFileInfo fileInfo = (*it);

		const char* filename = fileInfo.filename.c_str();

		InsertString(i, filename);
		i++;
	}
	SetCurSel(0);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
