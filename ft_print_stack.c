/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:21:21 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:21:21 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_putlst(t_list *lst)
{
	while (lst != NULL)
	{
		ft_printf("imprime la lista: %i\n", *(int *)lst->content);
		lst = lst->next;
	}
	ft_printf("_________________________________\n");
}

void	ft_print_stack(t_list **l_numbers, t_list **lb_numbers, char stack)
{
	if (stack == 'a')
		ft_putlst(*l_numbers);
	else if (stack == 'b')
		ft_putlst(*lb_numbers);
	else
	{
		ft_putlst(*l_numbers);
		ft_putlst(*lb_numbers);
	}
}
