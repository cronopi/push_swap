#include "ft_push_swap.h"

/*ft_sort_stack();
	// " 3 9 6 7 78" tiene que coger los números por separado.
*/

void	ft_push_swap(int ac, char **av)
{
	int i;
	int *nbr;
	t_list *new_numbers;

	t_list *l_numbers;
	t_list *lb_numbers;

	i = 1;
	l_numbers = NULL;
	lb_numbers = NULL;
	if (ft_check_numbers(av, ac) == 0)
		return ;
	while (i < ac)
	{
		nbr = malloc(sizeof(int));
		if (!nbr)
			return ;
		*nbr = ft_atoi(av[i]);
		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(&l_numbers, new_numbers);
		i++;
	}
	if (ft_check_for_duplicates(l_numbers) == 0)
		return ;
	//ft_swap_a(&l_numbers);
	//ft_swap_b(t_list **lb_numbers)
	//ft_push_b(&l_numbers, &lb_numbers);
	//ft_rotate_a(&l_numbers);
	//ft_reverse_rotate_a(&l_numbers);
	ft_sort_stack(&l_numbers, &lb_numbers);
	//ft_return_lowerst_number(&l_numbers);

/*	printf("este es el stack B despues de la llamada a la funcion\n");
	ft_print_stack(&l_numbers, &lb_numbers, 'b');

	printf("este es el stack A despues de la llamada a la funcion\n");
	ft_print_stack(&l_numbers, &lb_numbers, 'a');

*/

	ft_lstclear(&l_numbers, &free);
	ft_lstclear(&lb_numbers, &free);
}

int	main(int ac, char **av)
{
	ft_push_swap(ac ,av);
	return (0);
}
