#include "ll.h"

static struct Node *top = NULL;

int pop(struct Node *start) {
	int pop_data;

	struct Node *tmp;
	tmp = start;
	pop_data = tmp->data;
	top = start->link;
	free(tmp);
	return pop_data;
}

struct Node *push_to_stack(struct Node *top, int data) {
	struct Node *tmp;
	tmp = malloc(sizeof(struct Node));
	if (tmp == NULL) {
		perror("malloc\n");
		exit(EXIT_FAILURE);
	}
	tmp->data = data;
	tmp->link = top;
	top = tmp;
	return top;
}

int main()
{
	int non = -1;
	int ele = -1;
	int lc = -1;
	
	printf("Enter number of nodes: ");
	scanf("%d", &non);

	for (lc = 0; lc < non; ) {
		printf("Enter %d element: ", lc);
		scanf("%d", &ele);
		top = push_to_stack(top, ele);
		lc++;
	}

	printf("popped element: %d\n", pop(top));
	printf("popped element: %d\n", pop(top));
	printf("popped element: %d\n", pop(top));

	return 0;
}
