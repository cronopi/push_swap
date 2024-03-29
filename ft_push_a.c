/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:23:11 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/29 18:27:51 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_a(t_list **l_numbers, t_list **lb_numbers, int print)
{
	t_list	*back_up;
	t_list	*new_numbers;
	int		*duplicate;

	duplicate = (int *)(*lb_numbers)->content;
	new_numbers = ft_lstnew(duplicate);
	ft_lstadd_front(l_numbers, new_numbers);
	back_up = (*lb_numbers)->next;
	(*lb_numbers)->next = NULL;
	free(*lb_numbers);
	(*lb_numbers) = back_up;
	if (print == 1)
		write(1, "pa\n", 3);
}
