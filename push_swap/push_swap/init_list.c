/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:37:04 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/16 16:38:30 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_list(void)
{
	t_list	*list;
	t_node	*node;

	// node = malloc(sizeof(t_node));
	// list = malloc(sizeof(t_list));
	// if (!list || !node)
	// 	exit(EXIT_FAILURE);
	node->value = 0;
	node->index = -1;
	node->next = NULL;
	list->first = node;
	return (list);
}

void	display_list(t_list *list)
{
	t_node	*current;

	if (!list)
		exit(EXIT_FAILURE);
	current = list->first;
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	printf("NULL\n");
}
