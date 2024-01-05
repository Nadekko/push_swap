/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:31:50 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/03 18:40:31 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_chunks(t_list **lst)
{
	int		i;
	int		chunk_count;
	int		chunk_size;
	t_list	*temp;

	chunk_count = 1;
	temp = *lst;
	chunk_size = stack_len(*lst) / 3;
	while (temp)
	{
		i = 0;
		printf("Chunk %d : ", chunk_count);
		while (i < chunk_size && temp)
		{
			printf("%ld\n", temp->data);
			temp = temp->next;
			i++;
		}
		chunk_count++;
	}
	return (chunk_count);
}

// void	find_smallest_chunk(t_list **lst)
// {
// 	t_list *temp;
// 	int 	chunk[3];
// 	int		i = 0;

// 	chunk[3] = split_chunks(lst);
// 	temp = *lst;
// 	printf("small chunk ? = %d", chunk[i]);
// 	i++;
// 	// printf("small chunk ? = %d", chunk[2]);
// 	// printf("small chunk ? = %d", chunk[3]);
// }