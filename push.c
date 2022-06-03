void ft_push(t_node **a, t_node **b)
{
	t_node *temp = *a;
	(*a) = (*a)->next;
	(*b)->pre = temp;
	temp = (*b);
	(*b) = temp;
}

