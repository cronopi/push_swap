#include "ft_push_swap.h"

int ft_check_for_duplicates(t_list *l_numbers)
{
	t_list *tmp;

	tmp = l_numbers->next;
	while (l_numbers->next != NULL)
	{
		while(tmp != NULL)
		{
			if (*(int *)l_numbers->content == *(int *)tmp->content)
			{
				ft_printf("error\n");
				return (0);
			}
			tmp = tmp->next;
		}
		l_numbers = l_numbers->next;
		tmp = l_numbers->next;
	}
	return (1);
}
