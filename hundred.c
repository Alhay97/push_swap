#include "push_swap.h"

void ft_bubble_sort(int *array, int size)
{
	int	pos;
	int	i;
	int	temp;

	pos = 0;
	while (pos < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			i++;
		}
		pos++;
	}
}

int	loc(t_node *a_list, int max, int size)
{
	int	loc;
	int	*tab;
	int	i;

	i = 0;
	loc = size;
	tab = malloc(sizeof(int) * (size + 1));
	while (a_list)
	{
		tab[i] = (a_list)->indexs;
		a_list = (a_list)->next;
		i++;
	}
	while (tab[size] != max)
		size--;
	loc = loc - size;
	size = 0;
	while (tab[size] != max)
		size++;
	free(tab);
	if (loc < size)
		return (1);
	return (0);
}

void b_A(t_node **a, t_node **b)
{
	while (*b)
	{
		if (!*b)
			break ;
		if ((*b)->indexs != max_num(*b) && !loc(*b, max_num(*b), counter(b)))
			rotate(b,'b');
		else if ((*b)->indexs != max_num(*b) && loc(*b, max_num(*b), counter(b)))
			rev_rotate(b,'b');
		else if ((*b)->indexs == max_num(*b))
			push_a(a, b);
	}}

void sort_hundred(t_node **ab, t_node **bc)
{
	int ind = 0;
	while (*ab)
	{
		if (ind > 1 && (*ab)->indexs <= ind)
		{
			push_b(ab,bc);
			rotate(bc,'b');
			ind++;
		}
		else if((*ab)->indexs <= (ind + 15))
		{
			push_b(ab, bc);
			ind++;
		}
		else if ((*ab)->indexs >= ind)
			rotate(ab,'a');
		}
	b_A(ab, bc);
}


int	main(int argc, char **argv)
{
	int			i;
	int			ab;
	t_node		*head1;
	t_node		*head2;

	i = 1;
	head1 = NULL;
	head2 = NULL;
	while (i < argc)
	{
		ab = ft_atoi(argv[i]);
		dublicate_check(head1, ab);
		if (argc == 1)
			addingfirst(&head1, ab);
		else
			add_end(&head1, ab);
		i++;
	}
	int k;
	t_node *temp;
	temp = head1;
	int *array = (int*)malloc(counter(&head1) * sizeof(int));
	k = 0;
	while (temp != NULL)
	{
		array[k] = temp->data;
		k++;
		temp = temp->next;
	}
	ft_bubble_sort(array,counter(&head1));
	k = 0;
	t_node *temp2 = head1;
	t_node *temp3 = head1;
	while (temp2 != NULL)
	{
		if (temp2->data == array[k])
		{
			temp2->indexs = k;
			temp2 = temp3;
			k++;
		}
		if (temp2->data != array[k])
			temp2 = temp2->next;

	}
	sort_hundred(&head1, &head2);

	printLinkedList(head1);
	return (0);
}
