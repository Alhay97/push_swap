#include "push_swap.h"

void	sort_five_four(t_node **ab, t_node **bc)
{
	while (counter(ab) > 3)
	{
		if (min_num(*ab) == (*ab)->data)
			push_b(ab,bc);
		else
			ft_rotate(ab);
	}
	sort_three(ab);
	while (counter(bc) > 0)
		push_a(ab,bc);

}
