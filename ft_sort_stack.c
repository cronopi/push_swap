/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:51:26 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/18 07:43:39 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	buble_sort(t_list *tmp, int lst, t_list **l, t_list **lb)
{
	int			key_nbr;
	int			i;
	static int	j;

	i = 0;
	j = 1 + j;
	while (i < (lst / 4) * (j) && i < (lst - 1))
	{
		tmp = tmp->next;
		i++;
	}
	key_nbr = *(int *)tmp->content;
	tmp = (*l);
	while (tmp != NULL)
	{
		if (*(int *)tmp->content <= key_nbr)
		{
			while (tmp != (*l))
				ft_reverse_rotate_a(l);
			ft_push_b(l, lb);
			tmp = (*l);
		}
		else
			tmp = tmp->next;
	}
}

void	stack_a_size_10_100(t_list **l_num, t_list **lb_num, int lst_size_sa)
{
	t_list	*lk_numbers;
	t_list	*tmp;
	int		j;

	j = 0;
	lk_numbers = NULL;
	lk_numbers = ft_duplicate_list(*l_num, lk_numbers);
	while (j < 3)
	{
		tmp = lk_numbers;
		buble_sort(tmp, lst_size_sa, l_num, lb_num);
		j++;
	}
}

void	ft_sort_stack(t_list **l_numbers, t_list **lb_numbers)
{
	int		lst_size_sa;

	lst_size_sa = ft_lstsize(*l_numbers);
	if (lst_size_sa > 10 && lst_size_sa <= 100)
	{
		stack_a_size_10_100(l_numbers, lb_numbers, lst_size_sa);
		while (ft_lstsize(*l_numbers) > 3)
			ft_stack_size_plus3(l_numbers, lb_numbers, 1);
		ft_sort_3(l_numbers, lb_numbers);
		while (ft_lstsize(*lb_numbers) > 0)
			ft_stack_size_plus3(lb_numbers, l_numbers, 2);
	}
	else
	{
		while (ft_lstsize(*l_numbers) > 3)
			ft_stack_size_plus3(l_numbers, lb_numbers, 1);
		ft_sort_3(l_numbers, lb_numbers);
		while (ft_lstsize(*lb_numbers) != 0)
			ft_push_a(l_numbers, lb_numbers);
	}
}
