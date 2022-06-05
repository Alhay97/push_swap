#include "push_swap.h"

void ft_rotate(t_node **ab)
{
	t_node *tempor = *ab;
	t_node *tempp = *ab;

	while (tempor -> next != NULL)
		tempor = tempor->next;
	tempor->next =  *ab;
	*ab = tempp->next;
	tempp->next = NULL;
}


void rr(t_node *head, t_node *head2)
{
	ft_rotate(&head);
	ft_rotate(&head2);
}