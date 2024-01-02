/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:23:00 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/02 16:48:27 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(char *err)
{
	while (*err)
		write(2, err++, 1);
	exit (EXIT_FAILURE);
}

void	free_tab(char **str)
{
	int	i;

	i = -1;
	while(str[++i])
		free(str[i]);
	free(str);
	str = NULL;
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

int	is_empty(t_list *lst)
{
	if (lst == NULL)
		return (1);
	return (0);
}
