#include "push_swap.h"

void	printLinkedList(t_node *p)
{
	while (p != NULL)
	{
		printf("%d, and the index->%d \n", p->data, p->indexs);
		p = p->next;
	}
}

void	addingfirst(t_node **header, int ab)
{
	t_node	*alhai;

	alhai = (t_node *)malloc(sizeof(t_node));
	alhai -> data = ab;
	alhai -> next = (*header);
	alhai -> pre = NULL;
	if ((*header) != NULL)
		(*header)-> pre = NULL;
	(*header) = alhai;
}

void	add_end(t_node **hello, int bc)
{
	t_node	*alhai;
	t_node	*tempo;

	alhai = (t_node *)malloc(sizeof(t_node));
	alhai -> data = bc;
	alhai -> next = NULL;
	tempo = *hello;
	if (*hello == NULL)
	{
		alhai -> pre = NULL;
		*hello = alhai;
		return ;
	}
	while (tempo -> next != NULL)
		tempo = tempo -> next;
	tempo ->next = alhai;
	alhai ->pre = tempo;
}


int counter(t_node **ab)
{
    t_node *temp = *ab;

    int count=0;
    while(temp != NULL){

       temp = temp->next;

        /* Increment count variable. */
        count++;

    }
    return (count);
}
