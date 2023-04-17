/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_for_duplicates.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:18:27 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:19:30 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_check_for_duplicates(t_list *l_numbers)
{
	t_list	*tmp;

	tmp = l_numbers->next;
	while (l_numbers->next != NULL)
	{
		while (tmp != NULL)
		{
			if (*(int *)l_numbers->content == *(int *)tmp->content)
			{
				ft_printf("Error\n");
				return (0);
			}
			tmp = tmp->next;
		}
		l_numbers = l_numbers->next;
		tmp = l_numbers->next;
	}
	return (1);
}
