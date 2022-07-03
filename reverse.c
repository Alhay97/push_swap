#include "push_swap.h"
#include <stdio.h>

void	rev_rotate(t_node **a_list, char ab)
{
	t_node	*ptr;
	t_node	*tmp;

	ptr = *a_list;
	tmp = *a_list;
	while (ptr->next->next)
		ptr = ptr->next;
	*a_list = ptr->next;
	ptr->next = NULL;
	(*a_list)->next = tmp;
	// if(ab == 'a')
	// 	write(1, "ra\n", 3);
	// else if(ab == 'b')
	// 	write(1, "rb\n", 3);
	// else
	// 	write(1, "wrong\n", 7);
}

void	rrr(t_node **a_list, t_node **b_list)
{
	t_node	*ptr;
	t_node	*tmp;

	ptr = *a_list;
	tmp = *a_list;
	while (ptr->next->next)
		ptr = ptr->next;
	*a_list = ptr->next;
	ptr->next = NULL;
	(*a_list)->next = tmp;
	ptr = *b_list;
	tmp = *b_list;
	while (ptr->next->next)
		ptr = ptr->next;
	*b_list = ptr->next;
	ptr->next = NULL;
	(*b_list)->next = tmp;
	write(1, "rrr\n", 4);
}
