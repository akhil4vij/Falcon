#include <stdio.h>

struct dummy_str {
	int var;
	float f;
	void *func(int , char);
} str_dum;

void *func_dummy(int n, char c)
{
	printf("In func\n");
}

int main()
{
	int loc;
	str_dum.func = &func_dummy;
	return 0;
}

