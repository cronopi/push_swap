/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:51:26 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/29 18:07:02 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	rotate_lowers_key_numbers(t_list **l, t_list **lb, t_list **lk_tmp,
	int key_nbr)
{
	int	i;

	i = 0;
	while ((*lk_tmp) != NULL)
	{
		if (*(int *)(*lk_tmp)->content <= key_nbr)
		{
			ft_rotate_direction(l, lb, i, 1);
			(*lk_tmp) = *l;
			i = 0;
		}
		else
		{
			(*lk_tmp) = (*lk_tmp)->next;
			i++;
		}
	}
}

void	buble_sort(t_list *lk_tmp, int lst, t_list **l, t_list **lb)
{
	int			key_nbr;
	int			i;
	static int	j;

	i = 0;
	j = 1 + j;
	while (i < (lst / 8) * (j) && i < (lst - 1))
	{
		lk_tmp = lk_tmp->next;
		i++;
	}
	key_nbr = *(int *)lk_tmp->content;
	lk_tmp = (*l);
	rotate_lowers_key_numbers(l, lb, &lk_tmp, key_nbr);
}

void	stack_a_size_10_100(t_list **l_num, t_list **lb_num, int lst_size_sa)
{
	t_list	*lk_numbers;
	t_list	*tmp;
	int		j;

	j = 0;
	lk_numbers = NULL;
	lk_numbers = ft_duplicate_list(*l_num, lk_numbers);
	sort_stack_k(&lk_numbers);
	while (j < 3)
	{
		tmp = lk_numbers;
		buble_sort(tmp, lst_size_sa, l_num, lb_num);
		j++;
	}
	(void)tmp;
	(void)lb_num;
	(void)lst_size_sa;
	ft_lstclear(&lk_numbers, &free);
}

void	ft_sort_until_three(t_list **l_numbers, t_list **lb_numbers, int print)
{
	while (ft_lstsize(*l_numbers) > 3)
		ft_stack_size_plus3(l_numbers, lb_numbers, 1, print);
	ft_sort_3(l_numbers, print);
	while (ft_lstsize(*lb_numbers) > 0)
		ft_stack_size_plus3_b(lb_numbers, l_numbers, 2, print);
}

void	ft_sort_stack(t_list **l_numbers, t_list **lb_numbers, int print)
{
	int		lst_size_sa;

	lst_size_sa = ft_lstsize(*l_numbers);
	if (lst_size_sa > 100)
	{
		stack_a_size_plus_100(l_numbers, lb_numbers, lst_size_sa);
		ft_sort_until_three(l_numbers, lb_numbers, print);
	}
	else if (lst_size_sa > 10 && lst_size_sa <= 100)
	{
		stack_a_size_10_100(l_numbers, lb_numbers, lst_size_sa);
		ft_sort_until_three(l_numbers, lb_numbers, print);
	}
	else
	{
		while (ft_lstsize(*l_numbers) > 3)
			ft_stack_size_plus3(l_numbers, lb_numbers, 1, print);
		ft_sort_3(l_numbers, print);
		while (ft_lstsize(*lb_numbers) != 0)
			ft_push_a(l_numbers, lb_numbers, print);
	}
	(void)print;
}
