#include "ft_push_swap.h"

/*
	check_dup();
	check_b_empty();
	order_stackA();
	sa(); // intercambia los dos primeros elementos encima del stack a. No hace nada si hay uno o menos elementos.
	sb(); // intercambia los dos primeros elementos encima del stack b. No hace nada si hay uno o menos elementos
	ss(); // swap a y swap b a la vez.
	pa(); // - toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.
	pb(); toma el primer elemento del stack a y lo pone encima del stack b.No hace nada si a está vacío.
	ra();
	rb();
	rr();
	rra();
	rrb();
	rrr();

*/

void ft_swap_a(t_list *l_numbers)
{
	if (ft_lstsize(l_numbers) <= 1)
		return ;
	printf("imprime el swap de a: %i\n", *(int *)l_numbers->content);
	l_numbers = l_numbers->next;
	printf("imprime el swap de a: %i\n", *(int *)l_numbers->content);

}

void	ft_push_swap(int ac, char **av)
{
	int i;
	int *nbr;
	t_list *l_numbers;
	t_list *new_numbers;
	t_list *lb_numbers;

	i = 1;
	l_numbers = NULL;
	lb_numbers = NULL;
	while (i < ac)
	{
		nbr = malloc(sizeof(int));
		if (!nbr)
			return ;
		*nbr = ft_atoi(av[i]);

		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(&l_numbers, new_numbers);
		printf("que es estooooo: %i\n", *(int *)l_numbers->content);
		i++;
	}
	ft_print_stack(l_numbers, lb_numbers, 'a');
	ft_swap_a(l_numbers);
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
