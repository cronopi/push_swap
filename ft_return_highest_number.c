#include "ft_push_swap.h"

t_list *ft_return_highest_number(t_list *l_numbers)
{
	t_list *highest_nbr;

	highest_nbr = l_numbers;
	while (l_numbers != NULL)
	{
		if (*(int *)highest_nbr->content < *(int *)(l_numbers)->content)
			highest_nbr = l_numbers;
		l_numbers = (l_numbers)->next;
	}
	return (highest_nbr);
}
