RM = rm -f

CC = gcc
FLAGS = -Wall -Wextra -Werror

LIBFT= -L libft -lft

NAME = push_swap
SRC = ft_push_swap.c ft_print_stack.c

OBJ = $(SRC:.c=.o)
#INCLUDE = push_swap.h

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(OBJ) $(FLAGS) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJ) $(BONUSOBJ)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: bonus all clean fclean re
