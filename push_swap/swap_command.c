/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:38:43 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/19 20:35:23 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_node(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	first = *lst;
	second = first->next;
	long (temp) = first->data;
	first->data = second->data;
	second->data = temp;
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

// comment gerer les next
// static void	swap_node(t_list *lst)
// {
// 	t_list	*first;
// 	t_list	*second;

// 	first = NULL;
// 	second = NULL;
// 	if (lst == NULL || lst->next == NULL)
// 		return ;
// 	first = lst;
// 	second = first->next;
// 	long (temp) = first->data;
// 	first->data = second->data;
// 	second->data = temp;
// 	second->prev = first->prev;
// 	first->prev = second;
// }