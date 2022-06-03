
int main(int argc, char **argv)
{
	int			i;
	int			ab;
	t_node		*head1;

	i = 1;
	head1 = NULL;
	while (i < argc)
	{
		ab = ft_atoi(argv[i]);
		dublicate_check(head1, ab);
		if (argc == 1)
			addingfirst(&head1, ab);
		else
			add_end(&head1, ab);
		i++;
	}
	printLinkedList(head1);
	printf("this is after the reverse function\n");
	rev_rot(&head1);
	// ft_swap(&head1->data, &head1->next->data);
	printLinkedList(head1);
	return (0);
}
