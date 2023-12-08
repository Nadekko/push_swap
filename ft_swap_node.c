/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:05:31 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/08 20:06:11 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the first two elements at the top of stack a (sa)
void	ft_swap_a(t_double_list *a)
{
	int	first;
	int	second;

	first = a->head->data;
	second = a->head->next->data;
	if (a->size < 2)
		return ;
	a->head->data = second;
	a->head->next->data = first;
}

// Swap the first two elements at the top of stack b (sb)
void	ft_swap_b(t_double_list *b)
{
	int	first;
	int	second;

	first = b->head->data;
	second = b->head->next->data;
	if (b->size < 2)
		return ;
	b->head->data = second;
	b->head->next->data = first;
}

// Swap the first two elements at the top of both stack a and stack b (ss)
void	ft_swap_both(t_double_list *a, t_double_list *b)
{
	ft_swap_a(a);
	ft_swap_b(b);
}
