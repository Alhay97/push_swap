#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct Node
{
	int	data;  //value
	struct Node	*next; //adress of the next node
};


void	check_sum(unsigned long sum, int sign, const char *str)
{
	if (sum > 2147483647 && sign == 1)
	{
		write(2, "Error1 \n", 6);
		exit (1);
	}
	else if (sum > 2147483648 && sign == -1)
	{
		write(2, "Error2 \n", 6);
		exit (1);
	}
	else if (*str)
	{
		write (2, "ERROR3 \n", 6);
		exit (1);
	}
}

int	ft_atoi(const char *str)
{
	unsigned long	sum;
	int				sign;

	sum = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	check_sum (sum, sign, str);
	return (sum * sign);
}

void	printLinkedList(struct Node *p)
{
	while (p != NULL)
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
	int ab;
	i = 1;
	struct Node* head = NULL;
	while (i < argc)
	{
		ab = ft_atoi(argv[i]);
		if (argc == 1)
			insertAtBeginning(&head, ab);
		else
			insertAtEnd(&head, ab);
		//printf("%d\n", ab);
		i++; 
	}
	printf("Linked list:\n");
	printLinkedList(head);
	return 0;
}