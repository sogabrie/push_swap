/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:53:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/20 20:43:55 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	my_sort(t_stack *a, t_stack *b)
{
	size_t	i;

	if (a->count == 3)
		return (full_sort_try(a));
	if (a->count < 3)
		return (sort_mini(a));
	if (!check_sort(a))
		return (roll_for_full_sort(a));
	crat_indexs(a);
	if (a->count <= 12)
		return (sort_five(a, b));
	i = crat_const(a->count);
	push_a_b(a, b, i);
	push_b_a(a, b);
	return (0);
}
