#include "ft_push_swap.h"

void ft_push_b(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*back_up;
	t_list	*new_numbers;
	int	*duplicate;

	duplicate = (int *)(*l_numbers)->content;
	new_numbers = ft_lstnew(duplicate);

	ft_lstadd_front(lb_numbers, new_numbers);
	back_up = (*l_numbers)->next;
	free(*l_numbers);
	(*l_numbers)->next = NULL;
	(*l_numbers) = back_up;
}
