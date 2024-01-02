/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:37:34 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/02 16:47:05 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_list *lst)
{
	t_list *cpy;
	int i;

	cpy = lst;
	i = cpy->data;
	while (cpy)
	{
		if (cpy->data < i)
			i = cpy->data;
		cpy = cpy->next;
	}
	return (i);
}

int find_max(t_list *lst)
{
	int i;

	i = lst->data;
	while (lst)
	{
		if (lst->data > i)
			i = lst->data;
		lst = lst->next;
	}
	return (i);
}

int get_min_index(t_list **lst, int val)
{
	t_list *temp;
	int min_index;

	temp = *lst;
	min_index = temp->index;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->index < min_index && temp->index != val)
			min_index = temp->index;
	}
	return (min_index);
}

int get_max_index(t_list **lst, int val)
{
	t_list *temp;
	int max_index;

	temp = *lst;
	max_index = temp->index;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->index > max_index && temp->index != val)
			max_index = temp->index;
	}
	return (max_index);
}

int get_distance(t_list **lst, int index)
{
	t_list *temp;
	int distance;

	distance = 0;
	temp = *lst;
	while (temp)
	{
		if (temp->index == index)
			break;
		distance++;
		temp = temp->next;
	}
	return (distance);
}

long is_abs(long n)
{
	if (n < 0)
		n = -n;
	return (n);
}



// void	find_current_index(t_list *lst)
// {
// 	int	i;
// 	int	median;

// 	i = 1;
// 	if (!lst)
// 		return ;
// 	median = stack_len(lst) / 2;
// 	while (lst)
// 	{
// 		lst->index = i;
// 	}
// }
// void	find_tiniest(t_list **lst)
// {
// 	long	smallest;
// 	t_list	*current;

// 	if (!*lst)
// 		return ;
// 	smallest = (*lst)->data;
// 	current = (*lst)->next;
// 	while (current->next != NULL)
// 	{
// 		if (current->data < smallest)
// 			smallest = current->data;
// 		current = current->next;
// 	}
// 	printf("smallest is = %ld\n\n", smallest);
// }

// void	find_highest(t_list **lst)
// {
// 	long	biggest;
// 	t_list	*current;

// 	if (!lst)
// 		return ;
// 	biggest = (*lst)->data;
// 	current = (*lst)->next;
// 	while (current->next != NULL)
// 	{
// 		if (current->data > biggest)
// 			biggest = current->data;
// 		current = current->next;
// 	}
// 	printf("bigger is = %ld\n\n", biggest);
// }

// int	get_index(t_list **lst)
// {
// 	t_list	*current;

// 	current = *lst;
// 	while (current != NULL)
// 	{
// 		(*lst)->position++;
// 		printf("\n%d\n", (*lst)->position);
// 		current = current->next;
// 	}
// 	printf("\n%d\n", (*lst)->position);
// 	printf("\n%d\n", (*lst)->next->position);
// 	return ((*lst)->position);
// }

// int	find_best_pos(t_list **lst, t_list **hold)
// {
// 	t_list	*current;
// 	int		diff;

// 	current = *lst;
// 	int (best_pos) = 0;
// 	int (smallest_diff) = INT_MAX;
// 	while (current != NULL)
// 	{
// 		diff = is_abs((*hold)->data - current->data);
// 		if (diff < smallest_diff)
// 		{
// 			smallest_diff = diff;
// 			best_pos = current->data;
// 		}
// 		current = current->next;
// 	}
// 	return (best_pos);
// }

// void	insert_at_pos(t_list **lst, int pos, long target)
// {
// 	t_list	*current;
// 	t_list	*new;

// 	current = *lst;
// 	new = create_node(target);
// 	while (current != NULL && current->data != pos)
// 		current = current->next;
// 	if (current != NULL)
// 	{
// 		new->next = current->next;
// 		current->next->prev = new;
// 		current->next = new;
// 		new->prev = current;
// 	}
// }
