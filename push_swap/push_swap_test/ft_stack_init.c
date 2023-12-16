/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:08:23 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/10 20:36:04 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_double_list	*init_double_list(void)
{
	t_double_list	*list;

	list = (t_double_list *)malloc(sizeof(t_double_list));
	if (!list)
		return (NULL);
	if (list)
		list->head = NULL;
	list->tail = NULL;
	list->size = 0;
	return (list);
}

int	*ft_parse_arg(char **av, int ac)
{
	int		*stack;
	long	num;
	int		i;
	int		index;

	num = 0;
	index = 0;
	i = 0;
	stack = NULL;
	stack = malloc(MAX_STACK_SIZE * sizeof(int));
	if (!stack)
		return (NULL);
	while (i < ac)
	{
		ft_checkerror(av);
		num = ft_atol(av[i]);
		i++;
		stack[index++] = num;
	}
	return (stack);
}

int	*ft_parse_split(char **av)
{
	int		*stack;
	long	num;
	int		index;
	char	**res;

	stack = NULL;
	res = NULL;
	num = 0;
	index = 0;
	stack = malloc(MAX_STACK_SIZE * sizeof(int));
	if (!stack)
		return (NULL);
	res = ft_split(av[1], ' ');
	ft_checkerror(res);
	while (*res)
	{
		num = ft_atol(*res);
		stack[index++] = num;
		res++;
	}
	return (stack);
}

/*void	*add_to_head(t_double_node *list, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	if (new_node)
	{
		new_node->data = data;
		new_node->next = list->head;
		new_node->prev = NULL;
	}
	if (list->head != NULL)
		list->head->prev = new_node;
	else
		list->tail = new_node;
	return (new_node);
}*/
