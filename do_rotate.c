/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:46:04 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/21 13:46:08 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_node(t_list **lst)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	first = *lst;
	second = first->next;
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	*lst = second;
	second->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	do_ra(t_list **a)
{
	rotate_node(a);
	write(1, "ra\n", 3);
}

void	do_rb(t_list **b)
{
	rotate_node(b);
	write(1, "rb\n", 3);
}

void	do_rr(t_list **a, t_list **b)
{
	do_ra(a);
	do_rb(b);
	write(1, "rr\n", 3);
}
