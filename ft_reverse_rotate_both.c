/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_both.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazurmen <nazurmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:40:08 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/24 15:45:37 by nazurmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_rotate_both(t_list **l_numbers, t_list **lb_numbers,
	int print)
{
	ft_reverse_rotate_a(l_numbers, 0);
	ft_reverse_rotate_b(lb_numbers, 0);
	if (print == 1)
		write(1, "rrr\n", 4);
}
