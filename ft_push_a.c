#include "ft_push_swap.h"

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
}
