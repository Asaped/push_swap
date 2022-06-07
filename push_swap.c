#include "push_swap.h"

int	main(int ac, char **av)
{
	int	tab[ac - 1];
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (ac > 1)
	{
		if (!only_digit(av, ac))
		{
			ft_putstr("Error\n");
			exit (0);
		}
		while (j < ac)
			tab[i++] = ft_atoi(av[j++]);
		i = 0;
		while (i < ac - 1)
		{
			printf("%d", tab[i]);
			i++;
		}
	}
	return (0);
}
