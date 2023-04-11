#include "ft_push_swap.h"

void ft_stack_size_plus3(t_list **l_numbers, t_list **lb_numbers)
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
	//printf("lower number%i\n", *(int *)lowest_number->content);

	while (tmp != lowest_number) // checkear la posicion del numero en la lista.
	{
		tmp = tmp->next;
		i++;
	}

	lst_size = ft_lstsize(*l_numbers); // calcular el tamaño de la lista.
	//printf("la pos de min es %i\n", lst_size);

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
