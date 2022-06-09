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
