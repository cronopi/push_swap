#include "ft_push_swap.h"

/*ft_sort_stack();
	// " 3 9 6 7 78" tiene que coger los números por separado.
*/

void	swap_stack(t_list *a, t_list *b)
{
	t_list *tmp;

	tmp = a->content;
	a->content = b->content;
	b->content = tmp;
}

void ft_swap_a(t_list **l_numbers)
{
	if (ft_lstsize(*l_numbers) <= 1)
		return ;

	swap_stack((*l_numbers), (*l_numbers)->next);
}

void ft_swap_b(t_list **lb_numbers)
{
	if (ft_lstsize(*lb_numbers) <= 1)
		return ;

	swap_stack((*lb_numbers), (*lb_numbers)->next);
}

void ft_push_b(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*back_up;
	t_list	*new_numbers;
	int	*duplicate;

	duplicate = (int *)(*l_numbers)->content;
	new_numbers = ft_lstnew(duplicate);

	ft_lstadd_back(lb_numbers, new_numbers);
	back_up = (*l_numbers)->next;
	free(*l_numbers);
	(*l_numbers)->next = NULL;
	(*l_numbers) = back_up;

	//printf("este es durante el push_b\n");
	//printf("imprimes a\n");
	//ft_print_stack(l_numbers, lb_numbers, 'a');
	//printf("imprimes b\n");
	//ft_print_stack(l_numbers, lb_numbers, 'b');
}

void ft_push_a(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*back_up;
	t_list	*new_numbers;
	int	*duplicate;

	duplicate = (int *)(*lb_numbers)->content;
	new_numbers = ft_lstnew(duplicate);

	ft_lstadd_back(l_numbers, new_numbers);
	back_up = (*lb_numbers)->next;
	//free(*lb_numbers);
	(*lb_numbers)->next = NULL;
	(*lb_numbers) = back_up;

	//printf("este es durante el push_b\n");
	//printf("imprimes a\n");
	//ft_print_stack(l_numbers, lb_numbers, 'a');
	//printf("imprimes b\n");
	//ft_print_stack(l_numbers, lb_numbers, 'b');
}

void ft_rotate_a(t_list **l_numbers)
{
	t_list *tmp;
	t_list *last;

	if (ft_lstsize(*l_numbers) <= 1)
		return ;

	tmp = *l_numbers;
	*l_numbers = (*l_numbers)->next;
	last = ft_lstlast(*l_numbers);
	last->next = tmp;
	tmp->next = NULL;
}

void ft_rotate_b(t_list **lb_numbers)
{
	t_list *tmp;
	t_list *last;

	if (ft_lstsize(*lb_numbers) <= 1)
		return ;

	tmp = *lb_numbers;
	*lb_numbers = (*lb_numbers)->next;
	last = ft_lstlast(*lb_numbers);
	last->next = tmp;
	tmp->next = NULL;
}

void ft_rotate_both(t_list **l_numbers, t_list **lb_numbers)
{
	ft_rotate_a(l_numbers);
	ft_rotate_b(lb_numbers);
}

void ft_reverse_rotate_a(t_list **l_numbers)
{
	t_list *last;
	t_list *tmp;

	if (ft_lstsize(*l_numbers) <= 1)
		return ;

	last = ft_lstlast(*l_numbers);
	ft_lstadd_front(l_numbers, last);
	tmp = *l_numbers;
	//ft_printf("imprime : %i\n", *(int *)tmp->content);
	//ft_printf("imprime : %i\n", *(int *)(*l_numbers)->content);

	while (tmp->next != last)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	//ft_printf("imprime a ver : %i\n", *(int *)(*l_numbers)->content);
}

void ft_reverse_rotate_b(t_list **lb_numbers)
{
	t_list *last;
	t_list *tmp;

	if (ft_lstsize(*lb_numbers) <= 1)
		return ;

	last = ft_lstlast(*lb_numbers);
	ft_lstadd_front(lb_numbers, last);
	tmp = *lb_numbers;
	//ft_printf("imprime : %i\n", *(int *)tmp->content);
	//ft_printf("imprime : %i\n", *(int *)(*lb_numbers)->content);

	while (tmp->next != last)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	//ft_printf("imprime a ver : %i\n", *(int *)(*lb_numbers)->content);
}

void	ft_reverse_rotate_both(t_list **l_numbers, t_list **lb_numbers)
{
	ft_reverse_rotate_a(l_numbers);
	ft_reverse_rotate_b(lb_numbers);
}

int ft_check_for_duplicates(t_list *l_numbers)
{
	t_list *tmp;

	tmp = l_numbers->next;
	while (l_numbers->next != NULL)
	{
		while(tmp != NULL)
		{
			if (*(int *)l_numbers->content == *(int *)tmp->content)
			{
				ft_printf("error\n");
				return (0);
			}
			tmp = tmp->next;
		}
		l_numbers = l_numbers->next;
		tmp = l_numbers->next;
	}
	return (1);
}

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

t_list *ft_return_lowerst_number(t_list *l_numbers) // (t_list *l_numbers, key_nbr)
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

t_list *ft_return_highest_number(t_list *l_numbers)
{
	t_list *highest_nbr;

	highest_nbr = l_numbers;
	while (l_numbers != NULL)
	{
		if (*(int *)highest_nbr->content < *(int *)(l_numbers)->content)
			highest_nbr = l_numbers;
		l_numbers = (l_numbers)->next;
	}
	return (highest_nbr);
}

