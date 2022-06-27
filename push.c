#include "push_swap.h"

void ft_pop(t_node **ab)
{
	int temp;

}

void	push_a(t_node **a, t_node **b)
{
	t_node	*temp;

	if (*b != NULL)
	{
		temp = *b;
		*b = (*b)->next;
		if (*a == NULL)
			temp->next = NULL;
		else
		{
			temp->next = *a;
			(*a)->pre = temp;
		}
		*a = temp;
	}
}

void push_b (t_node **a, t_node **b)
{
	t_node	*temp;

	if (*a != NULL)
	{
		temp = *a;
		*a = (*a)->next;
		if (*b == NULL)
			temp->next = NULL;
		else
		{
			temp->next = *b;
			(*b)->pre = temp;
		}
		*b = temp;
	}
	
}


