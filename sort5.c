#include "push_swap.h"


int main(int argc, char **argv)
{
	int			i;
	int			ac;
	int 		bc;
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
	// push_b()
	bc  = counter(&ab);
	if (bc > 3 && bc <= 5)
		push_b(&ab,&head2);
	if (bc <= 3)
		sort_three(&ab);
	printLinkedList(ab);
	return (0);
}
