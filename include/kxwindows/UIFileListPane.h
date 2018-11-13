
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "UIListBox.h"

// TODO: Cross-package dependency. Fixable?
//#include <filesystem/Path.h>
//#include <filesystem/FileSystem_Windows.h>

#include <vector>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class UIFileListPane: public UIListBox
{
public:
	enum EMessage
	{
		WM_FILEPANE_GOTFOCUS = WM_USER, // wParam == filePaneWindowHandle, lParam == 0
		WM_FILEPANE_LBUTTONDBLK,
		WM_FILEPANE_MOUSEWHEEL
	};

	enum EFilePermission
	{
		FILE_PERMISSION_USER_READ = 1 << 0,
		FILE_PERMISSION_USER_WRITE = 1 << 1,
		FILE_PERMISSION_USER_EXECUTE = 1 << 2,
		FILE_PERMISSION_GROUP_READ = 1 << 3,
		FILE_PERMISSION_GROUP_WRITE = 1 << 4,
		FILE_PERMISSION_GROUP_EXECUTE = 1 << 5,
		FILE_PERMISSION_OTHER_READ = 1 << 6,
		FILE_PERMISSION_OTHER_WRITE = 1 << 7,
		FILE_PERMISSION_OTHER_EXECUTE = 1 << 8
	};

	struct SFilePermissions
	{
		// TODO: typedef proper types based on compiler/platform
		short unsigned int bits;
	};

	struct STime
	{
		unsigned short year;
		unsigned short month;
		unsigned short day;
		unsigned short hours;
		unsigned short minutes;
		unsigned short seconds;
		unsigned short milliseconds;
	};

	struct SFileInfo
	{
		std::string filename;
		std::string fullPath;
		long long fileSize;

		// TODO: use *nix attribute format?
		long long attributes;

		/*
		struct STime createTime;
		struct STime lastAccessTime;
		struct STime lastWriteTime;

		struct SFilePermissions filePermissions;
		*/

		SFileInfo()
			: filename("")
			, fullPath("")
			, fileSize(-1)
			, attributes(0)
		{}
	}; 

public:
	UIFileListPane();
	virtual ~UIFileListPane();

	virtual LRESULT CALLBACK WndProc(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam);

	void Populate(const std::vector<SFileInfo>& files);

private:
	int mSavedSelectionIndex;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
