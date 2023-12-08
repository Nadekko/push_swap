/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:23:15 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/08 20:16:24 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_node
{
	int				data;

	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*current;
}					t_node;
/*struct s_stack_node	*target_node;
 */

typedef struct s_double_list
{
	t_stack_node	*head;
	t_stack_node	*tail;
	size_t			size;
}					t_double_list;

// Handle errors
void				ft_perror(char *err);
char				ft_getint(char *s);
long				ft_checkerror(char **av);
char				**ft_checkrepeat(char **str);

// Stack initiation

// Node initiation

// Stack utils

// Commands

// Algorithms

#endif
