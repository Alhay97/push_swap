#include <stdlib.h>
#include <stdio.h>


struct Node
{
	int data;  //value
	struct Node *next; //adress of the next node
};

void printLinkedList(struct Node *p)
{
	while(p != NULL)
	{
		printf("%d \n", p->data);
		p = p->next;
	}
}




// this function is used to add a elment in the beginning of a linked list
void insertAtBeginning(struct Node** header, int newValue)
{
	struct Node* alhai = (struct Node*) malloc(sizeof(struct Node));
	alhai -> data = newValue;
	alhai -> next = *header;
	*header = alhai;
}

void insertAtEnd(struct Node** head, int newData)
{
	struct Node *alhai = (struct Node*) malloc(sizeof(struct Node));
	alhai -> data = newData;
	alhai -> next = NULL;

	if (*head == NULL)
	{
		*head = alhai;
		return;
	}

	struct Node *tempo = *head;
	while(tempo -> next != NULL)
		tempo = tempo -> next;
	tempo -> next = alhai;

}

// void deleteFirst(struct Node** header)
// {
// 	*header = header -> next;	
// }


// int main() {
	// struct Node* head = NULL;
	// insertAtEnd(&head, 1);
	// insertAtBeginning(&head, 2);
	// insertAtEnd(&head, 6);
	// insertAtEnd(&head, 8);
	// insertAtEnd(&head, 9);
	// insertAtBeginning(&head, 3);
	// insertAtEnd(&head, 4);
 //  // insertAfter(head->next, 5);

 //  printf("Linked list:\n");
 //  printLinkedList(head);
// }


// 

int main(int argc, char **argv)
{
	int i;
	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++; 
	}
	return 0;
}