#include <stdlib.h>
#include <stdio.h>


struct node
{
	int value;  //value
	struct node *next; //adress of the next node
};

void printLinkedList(struct node *p)
{
	while(p != NULL)
	{
		printf("%d\t", p->value);
		p = p->next;
	}
}


void insertAtEnd(struct node** head, int newData)
{
	struct node *alhai = (struct node*) malloc(sizeof(struct node));
	alhai -> value = newData;
	alhai -> next = NULL;

	if (*head == NULL)
	{
		*head = alhai;
		return;
	}

	struct node *tempo = *head;
	while(tempo -> next != NULL)
		tempo = tempo -> next;
	tempo -> next = alhai;

}

int main()
{


	// this section to initialize the memory
	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;


	//this section is allocate the memory 
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	//this section is assign data values
	one -> value = 1;
	two -> value = 2;
	three -> value = 3;

	//this section is to connect nodes
	one -> next = two;
	two -> next = three;
	three -> next = NULL;

	//save the adress of the first node on the head
	head = one;

	printLinkedList(head);

	printf("\n");



	//add an element at the beginning of the node
	struct node  *newNode;
	newNode = malloc(sizeof(struct node));
	newNode -> value = 4;
	newNode -> next = head;
	head = newNode;

	printLinkedList(head);

	printf("\n");


	//adding an elment at the end 

	struct node *alhai;
	alhai = malloc(sizeof(struct node));
	alhai -> value = 5;
	alhai -> next = NULL;

	struct node *temp = head;
	while(temp -> next != NULL)
		temp = temp-> next;
	temp -> next = alhai;

	printLinkedList(head);


	printf("\n");


	//adding an elment at the middle of the 

	struct node *alhay;
	alhay = malloc(sizeof(struct node));
	alhay -> value = 7;

	struct node *tempo = head;

	int i = 2;

	while(i < 4)
	{
		if(tempo -> next != NULL)
			tempo = tempo -> next;
		i++;
	}
	alhay -> next = tempo -> next;
	tempo -> next =alhay;

	printLinkedList(head);



	printf("\n");


	// delete an elment from the beginning 

	head = head -> next; 

	printLinkedList(head);



	printf("\n");


	//delete the last elment of the linked list

	struct node *alhameli = head;
	while (alhameli -> next -> next !=NULL)
	{
		alhameli = alhameli -> next;
	};
	alhameli -> next = NULL;

	printLinkedList(head);



	printf("\n");


	insertAtEnd(&head, 6);
	insertAtEnd(&head, 8);
	insertAtEnd(&head, 9);
	printLinkedList(head);
	printf("\n");

	// DELETE ANY ELMENT FROM THE MIDDLE

	int b = 2;
	struct node *alhamely = head;
	while (b < 4)
	{
		if (alhamely -> next != NULL)
			alhamely = alhamely -> next;
		b++;
	}
	alhamely -> next = alhamely -> next -> next;


	printLinkedList(head);
	printf("\n");




}

//OUTPUT IS 1 2 3

//Output is  4 1 2 3

//output is 