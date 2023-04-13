#include "ft_push_swap.h"

void	ft_sort_stack(t_list **l_numbers, t_list **lb_numbers)
{
	t_list	*lk_numbers;
	int	lst_size_Stack_A;
	int i;
	int j;
	t_list *tmp;
	int	key_nbr;

	i = 0;
	j = 0;
	lk_numbers = NULL;
	lst_size_Stack_A = ft_lstsize(*l_numbers);
	if (lst_size_Stack_A > 10 && lst_size_Stack_A <= 100)
	{
		lk_numbers = ft_duplicate_list(*l_numbers, lk_numbers);
		ft_print_stack(&lk_numbers, l_numbers, 'a');
		while (j < 3)
		{
			i = 0;
			tmp = lk_numbers;
			while (i < (lst_size_Stack_A / 4) * (j + 1) && i < (lst_size_Stack_A - 1))
			{
				tmp = tmp->next;
				i++;
			}
			key_nbr = *(int *)tmp->content;

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
				else
					tmp = tmp->next;
			}
			j++;
		}

 		while (ft_lstsize(*l_numbers) > 3)
		{
			ft_stack_size_plus3(l_numbers, lb_numbers);
		}

		ft_sort_3(l_numbers, lb_numbers);
		printf("este es el stack B en la funcion\n");
		ft_print_stack(l_numbers, lb_numbers, 'b');

		printf("este es el stack A en la funcion\n");
		ft_print_stack(l_numbers, lb_numbers, 'a');
	}
	else
	{
		while (ft_lstsize(*l_numbers) > 3)
		{
			ft_stack_size_plus3(l_numbers, lb_numbers);
		}
		ft_sort_3(l_numbers, lb_numbers);
		while (ft_lstsize(*lb_numbers) != 0)
		{
			ft_push_a(l_numbers, lb_numbers);
		}
	}
}
