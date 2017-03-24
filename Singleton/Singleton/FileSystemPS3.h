#pragma once 
#include "Filesystem.h"
#include <iostream>

class FilesystemPS3 : public Filesystem
{
public:
	std::string read(const std::string& filename)
	{
		return "PS3\n";
	};

	void write(const std::string& filename, const std::string& content)
	{
		printf("PS3");
	};
};