#include "ll.h"

void display(struct Node *start)
{
	if (!start) {
		printf("List is empty\n");
		return;
	}

	printf("Data in linked list is: \n");
	while(start != NULL) {
		printf("%d\t", start->data);
		start = start->link;
	}
	printf("\n");
}

struct Node *add_at_end(struct Node *Head, int data)
{
	struct Node *tmp, *p, *p1;
	tmp = (struct Node *)malloc(sizeof(struct Node));
	if (NULL == tmp) {
		perror("malloc\n");
		exit(1);
	}

	tmp->data = data;
	tmp->link = NULL;
	p = p1 = Head;

	if (p == NULL) {
		Head = tmp;
		return Head;
	}

	while (p->link != NULL)
		p = p->link;

	p->link = tmp;
	
	return Head;
}

int main()
{
	struct Node *Head = NULL;
	int data;

	printf("Enter 1st data to be inserted: ");
	scanf("%d", &data);
	Head = add_at_end(Head, data);

	printf("Enter 2nd data to be inserted: ");
	scanf("%d", &data);
	Head = add_at_end(Head, data);
	
	printf("Enter 3rd data to be inserted: ");
	scanf("%d", &data);
	Head = add_at_end(Head, data);
	
	display(Head);
	
	return 0;
}
