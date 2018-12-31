#include <stdio.h>
#include <string.h>
#include "test.h"

#define FB 1
int main(int argc, char *argv[])
{
#if 0
#ifdef DIO
#define STATUS 10
#else
#define STATUS 20
#endif
#endif
	init();
	printf("Status: %d, status: %d, name: %s\n", STATUS, status, name);
		return 0;
}
