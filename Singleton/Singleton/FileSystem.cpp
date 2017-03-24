#include "Filesystem.h"
#include "FilesystemPS3.h" 
#include "FilesystemPS4.h"

Filesystem* Filesystem::Instance()
{
#ifdef PLAYSTATION3
	static Filesystem* _instance = (Filesystem*)new Filesystem_PS3();

#elif PLAYSTATION4
	static Filesystem* _instance = (Filesystem*)new Filesystem_PS4();
#endif

	
}
