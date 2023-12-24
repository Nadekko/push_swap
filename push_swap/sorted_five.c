/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:15:53 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/24 05:14:29 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_until_tree(t_list **lst, t_list **hold)
{
	while (stack_len(*lst) != 3)
		do_pb(lst, hold);
}

void	sort_five(t_list **lst, t_list **hold)
{
	int	lst_len;

	lst_len = stack_len(*lst);
	if (!*lst)
		return ;
	push_until_tree(lst, hold);
	if (stack_len(*lst) == 3)
		sort_tree(lst);
}
