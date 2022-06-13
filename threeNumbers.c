#include "push_swap.h"

void  condition(t_node **ab)
{
	if(head1->data > head1->next->data && head1->data < head1->next->next->data && head1->next->data < head1->next->next->data)
		sa_sb(head1);
	else if(head1->data > head1->next->data && head1->data > head1->next->next->data && head1->next->data > head1->next->next->data)
	{
		sa_sb(head1);
		rev_rot(&head1);
	}
	else if(head1->data > head1->next->data && head1->data > head1->next->next->data && head1->next->data < head1->next->next->data)
		ft_rotate(&head1);
	else if(head1->data < head1->next->data && head1->data < head1->next->next->data && head1->next->data > head1->next->next->data)
	{
		sa_sb(head1);
		ft_rotate(&head1);
	}
	else if(head1->data < head1->next->data && head1->data > head1->next->next->data && head1->next->data > head1->next->next->data)
		rev_rot(&head1);
}
