#include <stdio.h>
#include <stdlib.h>

char *ptr;

int func1()
{
	ptr = malloc(20);
	printf("enter the string:");
	scanf("%s", ptr);
	//ptr = "Hello this is testing";
	printf("1: str is : %s\n", ptr);
	return 0;
}

void func2() {
	printf("str is %s\n", ptr);	
}

int main()
{
	func1();
	func2();
	return 0;
}
