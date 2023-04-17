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

void	ft_rotate_both(t_list **l_numbers, t_list **lb_numbers)
{
	ft_rotate_a(l_numbers);
	ft_rotate_b(lb_numbers);
}
