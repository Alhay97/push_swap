#include "push_swap.h"


t_node *top_of_stack(t_node **ab)
{
	t_node *point;

	point = *ab;
	while(point)
	{
		if(point->next == NULL)
			return(point);
		point = point->next;
	}
	return (NULL);
}


void ft_push(t_node **a, t_node **b)
{
	t_node *temp;

	if (!*a)
		return ;
	temp  = top_of_stack(a);
	*a = removeTop(*a);
	temp ->next = *b;
	*b = temp;
}


int main(int argc, char **argv)
{
	int			i;
	int			ab;
	t_node		*head1;
	t_node		*head2;

	i = 1;
	head1 = NULL;
	head2 = NULL;
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

	printf("numbers list 1 before the function:\n");
	printLinkedList(head1);
	printf("numbers list 2 before the function:\n");
	add_end(&head2, 12);
	add_end(&head2, 13);
	add_end(&head2, 14);
	printLinkedList(head2);


	ft_push(&head1, &head2);
	printf("numbers list 1 after the function:\n");
	printLinkedList(head1);
	printf("numbers list 2 after the function:\n");
	printLinkedList(head2);

	return (0);
}
