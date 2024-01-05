/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:31:50 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 18:18:14 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_mid_data_in_group(t_list **hold, int start_index, int end_index)
{
	int		group_size = end_index - start_index;
	int		mid_point = group_size / 2;
	t_list *current = *hold;

	while (current)
	{
		if (current->index == mid_point + 1)
			return (current->data);
		printf("midpoint of group = %d && data %ld\n",current->index, current->data);
		current = current->next;
	}
	return (0);
}

void	find_group_limits(t_list *hold, int *start_index, int *end_index)
{
	int	current_group = hold->group;
	*start_index = hold->index;
	*end_index = hold->index;

	hold = hold->next;
	while (hold)
	{
		if (hold->group != current_group)
		{
			*start_index = hold->index;
			current_group = hold->group;
		}
		*end_index = hold->index;
		hold = hold->next;
	}
	printf("Group %d: Start Index = %d, End Index = %d\n", 
		current_group, *start_index, *end_index);
}

int	find_group_max(t_list *hold)
{
	int	max_group = INT_MIN;

	while (hold)
	{
		if (hold->group > max_group)
			max_group = hold->group;
		hold = hold->next;
	}
	return (max_group);
}

void	set_midpoint_group(t_list **hold)
{
	int	start_index = 0;
	int	end_index = 0;

	find_group_limits(*hold, &start_index, &end_index);
	int mid_point = get_mid_data_in_group(hold, start_index, end_index);
	printf("Midpoint %d: Start Index = %d, End Index = %d\n", mid_point, start_index, end_index);
}


// int	group_size(t_list *hold, int target_group)
// {
// 	int	size;

// 	size = 0;
// 	while (hold)
// 	{
// 		if (hold->group == target_group)
// 			size++;
// 		hold = hold->next;
// 	}
// 	return (size);
// }