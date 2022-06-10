#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}							t_stack;

size_t	ft_strlen(const char *str);

void	ft_putstr(const char *str);

int		only_digit(char **av, int ac);

int		ft_atoi(const char *str);

int		no_char(const char *str);

int		no_double(int tab[], int ac);

t_stack	*ft_tabini(int ac, char **av);

t_stack	*create_node(void);

#endif