void ft_stack_size_plus3(t_list **l_numbers, t_list **lb_numbers) //(t_list **l_numbers, t_list **lb_numbers, key_nbr)
{
	int i;
	int lst_size;
	t_list *tmp;
	t_list *lowest_number;

	i = 0;
	tmp = (*l_numbers);
	/*
		si la posicion de número en la lista es inferior a la mitad reverse_rotate_a
		si la posicion de número en la lista es superior a la mitad rotate_a
	*/
	lowest_number =  ft_return_lowerst_number(*l_numbers); //(*l_numbers, key_nbr)
	printf("lower number%i\n", *(int *)lowest_number->content);

	while (tmp != lowest_number) // checkear la posicion del numero en la lista.
	{
		tmp = tmp->next;
		i++;
	}

	lst_size = ft_lstsize(*l_numbers); // calcular el tamaño de la lista.
	printf("la pos de min es %i\n", lst_size);

	//ft_printf("imprime la listatesting: %i\n", *(int *)(*l_numbers)->content);
	if (i > (lst_size / 2)) // si es inferior a la mitad de la lista vas a hacer reverse rotate
		while(i < lst_size)
		{
			ft_reverse_rotate_a(l_numbers);
			i++;
		}
	else
		while(i) // si es superior a la mitad de la lista vas a hacer reverse rotate
		{
			ft_rotate_a(l_numbers);
			i--;
		}

	//printf("que iso rthwbjriojvñaejñavj%i\n", i);
	ft_push_b(l_numbers, lb_numbers);
}

t_list *ft_duplicate_list(t_list *l_numbers, t_list *lk_numbers)
{
	t_list *new_numbers;
	int *nbr;
	while(l_numbers != NULL)
	{
		nbr = malloc(sizeof(int));
		*nbr = *(int *)l_numbers->content;
		new_numbers = ft_lstnew(nbr);
		ft_lstadd_back(&lk_numbers, new_numbers);
		l_numbers = l_numbers->next;
	}
	return (lk_numbers);
}

void sort_stack_K(t_list **lk_numbers) // 3 10 8  // 9 3 6 8 2 1
{
	int key_nbr;
	int i;

	i = ft_lst_size(*lk_numbers);
	while (i >= 0)
	{
		if (lk_numbers->content < lk_numbers->next->content)
			ft_swap_a(lk_numbers, lk_numbers->next);
		lk_numbers = lk_numbers->next
	}

	/* 
	key_nbr = ft_lstsize(*lk_numbers) / 4;
	while (i <= key_nbr)
	{
		(*lk_numbers) = (*lk_numbers)->next
		i++;
	} */

}

void	ft_sort_stack(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*lk_numbers;
	t_list	*h_tmp;
	t_list	*l_tmp;
	int	lst_size_Stack_A;
	int key_nbr;

	key_nbr = 0;
	lk_numbers = NULL;
	lst_size_Stack_A = ft_lstsize(*l_numbers);

	lk_numbers = ft_duplicate_list(*l_numbers, lk_numbers);
	ft_print_stack(l_numbers, &lk_numbers, 'b');
	sort_stack_K(lk_numbers);

	if (lst_size_Stack_A > 10 && lst_size_Stack_A <= 100)
	{
		while (ft_lstsize(*l_numbers) > 3 )// && key_nbr > 0 //tengo que decirle que solo cuente hasta la 25 posición
		{

		}
	}
	else // lst_size_Stack_A <= 10
	while (ft_lstsize(*l_numbers) > 3)
	{
		ft_stack_size_plus3(l_numbers, lb_numbers);
	}
	//key_nbr = 0; no haría falta pero es más correcto.
	l_tmp = ft_return_lowerst_number(*l_numbers);
	h_tmp = ft_return_highest_number(*l_numbers);
	if (ft_lstsize(*l_numbers) == 3)
	{
		if ((*l_numbers)->next->content == l_tmp->content && (*l_numbers)->next->next->content == h_tmp->content)
		{
			printf("maradona\n");
			ft_swap_a(l_numbers);
		}
		else if ((*l_numbers)->content == h_tmp->content && (*l_numbers)->next->next->content == l_tmp->content)
		{
			printf("maradona2\n");
			ft_swap_a(l_numbers);
			ft_reverse_rotate_a(l_numbers);
		}
		else if ((*l_numbers)->content == h_tmp->content && (*l_numbers)->next->content == l_tmp->content)
		{
			printf("maradona3\n");
			ft_rotate_a(l_numbers);
		}
		else if ((*l_numbers)->content == l_tmp->content && (*l_numbers)->next->content == h_tmp->content)
		{
			printf("maradona4\n");
			ft_swap_a(l_numbers);
			ft_rotate_a(l_numbers);
		}
		else if ((*l_numbers)->next->content == h_tmp->content && (*l_numbers)->next->next->content == l_tmp->content)
		{
			printf("maradona5\n");
			ft_reverse_rotate_a(l_numbers);
		}
	}
	while (ft_lstsize(*lb_numbers) != 0)
	{
		ft_push_a(l_numbers, lb_numbers);
	}
	ft_rotate_a(l_numbers);
	ft_rotate_a(l_numbers);
	ft_rotate_a(l_numbers);
}

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

	printf("este es el stack B despues de la llamada a la funcion\n");
	ft_print_stack(&l_numbers, &lb_numbers, 'b');

	printf("este es el stack A despues de la llamada a la funcion\n");
	ft_print_stack(&l_numbers, &lb_numbers, 'a');

	ft_lstclear(&l_numbers, &free);
	ft_lstclear(&lb_numbers, &free);
}

int	main(int ac, char **av)
{
	ft_push_swap(ac ,av);
	//system
	return (0);
}


/*
	stack a = 5 6 4 9 2 10 7 3 8 1

	stack k = 5 6 4 9 2 10 7 3 8 1
	stack k = 1 2 3 4 5 6 7 8 9 10


*/
