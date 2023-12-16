/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:32:30 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/11 15:18:54 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_double_list	*a;
	t_double_list	*b;
	int				*stack;

	a = NULL;
	b = NULL;
	stack = 0;
	if (ac < 2)
	{
		ft_perror("Error\n");
		return (-1);
	}
	else if (ac == 2)
	{
		stack = ft_parse_split(av);
		printf("%d", stack[i++]);
	}
	else
	{
		av += 1;
		stack = ft_parse_arg(av, ac);
		int i = 0;
		while (i < 3)
			printf("%d\n", stack[i++]);
	}
	if (stack)
		free(stack);
	free (stack);
	return (0);
}
