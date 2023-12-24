/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:45:43 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/24 04:57:23 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_input(char **av)
{
	int		i;

	i = -1;
	while (av[++i])
		if (is_nbr(av[i]) == 0)
			return (0);
	if (error_repeat(av) == 0)
		return (0);
	return (1);
}

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

void	get_position(t_list *lst)
{
	int	i;

	i = 1;
	while (lst)
	{
		lst->position = i;
		lst = lst->next;
		++i;
	}
}

// void	get_target_pos(t_list **lst, t_list **hold)
// {
// 	t_list *temp;
// 	int		target_node;


// }