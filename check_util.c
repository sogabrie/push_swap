#include "push_swap.h"

int	ft_isdigit(int a )
{
	if (a > 47 && a < 58)
		return (1);
	else
		return (0);
}

int   check_plus(int a )
{
   if (a == 43 || a == 45)
      return (1);
   return (0);
}

size_t	ft_strlen(const char *a )
{
	int	i;

	i = 0;
	while (a[i] != 0)
		++i;
	return (i);
}

int	chack_number(char *mas)
{
	int	i;

	i = 0;
	if (!ft_strlen(mas))
		return (1);
	if (!check_plus(mas[i]) && !ft_isdigit(mas[i]))
		return (1);
	while (mas[++i])
	{
		if (!ft_isdigit(mas[i]))
				return (1);
	}
	if (ft_strlen(mas) == 1 && check_plus(mas[0]))
		return (1);
	return (0);
}

long  ft_atoi(char *nptr)
{
	int		i;
	int		f;
	long	ptr;

	i = 0;
	f = 0;
	ptr = 0;
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
