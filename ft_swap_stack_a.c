/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:58:48 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:58:52 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_a(t_list **l_numbers, int print)
{
	if (ft_lstsize(*l_numbers) <= 1)
		return ;
	swap_stack((*l_numbers), (*l_numbers)->next);
	if (print == 1)
		write(1, "sa\n", 3);
}
