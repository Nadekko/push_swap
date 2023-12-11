/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:59:47 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/11 19:09:56 by andjenna         ###   ########.fr       */
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

void	ft_free_stack(t_node **stack)
{
	t_node	*tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	ft_exit_error(t_node **stack)
{
	if (stack == NULL || *stack != NULL)
		ft_free_stack(stack);
	ft_perror("Error\n");
	exit(EXIT_FAILURE);
}

t_node	*ft_add_to_stack(t_node *stack, long value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = stack;
	stack = new_node;
	return (stack);
}
