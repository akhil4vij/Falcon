#include "test.h"

void init(void)
{
#ifdef DIO
#define STATUS 10
	status = 100;
	name = "DIO";	
#elif FB
#define STATUS 20
	status = 200;
	name = "FB";
#else
	printf("Define Proper Module\n");
#endif
}
