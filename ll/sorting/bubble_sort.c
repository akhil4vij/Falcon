#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int NOE;

void display(int NOE, int *arr)
{
	int lp;

	printf("Array elements are:\t");
	for (lp = 0; lp < NOE; lp++)
		printf("%d\t", arr[lp]);

	printf("\n");
	return;
}


void bubble_sort(int *arr, int noe)
{
	int olp, ilp;
	int tmp;
	for (olp = 0; olp < noe-1; olp++)
		for (ilp = 0; ilp < noe-1-olp; ilp++)
			if (arr[ilp] > arr[ilp+1]) {
				tmp = arr[ilp];
				arr[ilp] = arr[ilp+1];
				arr[ilp+1] = tmp;
			}
}

int main()
{
	int data, lp;

	printf("M -> %d\n", getpid());

	printf("Enter No. of elements:");
	scanf("%d", &NOE);

	int arr[NOE];
	
	for (lp = 0; lp < NOE; lp++)
	{
		printf("arr[%d]:", lp);
		scanf("%d", &data);
		arr[lp] = data;
	}

	display(NOE, arr);

	bubble_sort(arr, NOE);

	display(NOE, arr);
	
	return EXIT_SUCCESS;
}

