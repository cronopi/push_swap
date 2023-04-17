/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:40:33 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:40:34 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_a(t_list **l_numbers)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*l_numbers) <= 1)
		return ;
	tmp = *l_numbers;
	*l_numbers = (*l_numbers)->next;
	last = ft_lstlast(*l_numbers);
	last->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}
