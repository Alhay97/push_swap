#include <unistd.h>
#include <stdio.h>

// this is the structure for the double linked list

struct node
{
	int data;
	struct node *next;
	struct node *pre;
}
int main()
{
	//this is were create the nodes
	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;

// to allocate the memory
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

// to assign data values
	one -> data = 1;
	two -> data = 2;
	three -> data = 3;

// connectng the nodes
	one -> next = two;
	one -> pre = NULL;

	two -> next = three;
	two -> pre = one;

	three -> next = NULL;
	three -> pre = two;

// save the address of the first node in head

	head = one;
}
