/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:28:36 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/22 14:28:38 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_corect(t_stack *a, t_stack *b)
{
	char	**arg;

	arg = get_args();
	if (!arg)
		return (write (1, "Error\n", 6) && 1);
	if (!do_args(a, b, arg))
	{
		free_arg(arg);
		return (write (1, "OK\n", 3) && 0);
	}
	else
	{
		free_arg(arg);
		return (write (1, "KO\n", 3) && 0);
	}
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
		return (free_error_main(a, b, mas, 1));
	ac = (size_t)(argc - 1);
	if (check_argv(&mas, ++argv, &ac))
		return (free_error_main(a, b, 0, 1));
	if (check_duplikat(mas, ac))
		return (free_error_main(a, b, mas, 1));
	initialization_stack(a, mas, ac);
	free(mas);
	check_corect(a, b);
	return (free_error_main(a, b, 0, 0));
}
