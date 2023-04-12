#include "ft_push_swap.h"

void	ft_sort_stack(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*lk_numbers;
	t_list	*h_tmp;
	t_list	*l_tmp;
	int	lst_size_Stack_A;
	int i;
	t_list *tmp;
	int	key_nbr;

	i = 0;
	lk_numbers = NULL;
	lst_size_Stack_A = ft_lstsize(*l_numbers);
	if (lst_size_Stack_A > 10 && lst_size_Stack_A <= 100)
	{
		lk_numbers = ft_duplicate_list(*l_numbers, lk_numbers);
		sort_stack_K(&lk_numbers);

		while ()
		{
			tmp = lk_numbers;
			while (i < lst_size_Stack_A / 4) && i < (lst_size_Stack_A - 1))
			{
				tmp = tmp->next;
				i++;
			}
			key_nbr = *(int *)tmp->content;
			ft_printf("dytysdyts: %i\n", key_nbr);

			tmp = (*l_numbers);
			while(tmp != NULL)
			{
				if (*(int *)tmp->content <= key_nbr)
				{
					while(tmp != (*l_numbers))
					{
						ft_reverse_rotate_a(l_numbers);
					}
					ft_push_b(l_numbers, lb_numbers);
					tmp = (*l_numbers);
				}
				tmp = tmp->next;
			}
		}
		printf("este es el stack B en la funcion\n");
		ft_print_stack(l_numbers, lb_numbers, 'b');

		printf("este es el stack A en la funcion\n");
		ft_print_stack(l_numbers, lb_numbers, 'a');
	}
	else
	while (ft_lstsize(*l_numbers) > 3)
	{
		ft_stack_size_plus3(l_numbers, lb_numbers);
	}
	//key_nbr = 0; no haría falta pero es más correcto.
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
	while (ft_lstsize(*lb_numbers) != 0)
	{
		ft_push_a(l_numbers, lb_numbers);
	}
	ft_rotate_a(l_numbers);
	ft_rotate_a(l_numbers);
	ft_rotate_a(l_numbers);
}
