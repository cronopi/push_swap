#include "ft_push_swap.h"

/*
	check_dup();
	check_b_empty();
*/

void ft_swap_a(t_list *l_numbers)
{
	if (ft_lstsize(l_numbers) <= 1)
		return ;
	printf("imprime el swap de a: %i\n", *(int *)l_numbers->content);
	l_numbers = l_numbers->next;
	printf("imprime el swap de a: %i\n", *(int *)l_numbers->content);
}

/*
	me imprime el 5 solo y sospecho que es porque estoy en la ultima posicion de la lista,
	pero no se volver al principio de la lista sin añadir un nuevo nodo.
*/

void ft_push_b(t_list *l_numbers, t_list *lb_numbers)
{
	t_list *back_up;
	ft_lstadd_back(&l_numbers, l_numbers);
	//ft_printf("imprime la listaedhbn: %i\n", *(int *)l_numbers->content);
	back_up = l_numbers->next;
	l_numbers->next = NULL;
	l_numbers = back_up;
	//printf("este es durante el push_b\n");
	ft_print_stack(l_numbers, lb_numbers, 'a');
}

/* void ft_rotate_a(t_list *l_numbers)
{
	ft_lstadd_back(&l_numbers, l_numbers);
	l_numbers->next = NULL;
}

void	ft_rotate_ab(t_list l_numbers, t_list lb_numbers)
{
	ft_lstadd_back(&l_numbers, l_numbers);
	l_numbers->next = NULL;
	ft_lstadd_back(&lb_numbers, lb_numbers);
	lb_numbers->next = NULL;
}

void	reverse_rotate_a(t_list l_numbers)
{
	l_numbers = ft_last(l_numbers);
	ft_lstadd_front(&l_numbers, l_numbers);
} */

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
		i++;
	}
	ft_print_stack(l_numbers, lb_numbers, 'a');
	//ft_swap_a(l_numbers);
	ft_push_b(l_numbers, lb_numbers);
	//ft_rotate_a(l_numbers);
	printf("este es despues del push_b\n");
	ft_print_stack(l_numbers, lb_numbers, 'a');
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
