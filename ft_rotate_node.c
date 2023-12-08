/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:06:16 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/08 20:39:14 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_double_list *a)
{
	t_node	*temp;

	if (a->size < 2)
		return ;
	// stock temporairement l'adresse du premier element
	temp = a->head
				// le second element devient la nouvelle tete
				a->head = a->head->next;
	a->head->prev = NULL;
	// traverse la pile jusqu'au dernier element
	current = a->head;
	while (current->next != NULL)
		current = current->next;
	// le premier element devient le dernier
	current->next = temp;
	temp->prev = current;
	temp->next = NULL;
	// met a jour la nouvelle head et le nouvelle tail
	a->tail = temp;
}

void	ft_rotate_b(t_double_list *b)
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
}

void	ft_rotate_both(t_double_list *a, t_double_list *b)
{
	ft_rotate_a(a);
	ft_rotate_b(b);
}
