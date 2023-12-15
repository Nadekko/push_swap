/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:17:57 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/15 19:50:36 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_dlist(t_dlist *dlist)
{
	dlist->size = 0;
	dlist->first = NULL;
	dlist->last = NULL;
}

void	add_to_top(t_dlist *dlist, int nbr)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit (EXIT_FAILURE);
	new->value = nbr;
	new->next = dlist->first;
	new->prev = NULL;
	if (dlist->first)
		dlist->first->prev = new;
	else
		dlist->last = new;
	dlist->first = new;
}

void	add_to_bottom(t_dlist *dlist, int nbr)
{
	t_node	*new;

	new = malloc(sizeof(t_node));

	if (!new)
		exit (EXIT_FAILURE);
	new->value = nbr;
	new->prev = dlist->last;
	new->next = NULL;
	if (dlist->last)
		dlist->last->next = new;
	else
		dlist->first = new;
	dlist->last = new;
}

void	display_stack(t_dlist *dlist)
{
	t_node	*view;

	view = dlist->first;
	while (view)
	{
		printf("%d\n", view->value);
		view = view->next;
	}
}
