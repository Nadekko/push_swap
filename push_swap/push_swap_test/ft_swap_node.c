/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:05:31 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/10 14:54:01 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the first two elements at the top of stack a or b (sa, sb)
void	ft_swap_list(t_double_list *list)
{
	int	first;
	int	second;

	first = list->head->data;
	second = list->head->next->data;
	if (list->size < 2)
		return ;
	list->head->data = second;
	list->head->next->data = first;
}

// Swap the first two elements at the top of both stack list and stack b (ss)
void	ft_swap_both(t_double_list *a, t_double_list *b)
{
	if (a->size >= 2)
		ft_swap_list(a);
	if (b->size >= 2)
		ft_swap_list(b);
}

// Swap the first two elements at the top of stack b (sb)
/*void	ft_swap_b(t_double_list *b)
{
	int	first;
	int	second;

	first = b->head->data;
	second = b->head->next->data;
	if (b->size < 2)
		return ;
	b->head->data = second;
	b->head->next->data = first;
}*/