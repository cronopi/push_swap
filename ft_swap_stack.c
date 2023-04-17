/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:00:11 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 10:00:11 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	swap_stack(t_list *a, t_list *b)
{
	t_list	*tmp;

	tmp = a->content;
	a->content = b->content;
	b->content = tmp;
}
