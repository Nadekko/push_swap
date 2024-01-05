/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:28:56 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 18:19:59 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	move_less_than_midpoint(t_list **lst, t_list **hold)
{
	static int	current_group = 1;

	int (total_iter) = 0;
	int (iter_moved) = 0;
	int (total_len) = stack_len(*lst);
	int (mid_point) = get_mid_data(lst);
	while (stack_len(*lst) > total_len / 2)
	{
		if ((*lst)->data < mid_point)
		{
			do_pb(lst, hold);
			(*hold)->group = current_group;
		}
		if ((*lst)->data >= mid_point)
			do_ra(lst);
		iter_moved++;
		if (total_iter > total_len * 2)
			break ;
		total_iter += iter_moved;
	}
	current_group++;
	reset_midpoint(lst);
	total_len = stack_len(*lst);
}

void	move_more_than_midpoint(t_list **hold, t_list **lst)
{
	int	mid_point;
	int	i = 1;
	int	current_group = (*hold)->group;
	int	max_group = find_group_max(*hold);

	while (i < max_group)
	{
		mid_point = get_mid_data(hold);
		printf("max group = %d | mid_point of group %d = %d\n", max_group, i, mid_point);
		// find_group_limits(*hold);
		set_midpoint_group(hold);
		i++;
	}
	printf("STACK A\n");
	lstprint(*lst);
	printf("STACK B\n");
	lstprint(*hold);
	pause () ;
}

// int	get_mid_data(t_list **lst)
// {
// 	int		mid_len;
// 	t_list	*current;

// 	mid_len = stack_len(*lst) / 2;
// 	current = *lst;
// 	while (current)
// 	{
// 		if (current->index == mid_len + 1)
// 			return (current->data);
// 		current = current->next;
// 	}
// 	return (0);
// }

// void	reset_midpoint(t_list **lst)
// {
// 	reset_index(*lst);
// 	put_index(*lst, stack_len(*lst));
// 	get_mid_data(lst);
// }

// void	group_tracking(t_list **hold, int current_group)
// {
// 	t_list	*(*hold));

// 	temp = *hold;
// 	while (temp)
// 	{
// 		if (temp->group == -1)
// 			temp->group = current_group;
// 		printf("group = %d | current-group = %d\n", temp->group, current_group);
// 		printf("group 1 = %d\n", temp->group == 1);
// 		printf("group 2 = %d\n", temp->data->group == 2);
// 		temp = temp->next;
// 	}
// }
		// printf("STACK A\n");
		// lstprint(*lst);
		// printf("STACK B\n");
		// lstprint(*hold);
		// if (lst->data >= mid_point)
		// 	do_ra(&lst);
		//if (lst->data == mid_point)
		// 	do_ra(&lst);
// int	find_midpoint_value(t_list *lst)
// {
// 	t_list	*slow_ptr = lst;
// 	t_list	*fast_ptr = lst;

// 	while (fast_ptr && fast_ptr->next)
// 	{
// 		slow_ptr = slow_ptr->next;
// 		fast_ptr = fast_ptr->next->next;
// 	}
// 	return (slow_ptr->data);
// }