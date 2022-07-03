#include "push_swap.h"


static void	conditionss(t_node **abd)
{

	t_node	*ab;

	ab = *abd;
	if(ab->data > ab->next->data && ab->data < ab->next->next->data && ab->next->data < ab->next->next->data)
		sa_sb(&ab);
	else if(ab->data > ab->next->data && ab->data > ab->next->next->data && ab->next->data > ab->next->next->data)
	{
		sa_sb(&ab);
		rev_rotate(&ab,'a');
	}
	else if(ab->data > ab->next->data && ab->data > ab->next->next->data && ab->next->data < ab->next->next->data)
		rotate(&ab,'a');
	else if(ab->data < ab->next->data && ab->data < ab->next->next->data && ab->next->data > ab->next->next->data)
	{
		sa_sb(&ab);
		rotate(&ab,'a');
	}
	else if(ab->data < ab->next->data && ab->data > ab->next->next->data && ab->next->data > ab->next->next->data)

		rev_rotate(&ab,'a');


}


void	sort_three(t_node **a)
{
	t_node	*top;
	t_node	*mid;

	top = *a;
	conditionss(a);
}
