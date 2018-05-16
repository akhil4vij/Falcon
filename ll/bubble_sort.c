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

	display(NOE, arr[NOE]);

//	bubble_sort();

//	display(NOE);
	
	return EXIT_SUCCESS;
}

