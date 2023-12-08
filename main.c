/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:32:30 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/08 18:38:12 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	long			num;
	char			**res;

	a = NULL;
	b = NULL;
	res = NULL;
	num = 0;
	if (ac < 2)
	{
		ft_perror("Error\n");
		return (-1);
	}
	else if (ac == 2)
	{
		res = ft_split(av[1]);
		num = ft_checkerror(res);
	}
	else
	{
		num = ft_checkerror(av);
		printf ("%ld", num);
	}
	return (0);
}
