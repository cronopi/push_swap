/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:29:46 by rcastano          #+#    #+#             */
/*   Updated: 2023/04/18 10:01:16 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	test( int i, int j, char **av)
{
	if (av[i][j])
	{
		while (av[i][j] && av[i][j] == ' ')
			j++;
	}
	return (j);
}

void	create_and_add_to_list(char **av, t_list **l_numbers, int i, int j)
{
	int		*nbr;
	t_list	*new_numbers;

	nbr = malloc(sizeof(int));
	if (!nbr)
		return ;
	*nbr = ft_atoi(&av[i][j]);
	new_numbers = ft_lstnew(nbr);
	ft_lstadd_back(l_numbers, new_numbers);
}

int	create_list(t_list **l_numbers, char **av, int i)
{
	int	j;

	j = 0;
	j = test(i, j, av);
	if (!av[i][j])
	{
		j = 0;
		i++;
	}
	create_and_add_to_list(av, l_numbers, i, j);
	while (av[i][j] && av[i][j] != ' ')
	{
		j++;
	}
	j = test(i, j, av);
	if (!av[i][j])
	{
		j = 0;
		i++;
	}
	return (i);
}

void	ft_push_swap(int ac, char **av)
{
	int		i;
	t_list	*l_numbers;
	t_list	*lb_numbers;

	i = 1;
	l_numbers = NULL;
	lb_numbers = NULL;
	if (ft_check_numbers(av, ac) == 0)
		return ;
	while (i < ac)
	{
		i = create_list(&l_numbers, av, i);
	}
	if (ft_check_for_duplicates(l_numbers) == 0)
		return ;
	ft_sort_stack(&l_numbers, &lb_numbers);
	ft_print_stack(&l_numbers, &lb_numbers, 's');
	//ft_swap_both_stacks(&l_numbers, &lb_numbers);
	ft_lstclear(&l_numbers, &free);
	ft_lstclear(&lb_numbers, &free);
}

int	main(int ac, char **av)
{
	ft_push_swap(ac, av);
	//system("leaks a.out")
	return (0);
}
