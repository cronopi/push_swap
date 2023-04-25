/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:59:10 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:59:10 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_b(t_list **lb_numbers, int print)
{
	if (ft_lstsize(*lb_numbers) <= 1)
		return ;
	swap_stack((*lb_numbers), (*lb_numbers)->next);
	if (print == 1)
		write(1, "sb\n", 3);
}
