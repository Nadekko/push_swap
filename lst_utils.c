/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:36:47 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 16:36:36 by andjenna         ###   ########.fr       */
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


void	lstprint(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%ld | index = %d | group = %d",lst->data,
			lst->index, lst->group);
		if (!lst->prev)
			printf("\n");
		if (lst->prev)
			printf(" | node->prev = %ld\n", lst->prev->data);
		lst = lst->next;
	}
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

t_list	*lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// void	lstadd_front(t_list **lst, t_list *new_node)
// {
// 	if (*lst == NULL)
// 	{
// 		*lst = new_node;
// 		return ;
// 	}
// 	new_node->next = *lst;
// 	(*lst)->prev = new_node;
// 	*lst = new_node;
// }