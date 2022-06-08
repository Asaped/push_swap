#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
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

void	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
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

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	res = 0;
	neg = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\t' || *str == '\f'))
			++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	if (res * neg > 2147483647 || res * neg < -2147483647)
	{
		ft_putstr("Error\n");
		exit (0);
	}
	return (res * neg);
}
