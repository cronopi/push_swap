/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_lowest_number.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:32:34 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/18 11:03:38 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_return_lowerst_number(t_list *l_numbers)
{
	t_list	*low_nbr;

	low_nbr = l_numbers;
	while (l_numbers != NULL)
	{
		if (*(int *)low_nbr->content > *(int *)l_numbers->content)
			low_nbr = l_numbers;
		l_numbers = (l_numbers)->next;
	}
	return (low_nbr);
}
