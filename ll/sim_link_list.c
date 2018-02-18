#include "ll.h"

void display(struct Node *head)
{
	struct Node *p;
	if (!head) {
		printf("List is empty\n");
		return;
	}
	p = head;
	printf("data elements in linked list are: ");
	while (p != NULL) {
		printf("%d\t", p->data);
		p = p->link;
	}
	printf("\n");
}

struct Node *add_elements_at_beg(struct Node *head, int data)
{
	struct Node *tmp;
	tmp = (struct Node *) malloc(sizeof(struct Node));
	tmp->data = data;
	tmp->link = head;
	head = tmp;
	return head;
}

struct Node *add_elements_at_end(struct Node *head, int data)
{
	struct Node *tmp, *p;
	if (!head) {
		printf("list is empty\n");
		return head;
	}

	tmp = (struct Node *) malloc(sizeof(struct Node));
	tmp->data = data;
	p = head;
	while (p->link != NULL)
		p = p->link;
	p->link = tmp;
	tmp->link = NULL;
	return head;
}

struct Node *initialize_list(struct Node *head)
{
	int cnt;
	int arr_cnt;
	int data;

	printf("Enter number of nodes:");
	scanf("%d", &cnt);

	printf("Enter an element to be inserted: ");
	scanf("%d", &data);
	head = add_elements_at_beg(head, data); 
	for (arr_cnt = 1; arr_cnt < cnt; ) {
		printf("Enter an element to be inserted: ");
		scanf("%d", &data);
		head = add_elements_at_end(head, data); 
		arr_cnt++;
	}
	return head;
}

int main()
{
	struct Node *head = NULL;
	
	head = initialize_list(head);
	
	display(head);

	return 0;	
}
