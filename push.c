#include "push_swap.h"


// void pop_stack(t_node *head)
// {
// 	if (head == NULL)
//         return NULL;

//     t_node* temp = head;
//     head = head->next;

//     free (temp);

//     return head;

// }

void push_a(t_node **a, t_node **b)
{
	t_node *temp;

	if (!*a)
		return ;
    temp = *a;
    *a = (*a)->next;
    temp->next = *b;
    (*b)->pre = temp;
	*b = temp;
}

void push_b (t_node **a, t_node **b)
{
	t_node *temp;

	if (!*b)
		return ;
    temp = *b;
    *b = (*b)->next;
    temp->next = *a;
    (*a)->pre = temp;
	*a = temp;
}

