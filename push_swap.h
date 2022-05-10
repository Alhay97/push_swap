/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <aalhamel>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:14:50 by aalhamel          #+#    #+#             */
/*   Updated: 2022/05/10 21:23:28 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct s_Node
{
	int				data;
	struct s_Node	*next;
}	t_node;


void	ft_swap(int *a, int *b);

void	check_sum(unsigned long sum, int sign, const char *str);

int	ft_atoi(const char *str);

void	printLinkedList(t_node *p);

void	insertAtBeginning(t_node **header, int newValue);

void	insertAtEnd(t_node **head, int newData);

#endif
