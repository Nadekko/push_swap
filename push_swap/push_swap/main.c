/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:22:48 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/12 19:40:47 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*stack_a;

	stack_a = NULL;
	if (ac < 2)
		return (0);
	else
	{
		if (!ft_checkinput(av, ac))
		{
			ft_perror("Error\n");
			return (0);
		}
		printf("av[1] == %s", *av);
		++av;
		stack_a = ft_parse_arg(av);
		if (stack_a == NULL)
			ft_exit_error(&stack_a);
		printf("Stack_A content : ");
		ft_printf_stack(stack_a);
	}
	return (0);
}
