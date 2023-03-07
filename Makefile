RM = rm -f

CC = gcc
FLAGS = -Wall -Wextra -Werror

LIBFT= -L libft -lft

NAME = push_swap
SRC = ft_push_swap.c

OBJ = $(SRC:.c=.o)
#INCLUDE = push_swap.h

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJ) $(BONUSOBJ)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: bonus all clean fclean re
