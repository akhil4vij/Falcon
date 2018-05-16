#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void func(int num, ...)
{
	int var, cntr;
	va_list valist;
	
	va_start(valist, num);
	
	for (cntr = 0; cntr < num; cntr++) {
		var = va_arg(valist, int);
		printf("arg%d: %d\n", cntr, var);
	}
}

int main()
{
	func(5,10,20,30,40,50);
	return 0;
}
	
