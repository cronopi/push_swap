/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack_k.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:53:15 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 10:25:52 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_stack_k(t_list **lk_numbers)
{
	t_list	*lk_bside_numbers;

	lk_bside_numbers = NULL;
	while (ft_lstsize(*lk_numbers) > 3)
	{
		ft_stack_size_plus3(lk_numbers, &lk_bside_numbers, 1, 0);
	}
	ft_sort_3(lk_numbers, 0);
	while (ft_lstsize(lk_bside_numbers) != 0)
	{
		ft_push_a(lk_numbers, &lk_bside_numbers, 0);
	}
}
