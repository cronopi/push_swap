/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:38:56 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:38:57 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_rotate_a(t_list **l_numbers)
{
	t_list	*last;
	t_list	*tmp;

	if (ft_lstsize(*l_numbers) <= 1)
		return ;
	last = ft_lstlast(*l_numbers);
	ft_lstadd_front(l_numbers, last);
	tmp = *l_numbers;
	while (tmp->next != last)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	write(1, "rra\n", 4);
}
