#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str_stdin;

	size_t size = sizeof(128);
	str_stdin = malloc(128 * sizeof(char));
	ssize_t ret = getline(&str_stdin, &size, stdin);
	printf("Hello Techgig\n%s", str_stdin);
	return 0;
}
