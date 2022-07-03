#include "push_swap.h"

void	rotate(t_node **a_list, char ab)
{
	t_node	*ptr;
	t_node	*copy;

	ptr = *a_list;
	copy = (*a_list)->next;
	while ((*a_list)->next)
		*a_list = (*a_list)->next;
	(*a_list)->next = ptr;
	ptr->next = NULL;
	*a_list = copy;
	// if(ab == 'a')
	// 	write(1, "ra\n", 3);
	// else if(ab =='b')
	// 	write(1, "rb\n", 3);
	// else
	// 	write(1, "wrong\n", 7);
}

// void	rev_rotate(t_node **a_list, t_node **b_list)
// {
// 	t_node	*ptr;
// 	t_node	*copy;

// 	ptr = *a_list;
// 	copy = (*a_list)->next;
// 	while ((*a_list)->next)
// 		*a_list = (*a_list)->next;
// 	(*a_list)->next = ptr;
// 	ptr->next = NULL;
// 	*a_list = copy;
// 	ptr = *b_list;
// 	copy = (*b_list)->next;
// 	while ((*b_list)->next)
// 		*b_list = (*b_list)->next;
// 	(*b_list)->next = ptr;
// 	ptr->next = NULL;
// 	*b_list = copy;
// 	write(1, "rr\n", 3);
// }
