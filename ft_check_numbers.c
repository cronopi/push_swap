/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazurmen <nazurmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:19:58 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/24 15:41:25 by nazurmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_check_numbers(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		while (av[j][i])
		{
			if (av[j][i] != '-' && av[j][i] != ' '
				&& !(av[j][i] >= '0' && av[j][i] <= '9'))
			{
				ft_printf("Error\n");
				return (0);
			}
			i++;
		}
		j++;
		i = 0;
	}
	return (1);
}
