/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedFunction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <aalhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:35:47 by aalhamel          #+#    #+#             */
/*   Updated: 2022/05/10 19:45:58 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_Node
{
	int				data;
	struct s_Node	*next;
}	t_node;

//this function is used to check the element is an alphapbet and 
// also checks if the the elment is greater than int max and int min
void	check_sum(unsigned long sum, int sign, const char *str)
{
	if (sum > 2147483647 && sign == 1)
	{
		write(2, "Error1 \n", 6);
		exit (1);
	}
	else if (sum > 2147483648 && sign == -1)
	{
		write(2, "Error2 \n", 6);
		exit (1);
	}
	else if (*str)
	{
		write (2, "ERROR3 \n", 6);
		exit (1);
	}
}

//atoi is used to convert the strin to an int
int	ft_atoi(const char *str)
{
	unsigned long	sum;
	int				sign;

	sum = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	check_sum (sum, sign, str);
	return (sum * sign);
}

void	printLinkedList(t_node *p)
{
	while (p != NULL)
	{
		printf("%d \n", p->data);
		p = p->next;
	}
}

// this function is used to add a elment in the beginning of a linked list
void	insertAtBeginning(t_node **header, int newValue)
{
	t_node	*alhai;

	alhai = (t_node *) malloc(sizeof(t_node));
	alhai -> data = newValue;
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
	printf("Linked list:\n");
	printLinkedList(head);
	return (0);
}