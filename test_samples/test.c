#include <stdio.h>
#include <string.h>
#include "test.h"

#define DIO 1

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
	printf("Status:, status: %d, name: %s\n", status, name);
		return 0;
}
