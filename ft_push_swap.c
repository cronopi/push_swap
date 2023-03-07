#include "ft_push_swap.h"

void	ft_push_swap(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_printf("que iso ah:%s\n", av[i]);
		ft_atoi(av[i]); //agregar los números de tipo int a una variable
		i++;
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
