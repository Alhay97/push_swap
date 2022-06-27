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
	bc = counter(&ab);
	// printf("%d", bc);
	push_b(&ab,&head2);
	printf("stack A after swapping: \n");
	printLinkedList(ab);
	printf("stack B after swapping: \n");
	printLinkedList(head2);
	return (0);
}
