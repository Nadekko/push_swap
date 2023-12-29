/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 02:40:20 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/29 18:45:26 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void divide_lst(t_list *lst)
// {
// 	int len = stack_len(lst);
// 	int tier = len / 3;
// 	int i = 0;
// 	t_list *current = lst;
// 	t_list *part1;
// 	t_list *part2;
// 	t_list *part3;

// 	while (i < tier)
// 	{
// 		if (current != NULL)
// 			current = current->next;
// 		i++;
// 	}
// 	part1 = current;
// 	part2 = current->next;
// 	while (i < 2 * tier)
// 	{
// 		if (current != NULL)
// 			current = current->next;
// 		i++;
// 	}
// 	part3 = current->next;
// 	printf("tier1 = %ld, %ld\n", part1->data, part1->prev->data);
// 	printf("tier2 = %ld\n", current->data);
// 	printf("tier3 = %ld\n", part3->data);
// }
