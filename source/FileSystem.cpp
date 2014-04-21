
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <cassert>

#include <kxWindows/FileSystem.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

CFileSystem::SFileInfo CFileSystem::GetFileInfo(const std::string& filename)
{
	HANDLE fileHandle = CreateFile(
		filename.c_str(),
		GENERIC_READ,
		FILE_SHARE_READ,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	CFileSystem::SFileInfo fileInfo;
	::ZeroMemory(&fileInfo, sizeof(fileInfo));
	fileInfo.filename = filename;

	if (fileHandle != INVALID_HANDLE_VALUE)
	{
		char buffer[256];
		char* filePart;
		DWORD result = GetFullPathName(filename.c_str(), 256, buffer, &filePart);

		LARGE_INTEGER size;
		result = GetFileSizeEx(fileHandle, &size);

		CloseHandle(fileHandle);

		fileInfo.fullPath = buffer;
		fileInfo.fileSize = size.QuadPart;
	}

	return fileInfo;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::vector<std::string> CFileSystem::FindFilesInDirectory(const std::string& directory) 
{
	std::vector<std::string> result;

	WIN32_FIND_DATA ffd;
	HANDLE findHandle = FindFirstFile(directory.c_str(), &ffd);

	do
	{
		result.push_back(ffd.cFileName);
	} while (FindNextFile(findHandle, &ffd) != 0);

	FindClose(findHandle);

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
