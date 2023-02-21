#include "checker.h"

int	check_corect(t_stack *a, t_stack *b)
{
	char	**arg;

	//printf("check_correct_1\n");
	arg = get_args();
	if (!arg)
		return (write (1, "Error\n", 6) && 1);
	int i = 0;
	//printf("check_correct_3\n");
	while (arg[i])
		printf("argument = %s", arg[i++]);
	(void)a;
	(void)b;
	// if (do_args(a, b, arg))
	// {
	// 	free_arg(arg);
	// 	return (write (1, "OK\n", 6) && 0);
	// }
	// else
	// {
	// 	free_arg(arg);
	// 	return (write (1, "KO\n", 6) && 0);
	// }
	return (0);
}

int	main(int argc, char **argv)
{
	int		*mas;
	t_stack	*a;
	t_stack	*b;
	size_t	ac;

	if (argc < 2)
		return (write (1, "\n", 1) && 0);
	a = constructor_stack();
	b = constructor_stack();
	mas = malloc(argc * sizeof(int));
	if (!mas || !a || !b)
		return (write (1, "Error\n", 6) && 0);
	ac = (size_t)(argc - 1);
	if (check_argv(&mas, ++argv, &ac) || check_duplikat(mas, ac))
		return (write (1, "Error\n", 6) && 0);
	initialization_stack(a, mas, ac);
	free(mas);
	check_corect(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}