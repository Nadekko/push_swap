/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:58:00 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/29 19:58:31 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_list
{
	long			data;
	int				index;
	int				position;

	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

//*						HANDLE INPUT					*//

char				**ft_split(const char *str, char c);
long				ft_atol(char *str);
int					is_digit(char c);
int					is_nbr(char *av);
int					error_repeat(char **av);
int					error_input(char **av);
void				stack_init(t_list **a, char **av);

//*						INIT LISTE						*//

void				lstadd_back(t_list **lst, t_list *new_node);
void				lstprint(t_list *lst);
int					stack_len(t_list *lst);
t_list				*lstlast(t_list *lst);
t_list				*create_node(long value);

//*						HANDLE ERROR-FREE				*//
void				print_error(char *err);
void				lst_delone(t_list *lst);
void				lst_clear(t_list **lst);
int					ft_free(char **str, int size);

//*							COMMAND						*//
void				do_sa(t_list **a);
void				do_sb(t_list **b);
void				do_ss(t_list **a, t_list **b);

void				do_ra(t_list **a);
void				do_rb(t_list **b);
void				do_rr(t_list **a, t_list **b);

void				do_rra(t_list **a);
void				do_rrb(t_list **b);
void				do_rrr(t_list **a, t_list **b);

void				do_pa(t_list **b, t_list **a);
void				do_pb(t_list **a, t_list **b);

//*							ALGO						*//
int					is_sorted(t_list *lst);
int					find_min(t_list *lst);
int					find_max(t_list *lst);
void				put_index(t_list *lst, int lst_len);
void				find_index(t_list *lst);
long				is_abs(long n);
void				get_position(t_list *lst);
// void				find_tiniest(t_list **lst);
// void				find_highest(t_list **lst); 
// int					find_best_pos(t_list **lst, t_list **hold);
// t_list				*set_target_node(t_list **lst, long target);

//*						 SORT THREE						*//
void				sort_tree(t_list **lst);

//*					     SORT FIVE						*//
void				sort_stack(t_list **lst, t_list **hold);
void				divide_lst(t_list *lst);
// void				insert_at_pos(t_list **lst, int pos, long target);

#endif