/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:34:01 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/24 01:17:47 by andjenna         ###   ########.fr       */
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
	if (stack_len(*lst) == 2)
		do_sa(lst);
	if (stack_len(*lst) == 3)
	{
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
