/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:46:28 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/21 13:46:31 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **lst)
{
	t_list	*last;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *lst;
	(*lst)->prev = last;
	*lst = last;
}

void	do_rra(t_list **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	do_rrb(t_list **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	do_rrr(t_list **a, t_list **b)
{
	do_rra(a);
	do_rrb(b);
	write(1, "rrr\n", 4);
}

// static void	reverse_rotate(t_list **lst)
// {
// 	t_list	*last;
// 	t_list	*before_last;
// 	t_list	*first;

// 	if (*lst == NULL || (*lst)->next == NULL)
// 		return ;
// 	first = *lst;
// 	last = *lst;
// 	while (last->next != NULL)
// 		last = last->next;
// 	before_last = last->prev;
// 	*lst = last;
// 	last->prev = NULL;
// 	last->next = first;
// 	before_last->next = NULL;
// 	first = first->next;
// }