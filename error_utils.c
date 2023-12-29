/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:23:00 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/29 19:49:53 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(char *err)
{
	while (*err)
		write(2, err++, 1);
	exit (EXIT_FAILURE);
}

void	lst_delone(t_list *lst)
{
	if (lst == NULL)
		return ;
	lst->prev = NULL;
	lst->next = NULL;
	free(lst);
}

void	lst_clear(t_list **lst)
{
	t_list	*temp;
	t_list	*next;

	if (lst == NULL)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		next = temp->next;
		lst_delone(temp);
		temp = next;
	}
	*lst = NULL;
}