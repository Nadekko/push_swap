/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:21:12 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/19 19:17:44 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_repeat(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

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

void	stack_init(t_list **a, char **av)
{
	int		i;
	long	nbr;

	i = 0;
	while (av[i])
	{
		if (!error_input(av))
			print_error("Error\n");
		nbr = ft_atol(av[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			print_error("Error\n");
		lstadd_back(a, create_node(nbr));
		i++;
	}
}
