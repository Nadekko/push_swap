/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:30:19 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/28 17:30:21 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_until_tree(t_list **lst, t_list **hold)
{
	while (stack_len(*lst) != 3)
		do_pb(lst, hold);
}

void	sort_stack(t_list **lst, t_list **hold)
{
	int	lst_len;

	lst_len = stack_len(*lst);
	if (!*lst)
		return ;
	push_until_tree(lst, hold);
	if (stack_len(*lst) == 3)
		sort_tree(lst);
}
