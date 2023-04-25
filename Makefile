RM = rm -f

CC = gcc
#FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
FLAGS = -Wall -Wextra -Werror

LIBFT= -L libft -lft

NAME = push_swap
SRC = ft_push_swap.c ft_print_stack.c ft_sort_stack.c ft_sort_stack_k.c ft_stack_side_plus_3.c\
ft_duplicate_list.c ft_return_highest_number.c ft_return_lowest_number.c ft_check_numbers.c\
ft_check_for_duplicates.c ft_reverse_rotate_a.c ft_reverse_rotate_b.c ft_reverse_rotate_both.c\
ft_rotate_a.c ft_rotate_b.c ft_rotate_both.c ft_swap_stack.c ft_swap_stack_a.c ft_swap_stack_b.c\
ft_push_a.c ft_push_b.c ft_Sort_3.c ft_swap_both_stacks.c stack_a_size_plus_100.c

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
