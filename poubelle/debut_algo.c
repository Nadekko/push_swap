/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debut_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:39:08 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/01 14:46:30 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_list	*partition(t_list *lst, t_list *tail)
{
	long	pivot = tail->data;
	t_list	i = lst->prev;
	t_list	j = lst;
	
	while (j != tail)
	{
		if (j->data <= pivot)
		{
			if ()
		}
	}
}

void	quicksortutil(t_list *lst, t_list *tail)
{
	t_list	*pivot;

	if (tail != NULL && lst != tail && lst != tail->next)
	{
		pivot = partition(lst, tail);
		quicksortutil(lst, pivot->prev);
		quicksortutil(pivot->next, tail);
	}
}

void	quicksort(t_list *lst)
{
	t_list	*tail = lst;

	while (tail != NULL && tail->next != NULL)
		tail = tail->next;
	quicksortutil(lst, tail);
}
