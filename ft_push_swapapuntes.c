#include "ft_push_swap.h"

//ft_lstnew(void *content);
void	ft_push_swap(int ac, char **av)
{
	int i;
	int nbr;
	void *tmp;
	t_list *patata; // *patata  &patata = la direccion de la variable que contiene una dir de memoria
	t_list *patata2;
	int *test;

	i = 1;
	test = malloc(sizeof(int) * ac); //1 12b  2  8b  3  4b  4  0b
	while (i < ac)
	{
		nbr = ft_atoi(av[i]); //agregar los números de tipo int a una variable
		tmp = &nbr; // pasamos el número a tipo puntero

		patata = ft_lstnew(tmp); // creas una nueva lista
		patata2 = ft_lstnew(tmp);
		test++;
		//ft_lstadd_back(patata->content, patata2);
		printf("que es estooooo: %i\n", *(int *)patata->content);
		//con elpuntero devuelvo el contenido de la dirección de memoria de la variable
		// anpersan devuelve la direcion de memoria de la variable
		//ft_printf("",);
		i++;
	}
}

int	main(int ac, char **av)
{

	ft_push_swap(ac ,av);
	return (0);
}

/*
imprimirlos
transformarlos a int

funcion que checkee si hay números duplicados.
funcion que checkee si son o no números (?)

*/
