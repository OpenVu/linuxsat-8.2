#ifndef __egami_h
#define __egami_h


class eEGAMI
{
	static eEGAMI *instance;

public:
	eEGAMI();
	static eEGAMI *getInstance();
	//void checkkernel();					//1=True 0=False
	int checkkernel;
};

#endif
