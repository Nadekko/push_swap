/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:58:00 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/19 20:35:48 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				current_index;
	int				final_index;
	long			data;
	int				size;

	struct s_list	*target_node;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

//*						HANDLE INPUT				*//

char				**ft_split(const char *str, char c);
long				ft_atol(char *str);
int					is_digit(char c);
int					is_nbr(char *av);
int					error_repeat(char **av);
int					error_input(char **av);
void				stack_init(t_list **a, char **av);

//*						INIT LISTE					*//

void				lstadd_back(t_list **lst, t_list *new_node);
void				lstprint(t_list *lst);
int					stack_len(t_list *lst);
t_list				*lstnext(t_list *lst);
t_list				*create_node(long value);

//*___________________HANDLE ERROR-FREE______________*//
void				print_error(char *err);

//*						COMMAND						*//
void				do_sa(t_list **a);
void				do_sb(t_list **b);
void				do_ss(t_list **a, t_list **b);

void				do_ra(t_list **a);
void				do_rb(t_list **b);
void				do_rr(t_list **a, t_list **b);

#endif