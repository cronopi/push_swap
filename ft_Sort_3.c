#include "ft_push_swap.h"

void	ft_sort_3(t_list **l_numbers, t_list **lb_numbers)
{
	t_list *h_tmp;
	t_list *l_tmp;

	l_tmp = ft_return_lowerst_number(*l_numbers);
	h_tmp = ft_return_highest_number(*l_numbers);
	if (ft_lstsize(*l_numbers) == 3)
	{
		if ((*l_numbers)->next->content == l_tmp->content && (*l_numbers)->next->next->content == h_tmp->content)
		{
			printf("maradona\n");
			ft_swap_a(l_numbers);
		}
		else if ((*l_numbers)->content == h_tmp->content && (*l_numbers)->next->next->content == l_tmp->content)
		{
			printf("maradona2\n");
			ft_swap_a(l_numbers);
			ft_reverse_rotate_a(l_numbers);
		}
		else if ((*l_numbers)->content == h_tmp->content && (*l_numbers)->next->content == l_tmp->content)
		{
			printf("maradona3\n");
			ft_rotate_a(l_numbers);
		}
		else if ((*l_numbers)->content == l_tmp->content && (*l_numbers)->next->content == h_tmp->content)
		{
			printf("maradona4\n");
			ft_swap_a(l_numbers);
			ft_rotate_a(l_numbers);
		}
		else if ((*l_numbers)->next->content == h_tmp->content && (*l_numbers)->next->next->content == l_tmp->content)
		{
			printf("maradona5\n");
			ft_reverse_rotate_a(l_numbers);
		}
	}
	(void)lb_numbers;

}
