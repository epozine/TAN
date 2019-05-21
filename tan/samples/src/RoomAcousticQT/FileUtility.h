#pragma once
#include <string>

struct FileVersion
{
	int m_MajorVersion = 0;
	int m_MinorVersion = 0;
	int m_BuildVersion = 0;
	int m_RevisionVersion = 0;
};
FileVersion getFileVersion(const std::string& filepath);
std::string getFileVersionString(const std::string& filepath);
std::string getFileNameWithExtension(const std::string& filepath);
std::string getFileNameWithoutExtension(const std::string& filepath);
std::string getCurrentDirectory();
inline bool checkFileExist(const std::string& filename)
{
	if (FILE *file = fopen(filename.c_str(), "r"))
	{
		fclose(file);
		return true;
	}
	else
	{
		return false;
	}
}