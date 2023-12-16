/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:45:07 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/11 12:15:39 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotdown_list(t_double_list *list)
{
	t_node	temp;

	if (list->size < 2)
		return ;
	temp = list->tail;
	list->tail = list->tail->prev;
	list->tail->next = NULL;
	current = list->tail;
	while (current->prev != NULL)
		current = current ->prev;
	current->prev = temp;
	temp->next = current;
	temp->prev = NULL;
	list->head = temp;
}

void	ft_rotdown_both(t_double_list *a, t_double_list *b)
{
	if (a->size >= 2)
		ft_rotdown_both(a);
	if (b->size >= 2)
		ft_rotdown_list(b);
}
