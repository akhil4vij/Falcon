#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define hndl_error(err, msg) do { printf(msg ",err: %d\n", err); exit(EXIT_FAILURE); } while(0)

int main()
{
	int not;
	char *str1, *str2;

	if ((str1 = malloc(sizeof(char *))) ==  NULL)
		hndl_error (errno, "malloc for str1 failed");
		
	if ((str2 = malloc(sizeof(char *))) ==  NULL)
		hndl_error (errno, "malloc for str2 failed");

	printf("Enter no of test cases:");
	scanf("%d", &not);

	printf("Enter String 1:");
	scanf("%s", str1);

	printf("Enter String 2:");
	scanf("%s", str2);

	printf("not: %d, str1: %s, str2: %s\n", not, str1, str2);
	while (not) {
		not--;		
	}

	return 0;
}
