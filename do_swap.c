/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:45:03 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/29 19:14:01 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_node(t_list **lst)
{
	t_list	*first;
	t_list	*second;
	int len = stack_len(*lst);

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	first = *lst;
	second = (*lst)->next;
	first->next = second->next;
	first->prev = second;
	if (len > 2)
		first->next->prev = first;
	second->next = first;
	second->prev = NULL;
	*lst = second;
}

void	do_sa(t_list **a)
{
	swap_node(a);
	write(1, "sa\n", 3);
}

void	do_sb(t_list **b)
{
	swap_node(b);
	write(1, "sb\n", 3);
}

void	do_ss(t_list **a, t_list **b)
{
	do_sa(a);
	do_sb(b);
	write(1, "ss\n", 3);
}
