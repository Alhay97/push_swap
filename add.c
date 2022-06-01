/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <aalhamel>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:21:02 by aalhamel          #+#    #+#             */
/*   Updated: 2022/06/01 17:27:08 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//this function print every elment in a linked list
void	printLinkedList(t_node *p)
{
	while (p != NULL)
	{
		printf("%d \n", p->data);
		p = p->next;
	}
}

// this function is used to add a elment in the beginning of a linked list
void	insertAtBeginning(t_node **header, t_node **a)
{
	t_node	*alhai;

	alhai = (t_node *) malloc(sizeof(t_node));
	alhai -> data = (*a)->data;
	alhai -> next = *header;
	*header = alhai;

}

//this function is to add an elment at the end
// of the linked list

void	insertAtEnd(t_node **head, int newData)
{
	t_node	*alhai;
	t_node	*tempo;

	alhai = (t_node *) malloc(sizeof(t_node));
	alhai -> data = newData;
	alhai -> next = NULL;
	if (*head == NULL)
	{
		*head = alhai;
		return ;
	}
	tempo = *head;
	while (tempo -> next != NULL)
		tempo = tempo -> next;
	tempo -> next = alhai;
}

