#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 25

int isstring(char *data, int cntr)
{
	int i = 0;
	char *arr = data;
//	printf("data: %s\n", data);
	for (;arr[i] != '\0'; i++) 
		if ((arr[i] > 47) && (arr[i] < 58)) return 1;
			
	return 0;
}

int isfloat(char *data, int cntr)
{
	return 0;
}

int main()
{
	int cntr;
	char *data;
	size_t size = sizeof(SIZE);
	data = malloc(SIZE * sizeof(char));
#if 0
	for (cntr = 0; cntr < SIZE; cntr++) {
		scanf("%d", data[cntr]);
		if (!data[cntr])
			break;
	}
#endif
	getline(&data, &size, stdin);
//	printf("%s\n", data);
#if 0
	if (isxdigit(data))
		printf("This input is of type Hexadecimal\n");
	else if (isdigit(data))
		printf("This input is of type decimal\n");
	else if (isfloat(data, cntr))
		printf("This input is of type float\n");
	else
#endif
	if(!isstring(data, cntr))
		printf("This input is of type string\n");
	else
		printf("This is something else\n");

	free(data);
	return 0;
}	
