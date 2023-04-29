/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:29:57 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/29 17:42:15 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

void	ft_push_a(t_list **l_numbers, t_list **lb_numbers, int print);
void	ft_push_b(t_list **l_numbers, t_list **lb_numbers, int print);
void	ft_swap_both_stacks(t_list **l_numbers, t_list **lb_numbers, int print);
void	ft_swap_a(t_list **l_numbers, int print);
void	ft_swap_b(t_list **lb_numbers, int print);
void	ft_rotate_a(t_list **l_numbers, int print);
void	ft_rotate_b(t_list **lb_numbers, int print);
void	ft_rotate_both(t_list **l_numbers, t_list **lb_numbers, int print);
void	ft_reverse_rotate_a(t_list **l_numbers, int print);
void	ft_reverse_rotate_b(t_list **lb_numbers, int print);
void	stack_a_size_plus_100(t_list **l_num, t_list **lb_num, int lst_size_sa);
void	ft_reverse_rotate_both(t_list **l_numbers, t_list **lb_numbers,
			int print);
void	ft_rotate_direction(t_list **l_numbers, t_list **lb_numbers,
			int i, int print);
void	ft_sort_3(t_list **l_numbers, int print);
int		ft_check_sort_list(t_list *l_numbers);
int		ft_check_for_duplicates(t_list *l_numbers);
int		ft_check_numbers(char **av, int ac);
void	swap_stack(t_list *a, t_list *b);
t_list	*ft_return_lowerst_number(t_list *l_numbers);
t_list	*ft_return_highest_number(t_list *l_numbers);
void	ft_stack_size_plus3_b(t_list **l_numbers, t_list **lb_numbers,
			int h_l, int print);
t_list	*ft_duplicate_list(t_list *l_numbers, t_list *lk_numbers);
void	ft_stack_size_plus3(t_list **l_numbers, t_list **lb_numbers,
			int h_l, int print);
void	sort_stack_k(t_list **lk_numbers);
void	ft_sort_stack(t_list **l_numbers, t_list **lb_numbers, int print);
void	ft_print_stack(t_list **l_numbers, t_list **lb_numbers, char stack);
void	ft_push_swap(int ac, char **av);

#endif
