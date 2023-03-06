RM = rm -f

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = push_swap
SRC =

OBJ = $(SRC:.c=.o)
INCLUDE = push_swap.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
