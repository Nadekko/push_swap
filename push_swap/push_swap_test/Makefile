CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_error.c /
		ft_push_node.c ft_reverse_node.c ft_rotate_node.c ft_swap_node.c /
		ft_stack_init.c push_swap_utils.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rn -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus