#include "ft_push_swap.h"

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
