/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:59:47 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/12 19:35:08 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_init_stack(int value)
{
	t_node	*stack;

	value = 0;
	stack = malloc(sizeof(t_node));
	if (!stack)
		return (NULL);
	if (stack)
	{
		stack->value = value;
		stack->current = 0;
		stack->prev = NULL;
		stack->next = NULL;
	}
	return (stack);
}

void	ft_add_to_stack(t_node **lst, long value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		ft_exit_error(&new_node);
	new_node->value = value;
	new_node->next = *lst;
	if (!*lst)
		*lst = new_node;
	else
		ft_lstadd_back(lst, new_node);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*(lst));
		temp->next = new;
	}
}

t_node	*ft_lstlast(t_node *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_printf_stack(t_node *stack)
{
	t_node	*current;

	current = stack;
	while (current != NULL)
	{	
		printf("%d", current->value);
		current = current->next;
	}
	printf("\n");
}
