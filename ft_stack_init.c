/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:08:23 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/08 20:11:03 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_double_list	*init_double_list(void)
{
	t_double_list	*list;

	list = (t_double_list *)malloc(sizeof(t_double_list));
	if (!list)
		return (NULL);
	if (list)
		list->head = NULL;
		list->tail = NULL;
		list->size = 0;
	return (list);
}
/*void	*add_to_head(t_double_node *list, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	if (new_node)
	{
		new_node->data = data;
		new_node->next = list->head;
		new_node->prev = NULL;
	}
	if (list->head != NULL)
		list->head->prev = new_node;
	else
		list->tail = new_node;
	return (new_node);
}*/
