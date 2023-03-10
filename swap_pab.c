/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:43:00 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/16 17:53:16 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_pab(t_stack *st1, t_stack *st2)
{
	size_t	i;

	if (!st1 || !st2 || !st2->count)
		return (0);
	i = st2->first->indexs;
	push_stack (st1, pop_stack(st2));
	st1->first->indexs = i;
	return (0);
}

int	pa_swap(t_stack *a, t_stack *b)
{
	write(1, "pa\n", 3);
	return (swap_pab(a, b));
}

int	pb_swap(t_stack *a, t_stack *b)
{
	write(1, "pb\n", 3);
	return (swap_pab(b, a));
}
