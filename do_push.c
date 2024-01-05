/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:45:26 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 12:20:13 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_node(t_list **lst, t_list **hold)
{
	t_list	*node;

	if (*lst == NULL)
		return ;
	node = *lst;
	*lst = (*lst)->next;
	if (*lst != NULL)
		(*lst)->prev = NULL;
	node->next = *hold;
	node->prev = NULL;
	if (*hold != NULL)
		(*hold)->prev = node;
	*hold = node;
}

void	do_pa(t_list **b, t_list **a)
{
	push_node(b, a);
	write(1, "pa\n", 3);
}

void	do_pb(t_list **a, t_list **b)
{
	push_node(a, b);
	write(1, "pb\n", 3);
}
