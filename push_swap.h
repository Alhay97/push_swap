#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_node
{
	int data;
	int indexs;
	struct s_node *next;
	struct s_node *pre;
}t_node;

int max_num_2(t_node *a);

void	printLinkedList(t_node *p);

void	addingfirst(t_node **header, int ab);

void	add_end(t_node **hello, int bc);

int 	max_num(t_node *ab);

int 	min_num(t_node *ab);

void	check_sum(unsigned long sum, int sign, const char *str);

int		ft_atoi(const char *str);

void	ft_putchar_fd(int c, int fd);

void 	ft_putstr_fd(char *str, int fd);

void	ft_putendl_fd(char *str, int fd);

void	dublicate_check(t_node	*list, int ab);

void	push_a (t_node **a, t_node **b);

void 	push_b (t_node **a, t_node **b);

void 	rev_rot(t_node **stack);

void 	ft_rotate(t_node **a);

void 	sa_sb(t_node **head);

void 	ft_swap(int *a, int *b);

static void	conditionss(t_node **ab);

void	sort_three(t_node **a);

void	sort_five_four(t_node **ab, t_node **bc);

int 	counter(t_node **ab);

void	ft_lstclear(t_node **lst, void (*del)(void *));

#endif
