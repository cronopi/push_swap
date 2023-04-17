/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:29:46 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/17 10:49:38 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_swap(int ac, char **av)
{
	int		i;
	int		j;
	int		*nbr;
	t_list	*new_numbers;
	t_list	*l_numbers;
	t_list	*lb_numbers;

	i = 1;
	j = 0;
	l_numbers = NULL;
	lb_numbers = NULL;
	if (ft_check_numbers(av, ac) == 0)
		return ;
	while (i < ac)
	{
		//esto es igual
		if (av[i][j])
		{
			while (av[i][j] && av[i][j] == ' ')
				j++;
		}
		if (!av[i][j])
		{
			j = 0;
			i++;
		}
		nbr = malloc(sizeof(int));
		if (!nbr)
			return ;
		*nbr = ft_atoi(&av[i][j]);
		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(&l_numbers, new_numbers);
		while (av[i][j] && av[i][j] != ' ')
		{
			j++;
		}
		if (av[i][j])
		{
			while (av[i][j] && av[i][j] == ' ')
				j++;
		}
		if (!av[i][j])
		{
			j = 0;
			i++;
		}
	}
	if (ft_check_for_duplicates(l_numbers) == 0)
		return ;
	ft_sort_stack(&l_numbers, &lb_numbers);
	ft_print_stack(&l_numbers, &lb_numbers, 's');
	ft_lstclear(&l_numbers, &free);
	ft_lstclear(&lb_numbers, &free);
}

int	main(int ac, char **av)
{
	ft_push_swap(ac, av);
	return (0);
}
