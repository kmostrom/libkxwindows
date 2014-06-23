
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <windows.h>

#include <kxWindows/UIFileListPane.h>

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
	case WM_KEYDOWN:
		PostMessage(mParentWindowHandle, WM_KEYDOWN, (WPARAM) wParam, (LPARAM) 0);
		break;
	case WM_SETFOCUS:
		PostMessage(mParentWindowHandle, EMessage::WM_FILEPANE_GOTFOCUS, (WPARAM) windowHandle, (LPARAM) 0);
		break;
	case WM_KILLFOCUS:
		SetCurSel(-1);
		break;
	}

	return CallWindowProc(mOldWndProc, windowHandle, message, wParam, lParam);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

void UIFileListPane::Populate(const std::vector<FileSystem_Windows::SFileInfo>& files)
{
	int i=0;
	for(std::vector<FileSystem_Windows::SFileInfo>::const_iterator it=files.begin(); it != files.end(); ++it) {
		FileSystem_Windows::SFileInfo fileInfo = (*it);

		const char* filename = fileInfo.filename.c_str();

		InsertString(i, filename);
		i++;
	}
}
