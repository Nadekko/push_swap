/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:44:04 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/11 19:17:54 by andjenna         ###   ########.fr       */
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
	while (av[i])
	{
		if (ac == 2)
			ft_split(av[i], ' ');
		if (!ft_isnbr(&av[i]))
			return (0);
		i++;
	}
	if (ft_checkdouble(av))
		return (0);
	return (1);
}

t_node	*ft_parse_arg(char **av)
{
	t_node	*stack_a;
	int		index;
	long	num;

	stack_a = NULL;
	num = 0;
	index = 0;
	if (!stack_a)
		ft_exit_error(&stack_a);
	while (*av)
	{
		num = ft_atol(*av);
		stack_a = ft_add_to_stack(stack_a, num);
		av++;
	}
	return (stack_a);
}

void	ft_printf_stack(t_node *stack)
{
	t_node	*current;

	current = stack;
	while (current != NULL)
	{	
		printf("%d", current->value);
		current = current->next;
	}
	printf("\n");
}