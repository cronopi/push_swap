#include "ft_push_swap.h"

void ft_swap_b(t_list **lb_numbers)
{
	if (ft_lstsize(*lb_numbers) <= 1)
		return ;

	swap_stack((*lb_numbers), (*lb_numbers)->next);
}
