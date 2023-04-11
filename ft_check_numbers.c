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
			if (av[j][i] == 'a')
				return (0);
			if (av[j][i] < '0' && av[j][i] > '9')
				return (0);
			i++;
		}
		j++;
		i = 0;
	}
	return (1);
}
