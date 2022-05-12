/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <aalhamel>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:25:58 by aalhamel          #+#    #+#             */
/*   Updated: 2022/05/12 15:32:43 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int countNode(t_node *head)
{
    int count = 0;

    while (head->next != NULL) {

        // Starting from the next node
        t_node  *ptr = head->next;
        while (ptr != NULL) {

            // If some duplicate node is found
            if (head->data == ptr->data) {
                count++;
                break;
            }
            ptr = ptr->next;
        }

        head = head->next;
    }

    // Return the count of duplicate nodes
    return count;
}

/* Function to print linked list */
void printlist(t_node * head)
{
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL");
}


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
	printf("the number of duplicate: %d",countNode(head));
	//ft_swap(&(head)->data ,&(head)->next->data);
	// printf("Linked list:\n");
	// printLinkedList(head);
	return (0);
}
