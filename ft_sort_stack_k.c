#include "ft_push_swap.h"

void sort_stack_K(t_list **lk_numbers)
{
	t_list *lk_bside_numbers;
	t_list	*h_tmp;
	t_list	*l_tmp;

	lk_bside_numbers = NULL;
	while (ft_lstsize(*lk_numbers) > 3)
	{
		ft_stack_size_plus3(lk_numbers, &lk_bside_numbers);
	}
	l_tmp = ft_return_lowerst_number(*lk_numbers);
	h_tmp = ft_return_highest_number(*lk_numbers);
	if (ft_lstsize(*lk_numbers) == 3)
	{
		if ((*lk_numbers)->next->content == l_tmp->content && (*lk_numbers)->next->next->content == h_tmp->content)
		{
			printf("maradona\n");
			ft_swap_a(lk_numbers);
		}
		else if ((*lk_numbers)->content == h_tmp->content && (*lk_numbers)->next->next->content == l_tmp->content)
		{
			printf("maradona2\n");
			ft_swap_a(lk_numbers);
			ft_reverse_rotate_a(lk_numbers);
		}
		else if ((*lk_numbers)->content == h_tmp->content && (*lk_numbers)->next->content == l_tmp->content)
		{
			printf("maradona3\n");
			ft_rotate_a(lk_numbers);
		}
		else if ((*lk_numbers)->content == l_tmp->content && (*lk_numbers)->next->content == h_tmp->content)
		{
			printf("maradona4\n");
			ft_swap_a(lk_numbers);
			ft_rotate_a(lk_numbers);
		}
		else if ((*lk_numbers)->next->content == h_tmp->content && (*lk_numbers)->next->next->content == l_tmp->content)
		{
			printf("maradona5\n");
			ft_reverse_rotate_a(lk_numbers);
		}
	}
	while (ft_lstsize(lk_bside_numbers) != 0)
	{
		ft_push_a(lk_numbers, &lk_bside_numbers);
	}
	ft_rotate_a(lk_numbers);
	ft_rotate_a(lk_numbers);
	ft_rotate_a(lk_numbers);
}
