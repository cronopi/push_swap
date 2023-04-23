/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_both.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:41:31 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:43:42 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_both(t_list **l_numbers, t_list **lb_numbers, int print)
{
	ft_rotate_a(l_numbers, 0);
	ft_rotate_b(lb_numbers, 0);
	if (print == 1)
		write(1, "rr\n", 3);
}
