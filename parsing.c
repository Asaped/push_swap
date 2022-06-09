#include "push_swap.h"

t_stack	*create_node(void)
{
	t_stack	*a;

	a = (t_stack *)malloc(sizeof(t_stack));
	a->num = 0;
	a->diff = 1;
	a->next = NULL;
	return (a);
}

int	only_digit(char **av, int ac)
{
	int		i;
	size_t	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		while (j < ft_strlen(av[i]))
		{
			if (av[i][j] >= 48 && av[i][j] <= 57)
				j++;
			else if (av[i][0] == '-')
			{
				if (!no_char(av[i]))
					return (0);
				i++;
			}
			else
				return (0);
		}
		j = 0;
		i++;
	}
	return (1);
}

int	no_char(const char *str)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(str);
	i = 1;
	while (i < j)
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

int	no_double(int tab[], int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < ac)
	{
		while (j < ac && i < ac)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_error(void);
{
	write(1, "Error\n", 6);
	exit (0);
}

t_stack	*ft_tabini(int ac, char **av)
{
	t_stack	*a;
	t_stack	*tmp;
	int		tab[250];
	int		i;
	int		j;

	j = 1;
	i = 0;
	if (!only_digit(av, ac - 1))
		ft_error();
	while (j < ac)
		tab[i++] = ft_atoi(av[j++]);
	if (!no_double(tab, ac - 1))
		ft_error();
	a = create_node();
	tmp = a;
	i = 0;
	while (i < ac - 1)
	{
		tmp->num = tab[i++];
		tmp->next = create_node();
		tmp = tmp->next;
		tmp->diff = 1;
	}
	return (a);
}
