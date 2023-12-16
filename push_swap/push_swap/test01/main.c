/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:22:48 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/16 18:06:20 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*split_and_get_int(char *av)
{
	char	**res;
	int		*integers
	int		count = 0;
	int		i = 0;

	res = ft_split(av, " ");
	if (!res)
		exit (EXIT_FAILURE);
	while (res[count])
		count++;
	integers = malloc(count * sizeof(int));
	if (!integers)
	{
		free(res);
		exit (EXIT_FAILURE);
	}
	while (i < count)
	{
		integers[i] = ft_atoi(res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (integers);
}

int	*get_int_from_arg(char **av, int count)
{
	int		*integers;
	long	nbr;
	int		nbr_count = 0;

	integers = malloc(count * sizeof(int));
	if (!integers)
		exit (EXIT_FAILURE);
	while (i < count)
	{
		nbr = ft_atoi(av[i]);
		if (nbr == 0 && av[i][0] != '0')
			exit (EXIT_FAILURE);
		if (is_duplicate(integers, nbr_count, nbr))
			exit (EXIT_FAILURE);
		integers[nbr_count] = (int)nbr;
	}
	return (integers)
}

int	main(int ac, char **av)
{
	int	*integers;
 
	if (ac < 2)
		exit (EXIT_FAILURE);
	if (ac == 2)
		integers = split_and_get_int(av[1]);
	else
		integers = get_int_from_arg(av + 1, av - 1);
	free(integers)
	return (0);
}
