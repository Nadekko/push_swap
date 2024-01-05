/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:34:30 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 14:59:08 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tree(t_list **lst)
{
	long	t;
	long	m;
	long	b;

	if (!*lst)
		return ;
	t = (*lst)->data;
	m = (*lst)->next->data;
	b = (*lst)->next->next->data;
	if (t > m && t > b)
		do_ra(lst);
	else if (m > t && m > b)
		do_rra(lst);
	if (!is_sorted(*lst))
		do_sa(lst);
}

void	sort_four(t_list **lst, t_list **hold)
{
	int	disctance;

	disctance = get_distance(lst, get_min_index(lst));
	if (disctance == 1)
		do_ra(lst);
	else if (disctance == 2)
	{
		do_ra(lst);
		do_ra(lst);
	}
	else if (disctance == 3)
		do_rra(lst);
	if (is_sorted(*lst))
		return ;
	do_pb(lst, hold);
	sort_tree(lst);
	do_pa(hold, lst);
}

void	sort_five(t_list **lst, t_list **hold)
{
	int	distance;

	distance = get_distance(lst, get_min_index(lst));
	if (distance == 1)
		do_ra(lst);
	else if (distance == 2)
	{
		do_ra(lst);
		do_ra(lst);
	}
	else if (distance == 3)
	{
		do_rra(lst);
		do_rra(lst);
	}
	else if (distance == 4)
		do_rra(lst);
	if (is_sorted(*lst))
		return ;
	do_pb(lst, hold);
	sort_four(lst, hold);
	do_pa(hold, lst);
}

void	simple_sort(t_list **lst, t_list **hold)
{
	int	size;

	size = stack_len(*lst);
	if (size == 2)
		do_sa(lst);
	else if (size <= 3)
		sort_tree(lst);
	else if (size == 4)
		sort_four(lst, hold);
	else if (size == 5)
		sort_five(lst, hold);
}
// void	sort_tree(t_list **lst)
// {
// 	if (!*lst)
// 		return ;
// 	long (t) = (*lst)->data;
// 	long (m) = (*lst)->next->data;
// 	long (b) = (*lst)->next->next->data;
// 	if (t > m && m < b && b > t)
// 		do_sa(lst);
// 	if (t > m && t > b && m > b)
// 	{
// 		do_sa(lst);
// 		do_rra(lst);
// 	}
// 	if (t > m && t > b && b > m)
// 		do_ra(lst);
// 	if (t < m && t < b && m > b)
// 	{
// 		do_sa(lst);
// 		do_ra(lst);
// 	}
// 	if (m > t && m > b && t > b)
// 		do_rra(lst);
// }
