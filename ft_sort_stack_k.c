#include "ft_push_swap.h"

void sort_stack_K(t_list **lk_numbers)
{
	t_list *lk_bside_numbers;

	lk_bside_numbers = NULL;
	while (ft_lstsize(*lk_numbers) > 3)
	{
		ft_stack_size_plus3(lk_numbers, &lk_bside_numbers, 1);
	}
	ft_sort_3(lk_numbers, &lk_bside_numbers);
	while (ft_lstsize(lk_bside_numbers) != 0)
	{
		ft_push_a(lk_numbers, &lk_bside_numbers);
	}
	ft_rotate_a(lk_numbers);
	ft_rotate_a(lk_numbers);
	ft_rotate_a(lk_numbers);
}
