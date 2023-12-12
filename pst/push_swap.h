/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:45:00 by andjenna          #+#    #+#             */
/*   Updated: 2023/12/12 19:38:15 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				current;

	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

/*					ERROR					*/
void				ft_perror(char *err);
long				ft_atol(char *nptr);
void				ft_free_stack(t_node **stack);
void				ft_exit_error(t_node **stack);

/*				HANDLE INPUT				*/
char				**ft_split(char const *s, char c);
int					ft_isnbr(char *av);
int					ft_isdigit(char c);
int					ft_strcmp(char *s1, char *s2);
int					ft_checkdouble(char **av);
int					ft_checkinput(char **av, int ac);
t_node				*ft_parse_arg(char **av);

/*				INITIALISATION				*/
t_node				*ft_init_stack(int value);
void				ft_free_stack(t_node **stack);
void				ft_exit_error(t_node **stack);
void				ft_add_to_stack(t_node **stack, long value);
t_node				*ft_lstlast(t_node *lst);
void				ft_printf_stack(t_node *stack);
void				ft_lstadd_back(t_node **lst, t_node *new);

/*					COMMAND					*/

#endif