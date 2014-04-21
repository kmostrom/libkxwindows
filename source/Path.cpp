
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <kxWindows/Path.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////

CPath::CPath()
	: mPath("") {}

CPath::CPath(const char* path)
	: mPath(path) {}

CPath::~CPath() {}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::string CPath::Join(const std::string& path1, const std::string& path2)
{
	// if mPath is ""
	std::string tmpStr = path1 + "\\" + path2;
	tmpStr = CPath::ReplaceCharactersWith(tmpStr.c_str(), '\\', "/");
	tmpStr = CPath::RemoveDuplicateCharacters(tmpStr.c_str(), '/');

	return tmpStr.c_str();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::string CPath::GetPath() const
{
	return mPath;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::string CPath::RemoveDuplicateCharacters(const char* s, const char character)
{
	std::string result = "";

	if (s == nullptr || strlen(s) == 0)
	{
		return result;
	}

	const char* current = s;
	const char* prev = nullptr;

	while (*current)
	{
		//if (!(current && IsSlash(prev) && IsSlash(current)))
		if (prev == nullptr || !((*prev == character) && (*current == character)))
		{
			result = result + *current;
			prev = current;
		}
		current++;
	}

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::string CPath::RemoveLeadingCharacters(const char* string, const char* characters)
{
	std::string result = "";

	if (string == nullptr || strlen(string) == 0)
	{
		return result;
	}

	const char* current = string;

	while(*current && IsInString(characters, *current))
	{
		current++;
	}
	result = current;

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::string CPath::RemoveTrailingCharacters(const char* string, const char* characters) 
{
	std::string result = "";
	if (string == nullptr || strlen(string) == 0)
	{
		return result;
	}

	int lastIndexOffset = strlen(string);
	const char* current = string + lastIndexOffset-1;

	while(IsInString(characters, *current--))
	{
		lastIndexOffset--;
	}

	for(int i=0; i < lastIndexOffset; i++)
	{
		result = result + string[i];
	}

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

bool CPath::IsInString(const char* string, char character)
{
	const char* c = string;

	while (*c)
	{
		if (*c++ == character)
		{
			return true;
		}
	}
	return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

std::string CPath::ReplaceCharactersWith(const char* string, const char character, const char* replacement)
{
	std::string result = "";

	if (string == nullptr || replacement == nullptr)
	{
		return result;
	}

	const char* current = string;

	while(*current)
	{
		if (*current == character)
		{
			result = result + replacement;
		}
		else
		{
			result = result + *current;
		}
		current++;
	}

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

bool CPath::IsSlash(const char* c)
{
	if (c == nullptr)
	{
		return false;
	}
	return *c == '\\' || *c == '/';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
