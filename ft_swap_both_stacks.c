/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_both_stacks.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:41:16 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/18 09:41:16 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_both_stacks(t_list **l_numbers, t_list **lb_numbers)
{
	ft_swap_a(l_numbers);
	ft_swap_b(lb_numbers);
	write(1, "ss\n", 3);
}
