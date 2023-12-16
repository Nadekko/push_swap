/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:57:38 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/16 16:38:58 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_perror(char *err)
{
	while (*err)
		write(2, err++, 1);
}

int	ft_checkinput(char **av, int ac)
{
	int	i;

	i = 1;
	if (ac == 2)
		ft_split(av[1], ' ');
	else
		av += 1;
	while (i < ac)
	{
		if (!ft_isnbr(av[i]))
			return (0);
		i++;
	}
	if (!ft_checkdouble(av))
		return (0);
	return (1);
}

int	*ft_parse_arg(char **av)
{
	int		*stack;
	int		index;
	long	num;

	stack = NULL;
	nbr = 0;
	index = 0;
	stack = malloc(sizeof(int));
	if (!stack)
		exit (EXIT_FAILURE);
	while (*av)
	{
		nbr = ft_atol(*av);
		fill_stack(stack, nbr, index);
		av++;
	}
	return (stack);
}

void	*fill_array(int *stack, int nbr, int index)
{
	stack[index] = nbr;
}
