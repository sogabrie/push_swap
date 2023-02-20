#include "push_swap.h"
size_t	ft_sqrt(size_t nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		++i;
	}
	return (i - 1);
}

size_t  ft_ln()

size_t  crat_const(size_t i)
{
    return (ft_ln(i) + ft_sqrt(i) + 1);
}