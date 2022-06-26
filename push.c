#include "push_swap.h"

void	push_a(t_node **a, t_node **b)
{
	t_node	*temp;
	int		ab;

	if (!*a)
		return ;
	ab = counter(b);
	if (ab == 0)
	{
		addingfirst(b, (*a)->data);
		removeFirstNode(a);
	}
	else
	{
		temp = *a;
		*a = (*a)->next;
		temp->next = *b;
		(*b)->pre = temp;
		*b = temp;
	}
}

void push_b (t_node **a, t_node **b)
{
	t_node *temp;

	if (!*b)
		return ;
    temp = *b;
    *b = (*b)->next;
    temp->next = *a;
	(*a)->pre = temp;
	*a = temp;
}

