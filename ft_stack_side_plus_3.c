/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_side_plus_3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:55:43 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 10:22:25 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_direction(t_list **l_numbers, t_list **lb_numbers, int i)
{
	int		lst_size;

	lst_size = ft_lstsize(*l_numbers);
	if (i > (lst_size / 2))
	{
		while (i < lst_size)
		{
			ft_reverse_rotate_a(l_numbers);
			i++;
		}
	}
	else
	{
		while (i)
		{
			ft_rotate_a(l_numbers);
			i--;
		}
	}
	ft_push_b(l_numbers, lb_numbers);
}

void	ft_stack_size_plus3(t_list **l_numbers, t_list **lb_numbers, int h_l)
{
	int		i;
	t_list	*tmp;
	t_list	*number;

	i = 0;
	tmp = (*l_numbers);
	if (h_l == 1)
		number = ft_return_lowerst_number(*l_numbers);
	else
		number = ft_return_highest_number(*l_numbers);
	while (tmp != number)
	{
		tmp = tmp->next;
		i++;
	}
	ft_rotate_direction(l_numbers, lb_numbers, i);
}
