void ft_rotate(t_node **a)
{
	t_node *temp = *a;
	add_end(a, (*a)->data);
	temp = (*a)->next;
	*a = temp;
}


