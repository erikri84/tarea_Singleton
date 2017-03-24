#pragma once 
#include "Filesystem.h"
#include <iostream>

class FilesystemPS4 : public Filesystem
{
public:

	std::string read(const std::string& filename)
	{
		return "PS4\n";
	};

	void write(const std::string& filename, const std::string& content)
	{};
};