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
	int j = 0;
	bc  = counter(&ab);
	while (j < 2)
	{
		if (min_num(ab) == ab->data)
		{
			printf("top val - %d\n", ab->data);
			push_b(&ab,&head2);
			j++;
		}
		else
			ft_rotate(&ab);
	}
	printf("stack A\n");
	printLinkedList(ab);
	printf("stack B\n");
	printLinkedList(head2);
	printf("here\n");
	sort_three(&ab);

	return (0);
}
