/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:10:02 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/08 20:45:10 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_perror(char *err)
{
	while (*err != '\0')
		write(2, err++, 1);
}

char	ft_getint(char *s)
{
	char	*res;

	res = s;
	while (*res)
	{
		if (!ft_isdigit(*res))
			return (NULL);
		res++;
	}
	return (res);
}

char	**ft_checkrepeat(char **str)
{
	size_t	size;
	size_t	i;
	size_t	j;

	size = 0;
	i = 0;
	while (str[size] != '\0')
		size++;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
			{
				ft_perror("Error\n");
				return (NULL);
			}
			j++;
		}
		i++;
	}
	return (str);
}

long	ft_checkerror(char **av)
{
	int		i;
	long	num;

	i = 1;
	num = 0;
	while (av[i] != NULL)
	{
		if (ft_getint(av[i]) == NULL)
		{
			ft_perror("Error\n");
			return (-1);
		}
		if (ft_checkrepeat(av[i]) == NULL)
		{
			ft_perror("Error\n");
			return (-1);
		}	
		num = ft_atol(av[i]);
		if (num < INT_MIN || num > INT_MAX)
		{
			ft_perror("Error\n");
			return (-1);
		}
		i++;
	}
	return (num);
}
