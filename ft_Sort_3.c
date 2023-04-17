/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:47:18 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 10:39:01 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_3_more(t_list **l, t_list **lb, t_list	*h_tmp, t_list	*l_tmp)
{
	if ((*l)->content == h_tmp->content
		&& (*l)->next->content == l_tmp->content)
		ft_rotate_a(l);
	else if ((*l)->content == l_tmp->content
		&& (*l)->next->content == h_tmp->content)
	{
		ft_swap_a(l);
		ft_rotate_a(l);
	}
	else if ((*l)->next->content == h_tmp->content
		&& (*l)->next->next->content == l_tmp->content)
		ft_reverse_rotate_a(l);
	(void)lb;
}

void	ft_sort_3(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*h_tmp;
	t_list	*l_tmp;

	l_tmp = ft_return_lowerst_number(*l_numbers);
	h_tmp = ft_return_highest_number(*l_numbers);
	if (ft_lstsize(*l_numbers) == 3)
	{
		if ((*l_numbers)->next->content == l_tmp->content
			&& (*l_numbers)->next->next->content == h_tmp->content)
			ft_swap_a(l_numbers);
		else if ((*l_numbers)->content == h_tmp->content
			&& (*l_numbers)->next->next->content == l_tmp->content)
		{
			ft_swap_a(l_numbers);
			ft_reverse_rotate_a(l_numbers);
		}
		else
			ft_sort_3_more(l_numbers, lb_numbers, h_tmp, l_tmp);
	}
}
