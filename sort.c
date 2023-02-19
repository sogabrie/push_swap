/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:53:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/19 21:11:56 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	my_sort(t_stack *a, t_stack *b)
{
	size_t	i;

    //printf("skizb sort\n");
	if (a->count == 3)
		return (full_sort_try(a));
	if (a->count < 3)
		return (sort_mini(a));
	//if (a->count <= 5)
	//	return (sort_five(a, b));
	if (!check_sort(a))
		return (roll_for_full_sort(a));
	//printf("my_sort_3\n");
	crat_indexs(a);
	i = 30;
	//i = crat_const(a->count);
	//printf("my_sort_4\n");
	push_a_b(a, b, i);
	//printf("my_sort_5\n");
	//push_b_a(a, b, i);
	//return (check_full_sort(a));
    return (0);
}
