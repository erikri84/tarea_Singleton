#pragma once
#include <iostream>
class Singleton
{
public:

	static Singleton * Instance()
	{
#ifdef FileSystemPS3
		static Singleton* _Instance = new SingletonPS3();

#elif  FileSystemPS3
		static Singleton* _Instance = new SingletonPS4();

#endif
		return _Instance;
	}

	virtual std::string read(const std::string& filename) = 0;
	virtual void write(const std::string& filename, const std::string& content) = 0;
	
private:
	Singleton() {};
};
