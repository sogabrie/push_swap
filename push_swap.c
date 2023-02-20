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

// void	print_stack(t_stack *st)
// {
//     t_list  *ls;

//     if (!st || st->count < 1)
//     {
//         printf("ERROR Steck frry\n");
//         return ;
//     }
//     ls = st->first;
//     while(ls)
//     {
//         printf("cont = %d indexs = %lu \n", ls->data, ls->indexs);
//         ls = ls->next;
//     }
// }

int	main(int argc, char **argv)
{
	int		*mas;
	t_stack	*a;
	t_stack	*b;
	size_t	ac;

	if (argc < 2)
		return (write (1, "\n", 1) && 0);
	mas = malloc(argc * sizeof(int));
	if (!mas)
		return (write (1, "Error\n", 6) && 0);
	ac = (size_t)(argc - 1);
	if (check_argv(&mas, ++argv, &ac))
		return (write (1, "Error\n", 6) && 0);
	if (check_duplikat(mas, ac))
		return (write (1, "Error", 6) && 0);
	a = constructor_stack();
	b = constructor_stack();
	if (!a && !b)
		return (write(1, "Error\n", 6) && 0);
	initialization_stack(a, mas, ac);
	free(mas);
	my_sort(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
