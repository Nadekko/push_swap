/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:58:00 by andjenna          #+#    #+#             */
/*   Updated: 2024/01/05 18:20:14 by andjenna         ###   ########.fr       */
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
	int				group;

	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

//*						HANDLE INPUT					*//

int					is_digit(char c);
int					is_nbr(char *av);
int					error_repeat(char **av);
int					error_input(char **av);
long				ft_atol(char *str);
char				**ft_split(const char *str, char c);
void				stack_init(t_list **a, char **av);

//*						INIT LISTE						*//

int					stack_len(t_list *lst);
void				lstadd_back(t_list **lst, t_list *new_node);
void				lstprint(t_list *lst);
void				put_index(t_list *lst, int lst_len);
void				reset_index(t_list *lst);
void				reset_midpoint(t_list **lst);
t_list				*lstlast(t_list *lst);
t_list				*create_node(long value);

//*						HANDLE ERROR-FREE					*//
int					is_empty(t_list *lst);
int					is_sorted(t_list *lst);
void				print_error(char *err);
void				lst_delone(t_list *lst);
void				lst_clear(t_list **lst);
void				free_tab(char **str);

//*							COMMAND							*//
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

//*							ALGO UTILS						*//
int					get_distance(t_list **lst, int index);
int					get_mid_data(t_list **lst);
int					get_min_index(t_list **lst);
int					find_group_max(t_list *hold);
void				find_group_limits(t_list *hold, int *start_index, int *end_index);
void				reset_midpoint(t_list **lst);
void				set_midpoint_group(t_list **hold);

//*							   SORT							*//
void				sort_stack(t_list **lst, t_list **hold);
void				simple_sort(t_list **lst, t_list **hold);
void				sort_tree(t_list **lst);
void				sort_four(t_list **lst, t_list **hold);
void				sort_five(t_list **lst, t_list **hold);
void				move_less_than_midpoint(t_list **lst, t_list **hold);
void				move_more_than_midpoint(t_list **hold, t_list **lst);

#endif

// int					get_max_index(t_list **lst);
// int					find_max(t_list *lst);
// int					find_min(t_list *lst);
// int					find_best_pos(t_list **lst, t_list **hold);
// int					get_chunk(t_list**lst);
// int 					find_midpoint_value(t_list *lst);
// int					split_chunks(t_list **lst);
// int					group_size(t_list *hold, int target_group);
// long					is_abs(long n);
// void					push_back_to_lst(t_list **lst, t_list **hold);
// void					get_position(t_list *lst);
// void					find_tiniest(t_list **lst);
// void					find_highest(t_list **lst); 
// void					find_index(t_list *lst);
// void					push_lowest(t_list **lst, t_list **hold);
// void					push_biggest(t_list **lst, t_list **hold);
// void					find_smallest_chunk(t_list **lst);
// void					radix_sort(t_list **lst, t_list **hold);
// t_list				*set_target_node(t_list **lst, long target);