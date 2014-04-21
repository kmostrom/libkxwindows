
///////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <string>

///////////////////////////////////////////////////////////////////////////////////////////////////////

class CPath
{
public:
	CPath();
	CPath(const char* path);
	~CPath();

	std::string GetPath() const;

public:
	static std::string Join(const std::string& path1, const std::string& path2);
	static std::string RemoveDuplicateCharacters(const char* string, const char character);
	static std::string RemoveLeadingCharacters(const char* string, const char* characters);
	static std::string RemoveTrailingCharacters(const char* string, const char* characters);
	static std::string ReplaceCharactersWith(const char* string, const char character, const char* replacement);

	static bool IsSlash(const char* c);
	static bool IsInString(const char* string, char character);

private:

	std::string mPath;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////
