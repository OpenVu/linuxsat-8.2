#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#include <lib/base/cfile.h>
#include <lib/base/init.h>
#include <lib/base/init_num.h>
#include <lib/base/eerror.h>
#include <lib/base/ebase.h>
#include <lib/driver/egami.h>

eEGAMI *eEGAMI::instance = 0;

eEGAMI::eEGAMI()
{
  instance = this;
}

int eEGAMI::checkkernel()
{
	int mycheck = 0;

	int fd = open("/proc/stb/info/vumodel", O_WRONLY);
	if (strcmp(fd == "vusolo2"))
	{
		mycheck = 1;
	}
	else
	{
		mycheck = 0;
	}		
	return mycheck;
}
	
eEGAMI *eEGAMI::getInstance()
{
	return instance;
}	
  
