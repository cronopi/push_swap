/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_both.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:40:08 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:40:09 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_rotate_both(t_list **l_numbers, t_list **lb_numbers)
{
	ft_reverse_rotate_a(l_numbers);
	ft_reverse_rotate_b(lb_numbers);
}
