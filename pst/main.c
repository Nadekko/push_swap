/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:22:48 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/11 19:14:55 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*stack_a;

	stack_a = NULL;
	if (ac < 2)
		return (0);
	else if (ac > 2)
	{
		if (!ft_checkinput(av, ac))
		{
			ft_perror("Error\n");
			return (0);
		}
		stack_a = ft_parse_arg(av);
		if (stack_a == NULL)
			ft_exit_error(&stack_a);
		av++;
		printf("Stack_A content : ");
		ft_printf_stack(stack_a);
	}
	free(stack_a);
	return (0);
}
