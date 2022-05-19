#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>




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

void	addingfirst(t_node **header, int ab)
{
	t_node	*alhai;

	alhai = (t_node *)malloc(sizeof(t_node));
	alhai -> data = ab;
	alhai -> next = (*header);
	alhai -> pre = NULL;
	if ((*header) != NULL)
		(*header)-> pre = NULL;
	(*header) = alhai;
}

void	add_end(t_node **hello, int bc)
{
	t_node	*alhai;
	t_node	*tempo;

	alhai = (t_node *)malloc(sizeof(t_node));
	alhai -> data = bc;
	alhai -> next = NULL;
	tempo = *hello;
	if (*hello == NULL)
	{
		alhai -> pre = NULL;
		*hello = alhai;
		return ;
	}
	while (tempo -> next != NULL)
		tempo = tempo -> next;
	tempo ->next = alhai;
	alhai ->pre = tempo;
}



// check this code for the numer of nodes in a linked list
// /* Function to get the nth node from the last of a linked list*/
// void printNthFromLast(Node* head, int n)
// {
//     int len = 0, i;
//     Node* temp = head;

//     // count the number of nodes in Linked List
//     while (temp != NULL) {
//         temp = temp->next;
//         len++;
//     }

//     // check if value of n is not
//     // more than length of the linked list
//     if (len < n)
//         return;
//     temp = head;

//     // get the (len-n+1)th node from the beginning
//     for (i = 1; i < len - n + 1; i++)
//         temp = temp->next;
//     printf("%d",temp->data);
//     return;
// }


// find a way to make simpler

// void push(t_node **head_ref, t_node *new_node)
// {
//     // since we are adding at the beginning,
//     // prev is always NULL
//     new_node->pre = NULL;

//     // link the old list off the new node
//     new_node->next = (*head_ref);

//     // change prev of head node to new node
//     if ((*head_ref) != NULL)
//         (*head_ref)->pre = new_node;

//     // move the head to point to the new node
//     (*head_ref) = new_node;
// }

// void reverseList(t_node **head_ref)
// {
//     // if list is empty or it contains
//     // a single node only
//     if (!(*head_ref) || !((*head_ref)->next))
//         return;

//     t_node *new_head = NULL;
//     t_node  *curr = *head_ref, *next;

//     while (curr != NULL) {

//         // get pointer to next node
//         next = curr->next;

//         // push 'curr' node at the beginning of the
//         // list with starting with 'new_head'
//         push(&new_head, curr);

//         // update 'curr'
//         curr = next;
//     }

//     // update 'head_ref'
//     *head_ref = new_head;
// }

int main(int argc, char **argv)
{
	int			i;
	int			ab;
	t_node		*head1;

	i = 1;
	head1 = NULL;
	while (i < argc)
	{
		ab = ft_atoi(argv[i]);
		if (argc == 1)
			addingfirst(&head1, ab);
		else
			add_end(&head1, ab);
		i++;
	}
	printLinkedList(head1);
	printf("this is after the reverse function\n");
	reverseList(&head1);
	printLinkedList(head1);
	return (0);
}
