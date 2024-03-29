/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:21:07 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 09:21:07 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_duplicate_list(t_list *l_numbers, t_list *lk_numbers)
{
	t_list	*new_numbers;
	int		*nbr;

	while (l_numbers != NULL)
	{
		nbr = malloc(sizeof(int));
		*nbr = *(int *)l_numbers->content;
		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(&lk_numbers, new_numbers);
		l_numbers = l_numbers->next;
	}
	return (lk_numbers);
}
