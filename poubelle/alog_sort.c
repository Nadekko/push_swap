/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alog_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:44:31 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/02 16:33:02 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back_to_lst(t_list **lst, t_list **hold)
{
	while (!is_empty(*hold))
		do_pa(hold, lst);
}

void	push_lowest(t_list **lst, t_list **hold)
{
	int	count;
	int	distance;
	int	min_index;
	int	chunk;

	count = 0;
	chunk = 20;
	min_index = get_min_index(lst, (*lst)->data);
	while (*lst && count < chunk)
	{
		distance = get_distance(lst, get_min_index(lst, -1));
		int		current = (*lst)->index;
		printf("current = %d || distance = %d\n", current, distance);
		if (current >= min_index && distance == 0)
			do_pb(lst, hold);
		else
			do_ra(lst);
		count++;
	}
}

// void	push_biggest(t_list **lst, t_list **hold)
// {
// 	int	max_index = get_max_index(hold, (*hold)->data);
	
// 	while (*hold)
// 	{
// 		printf("max_index = %d\n", max_index);
// 		if ((*hold)->index != max_index)
// 		{
// 			if ((*hold)->index < max_index)
// 			{
// 				printf("max_index = %d || hold->index = %d\n", max_index, (*hold)->index);
// 				do_pa(hold, lst);
// 			}
// 			else
// 				do_rrb(hold);
// 		}
// 		if ((*hold)->index == max_index)
// 			*hold = (*hold)->next;
// 	}
// }
