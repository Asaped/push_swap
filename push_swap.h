#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_pos
{
	int		*tab;
	size_t	size;
	size_t	size_max;
}				t_pos;

typedef struct s_stack
{
	t_pos	*stack_a;
	t_pos	*stack_b;
}				t_stack;

size_t	ft_strlen(const char *str);

void	ft_putstr(const char *str);

int		only_digit(char **av, int ac);

int		ft_atoi(const char *str);




#endif
