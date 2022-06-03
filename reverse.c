void rev_rot(t_node **ab)
{
	t_node *tempor = *ab;
	t_node *tempp = *ab;

	while (tempor -> next != NULL)
		tempor = tempor->next;
	tempor->next =  *ab;
	*ab = tempp->next;
	tempp->next = NULL;
}
