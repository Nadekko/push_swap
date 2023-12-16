/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:10:04 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/10 15:39:47 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_list(t_double_list *list, t_double_list *push)
{
	t_node	*temp;

	if (list->size == 0)
		return ;
	temp = list->head;
	list->head = list->head->next;
	list->head->prev = NULL;
	list->size--;
	temp->next = push->head;
	temp->prev = NULL;
	if (push->head)
		push->head->prev = temp;
	push->head = temp;
	push->size++;
}

void	ft_push(t_double list *a, t_double_list *b)
{
	if (b->size > 0)
		ft_push_list(b, a);
	if (a->size > 0)
		ft_push_list(a, b);
}
