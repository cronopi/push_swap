#include "ft_push_swap.h"

/*
	check_dup(); funcion que checkee si hay números duplicados.
	check_b_empty(); funcion que checkee si son o no números (?)
*/

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

void ft_swap_a(t_list **l_numbers)
{
	if (ft_lstsize(*l_numbers) <= 1)
		return ;
	printf("imprime el swap de a: %i\n", *(int *)(*l_numbers)->content);
	(*l_numbers) = (*l_numbers)->next;
	printf("imprime el swap de a: %i\n", *(int *)(*l_numbers)->content);
}

void ft_push_b(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*back_up;
	t_list	*new_numbers;
	int	*duplicate;

 	duplicate = malloc(sizeof(int));
	if (!duplicate)
		free(duplicate);

	duplicate = (int *)(*l_numbers)->content;
	new_numbers = ft_lstnew(duplicate); // aquí hay leaks, a saber como solucionarlo.

	ft_lstadd_back(lb_numbers, new_numbers);
	back_up = (*l_numbers)->next;
	(*l_numbers)->next = NULL;
	(*l_numbers) = back_up;

	printf("este es durante el push_b\n");
	printf("imprimes a\n");
	ft_print_stack(l_numbers, lb_numbers, 'a');
	printf("imprimes b\n");
	ft_print_stack(l_numbers, lb_numbers, 'b');

	//ft_lstdelone(new_numbers, &free);
	//ft_lstdelone(new_numbers, &free);
}

void	ft_push_swap(int ac, char **av)
{
	int i;
	int *nbr;
	t_list **l_numbers;
	t_list *new_numbers;
	t_list **lb_numbers;

	i = 1;
	l_numbers = (t_list **)ft_lstnew(NULL);
	lb_numbers = (t_list **)ft_lstnew(NULL);
	while (i < ac)
	{
		nbr = malloc(sizeof(int));
		if (!nbr)
			return ;
		*nbr = ft_atoi(av[i]);

		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(l_numbers, new_numbers);
		i++;
		//ft_lstdelone(new_numbers, &free);
	}
	//ft_push_b(l_numbers, lb_numbers);
	//ft_swap_a(l_numbers);
	//ft_rotate_a(l_numbers);


	printf("este es despues del push_b el stack b\n");
	ft_print_stack(l_numbers, lb_numbers, 'b');

	printf("este es despues del push_b el stack a\n");
	ft_print_stack(l_numbers, lb_numbers, 'a');

	ft_lstclear(l_numbers, &free);
	ft_lstclear(lb_numbers, &free);
}

int	main(int ac, char **av)
{

	ft_push_swap(ac ,av);
	return (0);
}
