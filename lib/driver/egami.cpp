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
  ASSERT(!instance);	
  instance = this;
}

eEGAMI *eEGAMI::getInstance()
{
	return instance;
}	

void eEGAMI::checkkernel(int mycheck)
{
	//int mycheck;
	int kernel = 1234;
	int test = 1234;

	//fd = open("/proc/stb/info/vumodel", O_WRONLY);
	if (kernel == test)
	{
		mycheck = 1;
	}
	else
	{
		mycheck = 0;
	}		
}
