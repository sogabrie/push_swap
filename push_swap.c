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

void	print_stack(t_stack *st)
{
    t_list  *ls;

    if (!st || st->count < 1)
    {
        printf("ERROR Steck frry\n");
        return ;
    }
    ls = st->first;
    while(ls)
    {
        printf("cont = %d\n", ls->data);
        ls = ls->next;
    }
}

int	main(int argc, char **argv)
{
	int		*mas;
	t_stack	*a;
	t_stack	*b;
	size_t	ac;

	if (argc < 2)
		return (write (1, "\n", 1) && 0);
	mas = malloc(argc * sizeof(int));
	//printf("argc = %d\n", argc);
	if (!mas)
		return (write (1, "ERROR_1\n", 8) && 0);
	ac = (size_t)(argc - 1);
	if (check_argv(&mas, ++argv, &ac))
		return (write (1, "ERROR_2\n", 8) && 0);
	//printf("Main_1\n");
	if (check_duplikat(mas, ac))
			return (write (1, "ERROR_3", 8) && 0);
    a = constructor_stack('a');
    b = constructor_stack('b');
	//printf("main_3\n");
    if (!a && !b)
        return (write(1, "ERROR_4\n", 8) && 0);
    initialization_stack(a, mas, ac);
	//printf("main_4\n");
	free(mas);
	ft_sort(a, b);
	//int i = 0;
	//while (i++ < 5)
	//	pb_swap(a, b);

    //printf("stak %c\n", a->name);
    //print_stack(a);
	//printf("stack %c\n", b->name);
    //print_stack(b);
	free_stack(a);
	free_stack(b);
	//sleep(1000);
    return (0);
}
