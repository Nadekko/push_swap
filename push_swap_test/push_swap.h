/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:23:15 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/10 20:29:40 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_STACK_SIZE 100

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct s_node
{
	int				data;

	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*current;
}					t_node;
/*struct s_node	*target_node;*/

typedef struct s_double_list
{
	t_node			*head;
	t_node			*tail;
	size_t			size;
}					t_double_list;

// Handle errors
void				ft_perror(char *err);
int					ft_getint(char *s);
int					ft_checkerror(char **av);
int					ft_checkrepeat(char **str);

// Stack initiation
t_double_list		*init_double_list(void);
int					*ft_parse_arg(char **av, int ac);
int					*ft_parse_split(char **av);

// Node initiation

// Stack utils
long				ft_atol(const char *str);
// Commands
void				ft_push_list(t_double_list *list, t_double_list *push);
void				ft_push(t_double_list *a, t_double_list *b);
void				ft_rotdown_list(t_double_list *list);
void				ft_rotdown_both(t_double_list *a, t_double_list *b);
void				ft_rotup_list(t_double_list *list);
void				ft_rotup_both(t_double_list *a, t_double_list *b);
void				ft_swap_list(t_double_list *list);
void				ft_swap_both(t_double_list *a, t_double_list *b);
// Algorithms

#endif
