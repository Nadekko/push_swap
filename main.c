/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:57:23 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/02 16:55:46 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *lst)
{
	t_list	*cpy;

	cpy = lst;
	while (cpy->next)
	{
		if (cpy->data > cpy->next->data)
			return (0);
		cpy = cpy->next;
	}
	return (1);
}

void	sort_stack(t_list **lst, t_list **hold)
{
	if (is_sorted(*lst) || stack_len(*lst) < 1)
		return ;
	else if (stack_len(*lst) <= 5)
		simple_sort(lst, hold);
	else
	{
		push_lowest(lst, hold);
		// push_back_to_lst(lst, hold);
		// push_biggest(lst,hold);
	}
}
int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (0);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	else
		av += 1;
	stack_init(&a, av);
	sort_stack(&a, &b);
	printf("STACK A\n");
	lstprint(a);
	printf("STACK B\n");
	lstprint(b);
	lst_clear(&a);
	lst_clear(&b);
	if (ac == 2)
		free_tab(av);
	return (0);
}

// printf("MIN IS : %d\n", find_min(a));
// printf("\n**stack a**\n");
// lstprint(a);
// printf("\n**stack b**\n");
// lstprint(b);
// printf("MAX IS : %d\n", find_max(a));
// printf("POS MIN IS : %d\n", find_index(a, find_min(a)));
// printf("POS MAX IS : %d\n", find_index(a, find_max(a)));

// do_pb(&a, &b);
// do_pb(&a, &b);
// do_pb(&a, &b);
// printf("\n**stack a**\n");
// lstprint(a);
// printf("\n");
// printf("\n**stack b**\n");
// lstprint(b);
// printf("\n");
// do_pa(&b, &a);
// do_pa(&b, &a);