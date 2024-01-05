/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:10:00 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/03 15:19:38 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_list **lst)
{
	t_list *temp;
	int		max_index;
	int		max_bits;

	temp = *lst;
	max_index = temp->index;
	max_bits = 1;
	while (temp)
	{
		if (temp->index > max_index)
			max_index = temp->index;
		temp = temp->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	printf("\nvaleur bits = %d\n", max_bits);
	return (max_bits);
}

void	radix_sort(t_list **lst, t_list **hold)
{
	t_list	*temp_lst;
	int		i;
	int		j;
	int		size = stack_len(*lst);
	int		max_val = size - 1;
	int		max_bits = 0;

	temp_lst = *lst;
	i = 1;
	while ((max_val >> max_bits) != 0)
	{
		j = 0;
		while (i < max_bits)
		{
			while (j < size)
			{
				temp_lst = *lst;
				printf("Element %d - bits at position %d: %d\n", j, i, (temp_lst->index >> i) & 1);
				if (((temp_lst->index >> i) & 1) == 1)
					do_ra(lst);
				else
					do_pb(lst, hold);
				j++;
			}
			i++;
		}
		while (stack_len(*hold) != 0)
			do_pa(hold, lst);
		max_bits++;
	}
}
