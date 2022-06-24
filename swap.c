#include "push_swap.h"

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void sa_sb(t_node **headd)
{
	t_node *head;

	head = *headd;
	ft_swap(&head->data, &head->next->data);
}

void ss(t_node *head, t_node *head2)
{
	ft_swap(&head->data, &head->next->data);
	ft_swap(&head2->data, &head2->next->data);
}
