#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_ARR 10

int arr[MAX_ARR];
int noe;

void selection_sort()
{
	int lp, lp1, tmp;
	int min;

	for (lp = 0; lp < noe-1; lp++) {
		min = lp;
		for (lp1 = min+1; lp1 < noe; lp1++) {
			if (arr[lp] > arr[lp1]) {
				tmp = arr[lp];
				arr[lp] = arr[lp1];
				arr[lp1] = tmp;
			}
		}
	}
}

int main()
{
	int lp = -1;
	int data = -1;
	
	printf("Enter number of array elements: ");
	scanf("%d", &noe);

	for (lp = 0; lp < noe; lp++)
	{
		printf("Enter element to be inserted: ");
		scanf("%d", &data);
		arr[lp] = data;
	}

	printf("Before sort:\n");
	for (lp = 0; lp < noe; lp++)
		printf("arr[%d]: %d\n", lp, arr[lp]);

	selection_sort();	

	printf("After sort:\n");
	for (lp = 0; lp < noe; lp++)
		printf("arr[%d]: %d\n", lp, arr[lp]);

	return 0;
}
