#include "push_swap.h"

int	ft_isdigit(int a )
{
	if (a > 47 && a < 58)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		f;
	long	ptr;

	i = 0;
	f = 0;
	ptr = 0;
	while (nptr[i] != 0 && (nptr[i] == ' ' || nptr[i] == '\t' || \
				nptr[i] == '\r' || nptr[i] == '\n' || \
				nptr[i] == '\v' || nptr[i] == '\f'))
		++i;
	if (nptr[i] != 0 && nptr[i] == '-')
	{
		++i;
		f = 1;
	}
	else if (nptr[i] != 0 && nptr[i] == '+')
		++i;
	while (nptr[i] != 0 && ft_isdigit(nptr[i]))
		ptr = (10 * ptr) + (nptr[i++] - 48);
	if (f == 1)
		return (-ptr);
	return (ptr);
}
