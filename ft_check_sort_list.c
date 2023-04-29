/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:21:13 by roberto           #+#    #+#             */
/*   Updated: 2023/04/29 17:53:13 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_check_sort_list(t_list *l_numbers)
{
	while (l_numbers->next != NULL)
	{
		if (l_numbers->next != NULL && *(int *)l_numbers->content < *(int *)l_numbers->next->content)
			l_numbers = l_numbers->next;
		else
			return (1);
	}
	return (0);
}
