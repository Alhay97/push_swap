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

int min_num(t_node *ab)
{
	int min;

	min = INT_MAX;
	while(ab != NULL)
	{
		if (min > ab->data)
			min = ab->data;
		ab = ab->next;
	}
	return min;
}
