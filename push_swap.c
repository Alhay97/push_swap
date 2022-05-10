/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <aalhamel>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:25:58 by aalhamel          #+#    #+#             */
/*   Updated: 2022/05/10 21:28:04 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int			i;
	int			ab;
	t_node		*head;

	i = 1;
	head = NULL;
	while (i < argc)
	{
		ab = ft_atoi(argv[i]);
		if (argc == 1)
			insertAtBeginning(&head, ab);
		else
			insertAtEnd(&head, ab);
		i++;
	}
	ft_swap(&(head)->data ,&(head)->next->data);
	printf("Linked list:\n");
	printLinkedList(head);
	return (0);
}
