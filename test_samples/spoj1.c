#include <stdio.h>

int main(void) {
	int arr[5] = {0};
	int data = 0, i = 0, j = 0;
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &data);
		if (42 == data)
			return 0;
		printf("%d\n", data);
	}

	return 0;
}
