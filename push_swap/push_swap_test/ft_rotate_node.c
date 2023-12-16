/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:06:16 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/10 15:46:29 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift up all ellements of stack a or b by 1
void	ft_rotup_list(t_double_list *list)
{
	t_node	*temp;

	if (list->size < 2)
		return ;
	temp = list->head;
	list->head = list->head->next;
	list->head->prev = NULL;
	current = list->head;
	while (current->next != NULL)
		current = current->next;
	current->next = temp;
	temp->prev = current;
	temp->next = NULL;
	list->tail = temp;
}

void	ft_rotup_both(t_double_list *a, t_double_list *b)
{
	if (a->size >= 2)
		ft_rotate_list(a);
	if (b->size >= 2)
		ft_rotate_list(b);
}

/*void	ft_rotate_b(t_double_list *b)
{
	t_node	*temp;

	if (b->size < 2)
		return ;
	temp = b->head;
	b->head = b->head->next;
	b->head->prev = NULL;
	current = b->head;
	while (current->next != NULL)
		current = current->next;
	current->next = temp;
	temp->prev = current;
	temp->next = NULL;
	b->tail = temp;
}*/