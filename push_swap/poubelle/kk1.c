// if (pos < (stack_len(*lst) / 2))
// 	do_ra(lst);
// if (pos > (stack_len(*lst) / 2))
// 	do_rra(lst);
// void	push_two_hold(t_list **lst, t_list **hold)
// {
// 	if (!*lst)
// 		return ;
// 	do_pb(lst, hold);
// 	do_pb(lst, hold);
// }

// void	sort_five(t_list **lst, t_list **hold)
// {
// 	int	pos;

// 	pos = get_index(lst);
// 	if (!*lst)
// 		return ;
// 	push_two_hold(lst, hold);
// 	if (stack_len(*lst) == 3)
// 		sort_tree(lst);
// 	printf ("\n\nPOS IS : %d\n\n", pos++);
// }

// t_list	*set_target_node(t_list **lst, long target)
// {
// 	t_list	*current;

// 	current = *lst;
// 	while (current != NULL)
// 	{
// 		if (current->data == target)
// 			return (current);
// 	}
// 	return (NULL);
// }

// t_list	*set_target_node(t_list **lst, long	target)
// {
// 	t_list	*target_node;
// 	t_list	*current_lst;

// 	target_node = NULL;
// 	long (best_match) = LONG_MAX;
// 	while (*hold)
// 	{
// 		current_lst = *lst;
// 		while (current_lst)
// 		{
// 			if (current_lst->data > (*hold)->data
// 				&& current_lst->data < best_match)
// 			{
// 				best_match = current_lst->data;
// 				target_node = current_lst;
// 			}
// 			current_lst = current_lst->next;
// 		}
// 		if (LONG_MAX == best_match)
// 			(*hold)->target_node = find_tiniest(lst);
// 		else
// 			hold->target_node = target_node;
// 		*hold = (*hold)->next;
// 	}
// 	return (target_node);
// }