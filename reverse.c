#include "push_swap.h"
#include <stdio.h>

void rev_rot(t_node **stack)
{

	t_node	*it;
	it = *stack;
	while (it->next)
		it = it->next;
	while (it->pre)
	{
		ft_swap(&(it->data), &(it->pre->data));
		it = it->pre;
	}
}

void rrr(t_node *head, t_node *head2)
{
	rev_rot(&head);
	rev_rot(&head2);
}
