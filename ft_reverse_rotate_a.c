#include "ft_push_swap.h"

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
