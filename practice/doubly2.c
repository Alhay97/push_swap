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
		(*header) -> pre = NULL;
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
	return (0);
}






// int main()
// {
// 	//this is were create the nodes
// 	struct node *head;
// 	struct node *one = NULL;
// 	struct node *two = NULL;
// 	struct node *three = NULL;

// // to allocate the memory
// 	one = (t_node *)malloc(sizeof(t_node));
// 	two = (t_node *)malloc(sizeof(t_node));
// 	three = (t_node *)malloc(sizeof(t_node));

// // to assign data values
// 	one -> data = 4;
// 	two -> data = 5;
// 	three -> data = 6;

// // connectng the nodes
// 	one -> next = two;
// 	one -> pre = NULL;

// 	two -> next = three;
// 	two -> pre = one;

// 	three -> next = NULL;
// 	three -> pre = two;

// // save the address of the first node in head

// 	head = one;

// 	addingfirs(&head, 45);
// 	addingfirs(&head, 56);

//   addingEnd(&head, 100);
//    addingEnd(&head, 121);


// printLinkedList(head);

// return 0;

// }
