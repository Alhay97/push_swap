#include "push_swap.h"

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
	printf("numbers:\n");
	printLinkedList(head1);

	printf("swap:\n");
	sa_sb(head1);
	printLinkedList(head1);

	// ft_push(t_node **a, t_node **b);


	printf("rotate: \n");
	ft_rotate(&head1);
	printLinkedList(head1);

	printf("reverse rotate:\n");
	rev_rot(&head1);
	printLinkedList(head1);


	printf("\n%d",counter(&head1));

	return (0);
}
