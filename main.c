// #include "push_swap.h"

// int main(int argc, char **argv)
// {
// 	int			i;
// 	int			ab;
// 	t_node		*head1;
// 	t_node		*head2;

// 	i = 1;
// 	head1 = NULL;
// 	head2 = NULL;
// 	while (i < argc)
// 	{
// 		ab = ft_atoi(argv[i]);
// 		dublicate_check(head1, ab);
// 		if (argc == 1)
// 			addingfirst(&head1, ab);
// 		else
// 			add_end(&head1, ab);
// 		i++;
// 	}
// // 	printf("numbers:\n");


// // 	//ft_push(&head1, &head2);

// // 	// head1 = removeTop(head1);

// // 	// printLinkedList(head1);
// // 	//printLinkedList(head2);

// // 	// // int a = head1->data;
// // 	// // int b = head1->next->data;
// // 	// // int c = head1->next->next->data;


// 	if(argc == 4)
// 	{
// 		if(head1->data > head1->next->data && head1->data < head1->next->next->data && head1->next->data < head1->next->next->data)
// 			sa_sb(head1);
// 		else if(head1->data > head1->next->data && head1->data > head1->next->next->data && head1->next->data > head1->next->next->data)
// 		{
// 			sa_sb(head1);
// 			rev_rot(&head1);
// 		}
// 		else if(head1->data > head1->next->data && head1->data > head1->next->next->data && head1->next->data < head1->next->next->data)
// 			ft_rotate(&head1);
// 		else if(head1->data < head1->next->data && head1->data < head1->next->next->data && head1->next->data > head1->next->next->data)
// 		{
// 			sa_sb(head1);
// 			ft_rotate(&head1);
// 		}
// 		else if(head1->data < head1->next->data && head1->data > head1->next->next->data && head1->next->data > head1->next->next->data)
// 			rev_rot(&head1);
// 	}
// 	else
// 	{
// 		printf("error amount of numbers");
// 	}

// // 	int abb =max_num(head1);

// // 	printf("%d is the biggest number in linked list",abb);

// 	printf("reverse rotate:\n");
// 	printLinkedList(head1);


// // 	// printf("\n%d",counter(&head1));

// 	return (0);
// }




// // // int main(int argc, char **argv)
// // // {
// // // 	int			i;
// // // 	int			ab;
// // // 	t_node		*head1;
// // // 	t_node		*head2;

// // // 	i = 1;
// // // 	head1 = NULL;
// // // 	head2 = NULL;
// // // 	while (i < argc)
// // // 	{
// // // 		ab = ft_atoi(argv[i]);
// // // 		dublicate_check(head1, ab);
// // // 		if (argc == 1)
// // // 			addingfirst(&head1, ab);
// // // 		else
// // // 			add_end(&head1, ab);
// // // 		i++;
// // // 	}
// // // 	printf("numbers:\n");
// // // 	//head1 = removeTop(head1);
// // // 	printLinkedList(head1);
// // // 	printf("the smallest number is: %d", min_num(head1));
// // // }
