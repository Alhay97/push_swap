/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <aalhamel>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:25:58 by aalhamel          #+#    #+#             */
/*   Updated: 2022/06/01 17:26:11 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// int  duplication()


/* Function to print linked list */
void	printlist(t_node *head)
{
	while (head != NULL)
	{
		printf("%d->", head->data);
		head = head->next;
	}
	printf("NULL");
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_check_dups(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		ft_atoi (av[i]);
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp (av[i], av[j]) == 0)
			{
				write (2, "ERROR\n", 6);
				exit (1);
			}
			j++;
		}
		i++;
	}
}

// void	check_negative(int ac, char **av)
// {
// 	int i;
// 	int j;

// 	i = 1;
// 	while(i < ac)
// 	{
// 		j = 0;
// 		while (av[i][j] != '\0')
// 		{
// 			if (av[i][j] == '-' && av[i][j + 1] != '\0' && (av[i][j + 1] < '0' || av[i][j + 1] > '9'))
// 				exit(1);
// 			j++;
// 		}
// 		i++;
// 	}
// }


int	main(int argc, char **argv)
{
	int			i;
	int			ab;
	t_node		*head1;
	t_node		*head2;

	i = 1;
	head1 = NULL;
	head2 = NULL;
	// check_negative(argc, argv);
	ft_check_dups(argc, argv);
	while (i < argc)
	{
		ab = ft_atoi(argv[i]);
		if (argc == 1)
			insertAtBeginning(&head1, ab);
		else
			insertAtEnd(&head1, ab);
		i++;
	}

	printLinkedList(head1);
	return (0);
}
