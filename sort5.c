#include "push_swap.h"



int main(int argc, char **argv)
{
	int			i;
	int			ac;
	int			bc;
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
	printf("the list before the pop function\n");
	printLinkedList(ab);
	push_a(&ab,&head2);
	printf("the list after the pop function\n");
	// pop_stack(ab);
	printLinkedList(head2);
	return 0;
}
