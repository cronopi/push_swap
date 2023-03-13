#include "ft_push_swap.h"

//ft_lstnew(void *content);
void	ft_push_swap(int ac, char **av)
{
	int i;
	int *nbr;
	t_list *l_numbers;
	t_list *new_numbers;

	i = 1;
	l_numbers = NULL;
	while (i < ac)
	{
		nbr = malloc(sizeof(int));
		if (!nbr)
			return (0);
		*nbr = ft_atoi(av[i]);

		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(&l_numbers, new_numbers);
		printf("que es estooooo: %i\n", *(int *)l_numbers->content);
		i++;
	}
	while (l_numbers)
	{

	}
}

int	main(int ac, char **av)
{

	ft_push_swap(ac ,av);
	return (0);
}

/*
imprimirlos
transformarlos a int

funcion que checkee si hay números duplicados.
funcion que checkee si son o no números (?)

*/
