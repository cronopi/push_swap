#include "ft_push_swap.h"

void ft_push_b(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*new_numbers;
	int	*duplicate;

	duplicate = (int *)(*l_numbers)->content;
	new_numbers = ft_lstnew(duplicate);


	ft_lstadd_front(lb_numbers, l_numbers);
	printf("este es el stack B despues de la llamada a la funcion\n");
	ft_print_stack(&l_numbers, &lb_numbers, 'b');

	printf("este es el stack A despues de la llamada a la funcion\n");
	ft_print_stack(&l_numbers, &lb_numbers, 'a');
}
