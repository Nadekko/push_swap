/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:45:43 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 11:44:13 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_list **lst, char **av)
{
	int		i;
	long	nbr;

	i = 0;
	if (av[i] == NULL)
		print_error("Error : No arguments.\n");
	while (av[i])
	{
		if (!error_input(av))
			print_error("Error : Ivalid input.\n");
		nbr = ft_atol(av[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			print_error("Error : Integers out of range.\n");
		lstadd_back(lst, create_node(nbr));
		i++;
	}
	put_index(*lst, stack_len(*lst));
}

void	put_index(t_list *lst, int lst_len)
{
	t_list	*new;
	t_list	*min_node;
	int		min;
	int		i;

	i = 1;
	while (i <= lst_len)
	{
		min = INT_MAX;
		min_node = NULL;
		new = lst;
		while (new)
		{
			if (new->data < min && new->index == -1)
			{
				min = new->data;
				min_node = new;
				new = lst;
			}
			else
				new = new->next;
		}
		if (min_node != NULL)
			min_node->index = i++;
	}
}

t_list	*create_node(long value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		exit(EXIT_FAILURE);
	new_node->data = value;
	new_node->index = -1;
	new_node->group = -1;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	reset_index(t_list *lst)
{
	while (lst)
	{
		lst->index = -1;
		lst = lst->next;
	}
}
// void	get_position(t_list *lst)
// {
// 	int	i;

// 	i = 1;
// 	while (lst)
// 	{
// 		lst->position = i;
// 		lst = lst->next;
// 		++i;
// 	}
// }