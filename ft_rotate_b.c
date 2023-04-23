/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:41:24 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:41:25 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_b(t_list **lb_numbers, int print)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*lb_numbers) <= 1)
		return ;
	tmp = *lb_numbers;
	*lb_numbers = (*lb_numbers)->next;
	last = ft_lstlast(*lb_numbers);
	last->next = tmp;
	tmp->next = NULL;
	if (print == 1)
		write(1, "rb\n", 3);
}
