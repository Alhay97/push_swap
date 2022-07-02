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
	// printf("1");
	int k;
	t_node *temp;
	temp = head1;
	// printf("2");
	int *array = (int*)malloc(counter(&head1) * sizeof(int));
	// printf("3");
	k = 0;
	while (temp != NULL)
	{
		array[k] = temp->data;
		k++;
		temp = temp->next;
	}
	// printf("4");
	ft_bubble_sort(array,counter(&head1));
	// printf("5");
	k = 0;
	t_node *temp2 = head1;
	t_node *temp3 = head1;
	printf("here is the max index: %d\n", max_num_2(temp2));
	while (temp2 != NULL)
	{
		if (temp2->data == array[k])
		{
			temp2->indexs = k;
			printf("here is the index: %d here is the data %d and here is the array %d k %d\n", temp2->indexs, temp2->data,array[k],k);
			temp2 = temp3;
			k++;
		}
		if (temp2->data != array[k])
			temp2 = temp2->next;

	}


	// k = -1;
	// while (++k < counter(&head1))
	// 	printf("%d\n", array[k]);

	// int j;
	// j = 0;
	// while (j < 9)
	// {
	// 	push_b(&head1,&head2);
	// 	j++;
	// }
	// printLinkedList(head2);
	return (0);
}
