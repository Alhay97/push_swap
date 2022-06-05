#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int data;
	struct s_node *next;
	struct s_node *pre;
}t_node;


void	printLinkedList(t_node *p);

void	addingfirst(t_node **header, int ab);

void	add_end(t_node **hello, int bc);


void	check_sum(unsigned long sum, int sign, const char *str);

int		ft_atoi(const char *str);


void	ft_putchar_fd(int c, int fd);

void 	ft_putstr_fd(char *str, int fd);

void	ft_putendl_fd(char *str, int fd);

void	dublicate_check(t_node	*list, int ab);

void 	ft_push(t_node **a, t_node **b);

void 	rev_rot(t_node **stack);

void 	ft_rotate(t_node **a);

void 	sa_sb(t_node *head);

void 	ft_swap(int *a, int *b);

int 	counter(t_node **ab);

#endif