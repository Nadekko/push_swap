/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:25:01 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/11 17:55:51 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_checkdouble(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 1;
		while (av[j])
		{
			if (j != i && ft_strcmp(av[i], av[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long	ft_atol(char *nptr)
{
	int		neg;
	long	num;

	neg = 1;
	num = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			neg *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - 48);
		nptr++;
	}
	if (num < INT_MIN || num > INT_MAX)
	{
		ft_perror("Error\n");
		exit (EXIT_FAILURE);
	}
	return (num * neg);
}

int	ft_isnbr(char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((av[1][0] == '+' || av[1][0] == '-') && av[1][1] != '\0')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i][j]))
			return (0);
		i++;
	}
	return (1);
}
