/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:10:02 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/10 20:33:40 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_perror(char *err)
{
	while (*err != '\0')
		write(2, err++, 1);
}

int	ft_getint(char *s)
{
	char	*res;

	res = s;
	while (*res)
	{
		if (!ft_isdigit(*res))
			return (-1);
		res++;
	}
	return (0);
}

int	ft_checkrepeat(char **str)
{
	size_t	size;
	size_t	i;
	size_t	j;

	size = 0;
	i = 0;
	while (str[size] != NULL)
		size++;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checkerror(char **av)
{
	int	i;

	i = 0;
	while (av[i] != NULL)
	{
		if (ft_getint(av[i]) == -1)
		{
			ft_perror("Error\n");
			exit(1);
		}
		if (ft_checkrepeat(av) == -1)
		{
			ft_perror("Error\n");
			exit(1);
		}
		i++;
	}
	return (0);
}
