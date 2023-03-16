#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"


void	ft_print_stack(t_list **l_numbers, t_list **lb_numbers, char stack);
void	ft_push_swap(int ac, char **av);
int		ft_atoi(const char *str);

#endif
