#include "ft_push_swap.h"

t_list *ft_return_lowerst_number(t_list *l_numbers)
{
	t_list *low_nbr;
	/*
	int test;

	test = 0;
	tener una variable que pueda recoger lo que necesite dependiendo de la llamada
	para el bucle while test = null test = 25 test = 50
	*/

	low_nbr = l_numbers;
	while (l_numbers != NULL) // key_nbr;
	{
		if (*(int *)low_nbr->content > *(int *)l_numbers->content)
			low_nbr = l_numbers;
		l_numbers = (l_numbers)->next;
	}
	return (low_nbr);
}
