
#include <windows.h>

#include <kxWindows/Input.h>
#include <kxWindows/Win32Input.h>

CWin32Input::CWin32Input()
{
	mKeyMap[VK_TAB] = KEY_TAB;
}

unsigned char CWin32Input::GetKey(int vkCode) const
{
	return mKeyMap[vkCode];
}