#include "push_swap.h"


static void	conditionss(t_node *ab)
{
	
	
	if(ab->data > ab->next->data && ab->data < ab->next->next->data && ab->next->data < ab->next->next->data)
		sa_sb(ab);
	else if(ab->data > ab->next->data && ab->data > ab->next->next->data && ab->next->data > ab->next->next->data)
	{
		sa_sb(ab);
		rev_rot(&ab);
	}
	else if(ab->data > ab->next->data && ab->data > ab->next->next->data && ab->next->data < ab->next->next->data)
		ft_rotate(&ab);
	else if(ab->data < ab->next->data && ab->data < ab->next->next->data && ab->next->data > ab->next->next->data)
	{
		sa_sb(ab);
		ft_rotate(&ab);
	}
	else if(ab->data < ab->next->data && ab->data > ab->next->next->data && ab->next->data > ab->next->next->data)
		rev_rot(&ab);
}


void	sort_three(t_node **a)
{		
	t_node	*top;
	t_node	*mid;

	top = *a;
	while (top->next != NULL)
	{
		mid = top;
		top = top->next;
	}
	conditionss(*a);
}