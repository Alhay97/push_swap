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
			return ap->indexs;
	}
}

int max_num_2(t_node *a)
{
	t_node *temp;
	int x;
	int i[2];

	i[0] = 0;
	i[1] = 0;
	temp = a;
	x = max_num(temp);
	while (temp != NULL)
	{
		if (x == temp->data)
			i[1] = i[0];
		i[0]++;
		temp = temp->next;
	}
	if (i[1] >= i[0]/2)
		return (1);
	else if (i[1] < i[0]/2)
		return (0);
	return (0);
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
