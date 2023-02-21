#include "checker.h"

char	**mas_cat_arg(char **arg_2, char **arg, size_t i)
{
	size_t	j;

	if (!arg)
		return (arg_2);
	j = 0;
	while (j <= i)
	{
		arg_2[j] = arg[j];
		++j;
	}
	free(arg);
	return (arg_2);
}

size_t	check_corect_and_end(char *a)
{
	if (ft_strlen(a) < 1)
		return (1);
	if (ft_strlen(a) == 1)
		return (2);
	if (cft_strcmp(a, "sa") || \
		cft_strcmp(a, "sb") || cft_strcmp(a, "ss") || \
		cft_strcmp(a, "pa") || cft_strcmp(a, "pb") || \
		cft_strcmp(a, "ra") || cft_strcmp(a, "rb") || \
		cft_strcmp(a, "rr") || cft_strcmp(a, "rra") || \
		cft_strcmp(a, "rrb") || cft_strcmp(a, "rrr"))
		return (1);
	return (0);
}

char	**get_args()
{
	char	**arg;
	char	**arg_2;
	size_t		i;
	size_t		flag;

	i = 0;
	flag = 0;
	while (!flag)
	{
		arg_2 = malloc (sizeof(char *) * (i + 1));
		if (!arg_2)
			return (0);
		arg = mas_cat_arg(arg_2, arg, i);
		arg[i] = get_next_line(0);
		flag = check_corect_and_end(arg[i++]);
	}
	if (flag == 1)
	{
		free_arg(arg);
		return (0);
	}
	arg[--i] = 0;
	return (arg);
}