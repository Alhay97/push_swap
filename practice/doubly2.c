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
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
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

void	ft_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
}

void ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
}

void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}

void	dublicate_check(t_node	*list, int ab)
{
	t_node	*temp;

	temp = list;
	while(temp != NULL)
	{
		if (temp->data == ab)
		{
			ft_putendl_fd("Error", 2);
			exit(1);
		}
		temp = temp->next;
	}
}

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_push(t_node **a, t_node **b)
{
	t_node *temp = *a;
	(*a) = (*a)->next;
	(*b)->pre = temp;
	temp = (*b);
	(*b) = temp;
}


void ft_reverse(t_node **a)
{
	t_node *temp = *a;
	add_end(a, (*a)->data);
	temp = (*a)->next;
	a = &temp;
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
		dublicate_check(head1, ab);
		if (argc == 1)
			addingfirst(&head1, ab);
		else
			add_end(&head1, ab);
		i++;
	}
	printLinkedList(head1);
	printf("this is after the reverse function\n");
	ft_reverse(&head1);
	// ft_swap(&head1->data, &head1->next->data);
	printLinkedList(head1);
	return (0);
}



