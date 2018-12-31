#include <stdio.h>

int main()
{
	typedef struct {
		char name[20];
		char company[20];
	       	int CC;
	}car_t;

	car_t aut_ind;

	aut_ind.name = {'A', 'v', 'e', 'n', 't', 'a', 'd', 'o', 'r'};
	aut_ind.company = {'L', 'a', 'm', 'b', 'o', 'r', 'g', 'i', 'n', 'i'};
	aut_ind.CC = 6500;

	printf("car is: %s from company: %s having power: %dCC\n", aut_ind.name, aut_ind.company, aut_ind.CC);
       return 0;	
}
