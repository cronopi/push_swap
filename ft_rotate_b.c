#include "ft_push_swap.h"

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
