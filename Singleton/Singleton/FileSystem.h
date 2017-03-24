#pragma once
#include <string>

class Filesystem
{
public:
	static Filesystem* Instance();

	virtual std::string read(const std::string& filename) = 0;
	virtual void write(const std::string& filename, const std::string& content) = 0;

protected:
	Filesystem() {};
};