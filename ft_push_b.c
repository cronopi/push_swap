/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:24:00 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/18 11:07:51 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_b(t_list **l_numbers, t_list **lb_numbers, int print)
{
	t_list	*back_up;
	t_list	*new_numbers;
	int		*duplicate;

	duplicate = (int *)(*l_numbers)->content;
	new_numbers = ft_lstnew(duplicate);
	ft_lstadd_front(lb_numbers, new_numbers);
	back_up = (*l_numbers)->next;
	(*l_numbers)->next = NULL;
	free(*l_numbers);
	(*l_numbers) = back_up;
	if (print == 1)
		write(1, "pb\n", 3);
}
