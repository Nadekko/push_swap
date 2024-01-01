/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:10:00 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/01 19:20:02 by andjenna         ###   ########.fr       */
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
	max_bits = 0;
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
	int		max_bits;

	max_bits = get_max_bits(lst);
	temp_lst = *lst;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j++ < stack_len(*lst))
		{
			temp_lst = *lst;
			printf("Element %d - bits at position %d: %d\n", j, i, (temp_lst->index >> i) & 1);
			if (((temp_lst->index >> i) & 1) == 1)
			{
				printf("bits2 == %d\n", i);
				do_ra(lst);
			}
			else
				do_pb(lst, hold);
		}
		while (stack_len(*hold) != 0)
			do_pa(hold, lst);
		i++;
	}
}
