#include "push_swap.h"

int max_num(t_node *ap)
{
	int x;
	x = 0;
	if (ap == 0);
		return (MIN_INT);
	else
	{
		x = max_num (ap->next);
		if (x > ap->data)
			return x;
		else
			return ap->data;
	}
}