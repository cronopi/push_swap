#include "ft_push_swap.h"

/*
	funcion que detecte el número del stack más pequeño.
	codigo que sepa cuando es mejor hacer rotate y cuando es mejor hacer reverse rotate
/*/

/*ft_sort_stack();*/

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

	printf("este es durante el push_b\n");
	printf("imprimes a\n");
	ft_print_stack(l_numbers, lb_numbers, 'a');
	printf("imprimes b\n");
	ft_print_stack(l_numbers, lb_numbers, 'b');
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
	t_list *first;
	t_list *tmp;

	if (ft_lstsize(*l_numbers) <= 1)
		return ;

	last = ft_lstlast(*l_numbers);
	ft_lstadd_front(l_numbers, last);
	tmp = *l_numbers;
	ft_printf("imprime : %i\n", *(int *)tmp->content);
	ft_printf("imprime : %i\n", *(int *)(*l_numbers)->content);

	while (tmp->next != last)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	ft_printf("imprime a ver : %i\n", *(int *)(*l_numbers)->content);
}

void ft_reverse_rotate_b(t_list **lb_numbers)
{
	t_list *last;
	t_list *first;
	t_list *tmp;

	if (ft_lstsize(*lb_numbers) <= 1)
		return ;

	last = ft_lstlast(*lb_numbers);
	ft_lstadd_front(lb_numbers, last);
	tmp = *lb_numbers;
	ft_printf("imprime : %i\n", *(int *)tmp->content);
	ft_printf("imprime : %i\n", *(int *)(*lb_numbers)->content);

	while (tmp->next != last)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	ft_printf("imprime a ver : %i\n", *(int *)(*lb_numbers)->content);
}

void	ft_reverse_rotate_both(t_list **l_numbers, t_list **lb_numbers)
{
	ft_reverse_rotate_a(l_numbers);
	ft_reverse_rotate_b(lb_numbers);
}

int ft_check_for_duplicates(t_list **l_numbers)
{
	t_list *tmp;

	tmp = (*l_numbers)->next;
	while ((*l_numbers)->next != NULL)
	{
		while(tmp != NULL)
		{
			if (*(int *)(*l_numbers)->content == *(int *)tmp->content)
			{
				ft_printf("error\n");
				return (0);
			}
			ft_printf("imprime el numero bellaco: %i, comparare %i\n", *(int *)(*l_numbers)->content, *(int *)tmp->content);
			tmp = tmp->next;
		}
		(*l_numbers) = (*l_numbers)->next;
		tmp = (*l_numbers)->next;
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
		while(av[j][i] != '0')
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

int ft_return_lowerst_number(t_list **l_numbers)
{
	t_list *tmp;

	tmp = (*l_numbers)->next;
	while ((*l_numbers)->next != NULL)
	{
		while(tmp != NULL)
		{
			if (*(int *)(*l_numbers)->content == *(int *)tmp->content)
			{
				ft_printf("error\n");
				return (0);
			}
			ft_printf("imprime el numero bellaco: %i, comparare %i\n", *(int *)(*l_numbers)->content, *(int *)tmp->content);
			tmp = tmp->next;
		}
		(*l_numbers) = (*l_numbers)->next;
		tmp = (*l_numbers)->next;
	}
	return (1);
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
	if (ft_check_for_duplicates(&l_numbers) == 0)
		return ;
	//ft_swap_a(&l_numbers);
	//ft_swap_b(t_list **lb_numbers)
	//ft_push_b(&l_numbers, &lb_numbers);
	//ft_rotate_a(&l_numbers);
	//ft_reverse_rotate_a(&l_numbers);
	//ft_sort_stack();

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
	return (0);
}
