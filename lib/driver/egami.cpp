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

void eEGAMI::checkkernel(int m)
{
  int kernel = 1234;
  int check = 1234;
  m = 0;	
  
  if(check == kernel)
  {
    m = 1;
  }    
  else
  {
    m = 0;
  }
  return;	
}	
	
eEGAMI *eEGAMI::getInstance()
{
	return instance;
}	
  
