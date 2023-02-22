/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:37:57 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/19 20:51:48 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*mas;
	t_stack	*a;
	t_stack	*b;
	size_t	ac;

	if (argc < 2)
		return (write (1, "\n", 1) && 1);
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
	my_sort(a, b);
	return (free_error_main(a, b, 0, 0));
}
