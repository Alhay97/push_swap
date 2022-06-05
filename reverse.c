#include "push_swap.h"

void rev_rot(t_node **stack)
{
	t_node	*new_top;
	t_node	*old_top;

	old_top = *stack;
	while (old_top->next != NULL)
	{
		new_top = old_top;
		old_top = old_top->next;
	}
	new_top->next = NULL;
	old_top->next = *stack;
	*stack = old_top;
}

void rrr(t_node *head, t_node *head2)
{
	rev_rot(&head);
	rev_rot(&head2);
}