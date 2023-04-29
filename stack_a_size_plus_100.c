/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_size_plus_100.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:20:51 by roberto           #+#    #+#             */
/*   Updated: 2023/04/26 16:20:53 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	buble_sort_plus_100(t_list *lk_tmp, int lst, t_list **l,
	t_list **lb)
{
	int			key_nbr;
	int			i;
	static int	j;

	i = 0;
	j = 1 + j;
	while (i < (lst / 8) * (j) && i++ < (lst - 1))
		lk_tmp = lk_tmp->next;
	key_nbr = *(int *)lk_tmp->content;
	lk_tmp = (*l);
	i = 0;
	while (lk_tmp != NULL)
	{
		if (*(int *)lk_tmp->content <= key_nbr)
		{
			ft_rotate_direction(l, lb, i, 1);
			lk_tmp = *l;
			i = 0;
		}
		else
		{
			lk_tmp = lk_tmp->next;
			i++;
		}
	}
}

void	stack_a_size_plus_100(t_list **l_num, t_list **lb_num, int lst_size_sa)
{
	t_list	*lk_numbers;
	t_list	*tmp;
	int		j;

	j = 0;
	lk_numbers = NULL;
	lk_numbers = ft_duplicate_list(*l_num, lk_numbers);
	sort_stack_k(&lk_numbers);
	while (j < 7)
	{
		tmp = lk_numbers;
		buble_sort_plus_100(tmp, lst_size_sa, l_num, lb_num);
		j++;
	}
	(void)tmp;
	(void)lb_num;
	(void)lst_size_sa;
	ft_lstclear(&lk_numbers, &free);
}
