#include "push_swap.h"


int	main(int argc, char **argv)
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
	int j;
	j = 0;
	t_node *temp = head1;

	while (counter(&head1) > 80)
	{
		if (min_num(head1) == head1->data)
			push_b(&head1,&head2);
		else
			ft_rotate(&head1);
	}
	while (counter(&head1) > 60)
	{
		if (min_num(head1) == head1->data)
			push_b(&head1,&head2);
		else
			ft_rotate(&head1);
	}
	while (counter(&head1) > 40)
	{
		if (min_num(head1) == head1->data)
			push_b(&head1,&head2);
		else
			ft_rotate(&head1);
	}
	while (counter(&head1) > 20)
	{
		if (min_num(head1) == head1->data)
			push_b(&head1,&head2);
		else
			ft_rotate(&head1);
	}
	while (counter(&head1) > 1)
	{
		if (min_num(head1) == head1->data)
			push_b(&head1,&head2);
		else
			ft_rotate(&head1);
	}
	printLinkedList(head2);
	return (0);
}
