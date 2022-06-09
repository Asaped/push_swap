#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;

	if (ac > 1)
	{
		a = ft_tabini(ac, av);
		printf("%i %i %i %i", a->num, a->next->num, a->next->next->num, a->next->next->next->num);
	}
}
