#include "checker.h"

char	**mas_cat_arg(char **arg_2, char **arg, size_t i)
{
	size_t	j;

	if (!arg)
		return (arg_2);
	j = 0;
	while (j <= i && arg[j])
	{
		arg_2[j] = arg[j];
		++j;
	}
	//printf("mas_cat_arg_4\n");
	free(arg);
	//printf("mas_cat_arg_5\n");
	return (arg_2);
}

size_t	check_corect_and_end(char *a)
{
	if (!a)
		return (2);
	if (ft_strlen(a) < 1)
		return (1);
	if (ft_strlen(a) == 1)
		return (2);
	if (!ft_strcmp(a, "sa") || \
		!ft_strcmp(a, "sb") || !ft_strcmp(a, "ss") || \
		!ft_strcmp(a, "pa") || !ft_strcmp(a, "pb") || \
		!ft_strcmp(a, "ra") || !ft_strcmp(a, "rb") || \
		!ft_strcmp(a, "rr") || !ft_strcmp(a, "rra") || \
		!ft_strcmp(a, "rrb") || !ft_strcmp(a, "rrr"))
		return (0);
	return (1);
}

char	**get_args()
{
	char	**arg;
	char	**arg_2;
	size_t		i;
	size_t		flag;

	i = 0;
	flag = 0;
	arg = 0;
	while (!flag)
	{
		arg_2 = malloc (sizeof(char *) * (i + 2));
		if (!arg_2)
			return (0);
		arg = mas_cat_arg(arg_2, arg, i);
		arg[i] = get_next_line(0);
		flag = check_corect_and_end(arg[i]);
		if (flag == 2)
			free_arg_one(&arg[i]);
		arg[++i] = 0;
	}
	if (flag == 1)
		return (free_arg_char(arg));
	return (arg);
}