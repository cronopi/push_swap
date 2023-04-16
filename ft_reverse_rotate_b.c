#include "ft_push_swap.h"

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
	write(1,"rrb\n", 4);
}
