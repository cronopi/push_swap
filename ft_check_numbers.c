#include "ft_push_swap.h"

int	ft_check_numbers(char **av, int ac)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		while(av[j][i])
		{
			//if (av[j][i] < '0' && av[j][i] > '9')
			//si no es un espacio o un numero fuera
			//si no es un numero o un espacio fuera
			//if ((av[j][i] < '0' && av[j][i] > '9') || av[j][i] == ' ')
			if (av[j][i] != ' ' && !(av[j][i] >= '0' && av[j][i] <= '9'))
				return (0);
//				if(av[j][i] == " ")
//					ft_split(av[j][i], " ");
//				else
			i++;
		}
		j++;
		i = 0;
	}
	return (1);
}
