/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alog_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:44:31 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/01 19:56:23 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_lowest(t_list **lst, t_list **hold)
{
	t_list	*temp = *lst;
	int		count = 0;
	int		min;

	while (*lst && count < 20)
	{
		min = find_min(temp);
		while (temp != NULL)
		{
			
			if (min <= temp->data)
				do_pb(lst, hold);
			else if (min > temp->data)
				do_ra(lst);
			temp = temp->next;
		}
		count++;
	}
}