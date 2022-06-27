#include "push_swap.h"

void ft_rotate(t_node **ab)
{
	t_node	*it;

	it = *ab;
	while (it && it->next)
	{
		ft_swap(&it->data, &it->next->data);
		it = it->next;
	}
}


void rr(t_node *head, t_node *head2)
{
	ft_rotate(&head);
	ft_rotate(&head2);
}
