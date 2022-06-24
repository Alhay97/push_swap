#include "push_swap.h"




int main(int argc, char **argv)
{
	int			i;
	int			ac;
	t_node		*ab;
	t_node		*head2;

	i = 1;
	ab = NULL;
	head2 = NULL;
	while (i < argc)
	{
		ac = ft_atoi(argv[i]);
		dublicate_check(ab, ac);
		if (argc == 1)
			addingfirst(&ab, ac);
		else
			add_end(&ab, ac);
		i++;
	}
	// addingfirst(&head2,head1->data);
	// head1 = removeFirstNode(head1);
	// printLinkedList(head1);
	printf("the list after swapping: \n");
	sort_three(&ab);
	printLinkedList(ab);


	//printf("%d", head1->data);
	return 0;
}
