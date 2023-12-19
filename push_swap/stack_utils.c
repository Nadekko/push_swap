/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:07:30 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/19 14:49:59 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new_node;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

t_list	*lstnext(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	return (lst->next);
}

void	lstprint(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%ld\n", lst->data);
		lst = lst->next;
	}
}

t_list	*create_node(long value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		exit(EXIT_FAILURE);
	new_node->data = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

int	stack_len(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
