#include "push_swap.h"

int max_num(t_node *ap)
{
	int x;
	x = 0;
	if (ap == 0)
		return (INT_MIN);
	else
	{
		x = max_num (ap->next);
		if (x > ap->data)
			return x;
		else
			return ap->data;
	}
}

