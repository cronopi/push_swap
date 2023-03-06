#include "ft_push_swap.h"

void	ft_push_swap(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		while(av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		j = 0;
		//printf("esto es%i\n", i);
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

*/
