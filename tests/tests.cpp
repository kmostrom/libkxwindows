
#include <gtest/gtest.h>

#include <kxWindows/Path.h>

TEST(CPathTest, JoinTest)
{
	{
		CPath path("/usr/bin");
		path.Join("env");
		ASSERT_EQ("/usr/bin/env", path.GetPath());
	}

	{
		CPath path("/usr/bin");
		path.Join("");
		ASSERT_EQ("/usr/bin/env", path.GetPath());
	}

	{
		CPath path;
		path.Join("bin");
		ASSERT_EQ("bin", path.GetPath());
	}
}

TEST(CPathTest, PopTest)
{
	{
		CPath path("/usr/local/bin");
		std::string directory = path.Pop();
		ASSERT_EQ("/usr/local", path.GetPath());
		ASSERT_EQ("bin", directory);
	}

	{
		CPath path("/usr/local/bin/");
		std::string directory = path.Pop();
		ASSERT_EQ("/usr/local", path.GetPath());
		ASSERT_EQ("bin", directory);
	}

	{
		CPath path("/");
		std::string directory = path.Pop();
		ASSERT_EQ("/", path.GetPath());
		ASSERT_EQ("", directory);
	}

	{
		CPath path;
		std::string directory = path.Pop();
		ASSERT_EQ("", path.GetPath());
		ASSERT_EQ("", directory);
	}

	{
		CPath path("c:\\my\\path\\");
		std::string directory = path.Pop();
		ASSERT_EQ("c:\\my", path.GetPath());
		ASSERT_EQ("path", directory);
	}

	{
		CPath path("c:\\my\\path");
		std::string directory = path.Pop();
		ASSERT_EQ("c:\\my", path.GetPath());
		ASSERT_EQ("path", directory);
	}

	{
		CPath path("\\");
		std::string directory = path.Pop();
		ASSERT_EQ("\\", path.GetPath());
		ASSERT_EQ("", directory);
	}

	{
		CPath path("c:");
		std::string directory = path.Pop();
		ASSERT_EQ("c:", path.GetPath());
		ASSERT_EQ("", directory);
	}

	{
		CPath path("/usr");
		std::string directory = path.Pop();
		ASSERT_EQ("/", path.GetPath());
		ASSERT_EQ("usr", directory);
	}
}
