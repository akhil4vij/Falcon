#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "ll.h"

#define hndl_err(str, err) do { \
				printf("%s", str, "%s\n", __func__, strerror(errno));	\
				exit(EXIT_FAILURE);	\
			} while(0)	

struct Node *add_at_beg(struct Node *ll, int data)
{
	struct Node *tmp;
	tmp = malloc(sizeof(int));
	if (tmp == NULL)
		hndl_err("malloc", errno);

	memset(tmp, '\0', sizeof(int));

	tmp->data = data;
	tmp->link = ll;
	ll = tmp;

	return ll;
}

struct Node *initialise_list(struct Node *ll, char *str)
{
	int cnt, lp_cnt, data;

	printf("Enter no. of elements for %s:\n", str);
	scanf("%d", &cnt);

	printf("Enter elements to be stored in %s\n", str);
	
	printf("Enter first element to be inserted at beginning: \n");
	scanf("%d", &data);
	ll = add_at_beg(ll, data);

	lp_cnt = 1;
	while(lp_cnt < cnt)
	{
		printf("Enter %d element to be inserted: ", lp_cnt);
		scanf("%d", &data);
		ll = add_at_end(ll, data);
		lp_cnt++;
	}
	return ll;
}

int main()
{
	struct Node *LLA = NULL,  *LLB = NULL, *LLC = NULL;

	printf("Init list A\n");
	LLA = initialise_list(LLA, "LLA");
	printf("Init list B\n");
	LLB = initialise_list(LLB, "LLB");
	printf("Init list C\n");
	LLC = initialise_list(LLC, "LLC");

	return 0;
}
