#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// this is the structure for the double linked list

typedef struct node
{
	int data;
	struct node *next;
	struct node *pre;
}t_node;

void	printLinkedList(t_node *p)
{
	while (p != NULL)
	{
		printf("%d \n", p->data);
		p = p->next;
	}
}

void	addingfirs(t_node **header, int ab)
{
	t_node *alhai;

	alhai = (t_node *)malloc(sizeof(t_node));

	alhai -> data = ab;

	alhai -> next = (*header);
	alhai -> pre = NULL;
	if ((*header) != NULL)
		(*header) -> pre = NULL;
	(*header) = alhai;
}


int main()
{
	//this is were create the nodes
	t_node *head;
	head = NULL;


	addingfirs(&head, 45);
	addingfirs(&head, 56);


	printLinkedList(head);

	return 0;

}
