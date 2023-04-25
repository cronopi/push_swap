/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazurmen <nazurmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:47:18 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/24 15:44:53 by nazurmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_3_more(t_list **l, t_list *h_tmp, t_list *l_tmp,
	int print)
{
	if ((*l)->content == h_tmp->content
		&& (*l)->next->content == l_tmp->content)
		ft_rotate_a(l, print);
	else if ((*l)->content == l_tmp->content
		&& (*l)->next->content == h_tmp->content)
	{
		ft_swap_a(l, print);
		ft_rotate_a(l, print);
	}
	else if ((*l)->next->content == h_tmp->content
		&& (*l)->next->next->content == l_tmp->content)
		ft_reverse_rotate_a(l, print);
}

void	ft_sort_3(t_list **l_numbers, int print)
{
	t_list	*h_tmp;
	t_list	*l_tmp;

	l_tmp = ft_return_lowerst_number(*l_numbers);
	h_tmp = ft_return_highest_number(*l_numbers);
	if (ft_lstsize(*l_numbers) == 3)
	{
		if ((*l_numbers)->next->content == l_tmp->content
			&& (*l_numbers)->next->next->content == h_tmp->content)
			ft_swap_a(l_numbers, print);
		else if ((*l_numbers)->content == h_tmp->content
			&& (*l_numbers)->next->next->content == l_tmp->content)
		{
			ft_swap_a(l_numbers, print);
			ft_reverse_rotate_a(l_numbers, print);
		}
		else
			ft_sort_3_more(l_numbers, h_tmp, l_tmp, print);
	}
}
