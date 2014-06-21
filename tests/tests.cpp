
#include <gtest/gtest.h>

#include <kxWindows/Path.h>

TEST(CPathTest, JoinTest)
{
	CPath path("/usr/bin");
	path.Join("env");

	ASSERT_EQ("/usr/bin/env", path.GetPath());

	path.Join("");
	ASSERT_EQ("/usr/bin/env", path.GetPath());

	CPath emptyPath;
	emptyPath.Join("bin");
	ASSERT_EQ("bin", emptyPath.GetPath());
}

TEST(CPathTest, PopTest)
{
	CPath path("/usr/local/bin");
	std::string directory = path.Pop();

	ASSERT_EQ("/usr/local", path.GetPath());
	ASSERT_EQ("bin", directory);
}
