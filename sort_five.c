/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:31:32 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/20 20:31:34 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min_ind(t_stack *a, t_stack *b, size_t ind)
{
	if (ind <= a->count / 2)
	{
		while (ind-- > 0)
			ra_swap(a);
	}
	else
	{
		while (ind++ < a->count)
			rra_swap(a);
	}
	pb_swap(a, b);
}

size_t	get_min_ind(t_stack *a)
{
	size_t	min;
	size_t	ind;
	t_list	*ls;

	ls = a->first;
	min = ls->indexs;
	while (ls)
	{
		if (min > ls->indexs)
			min = ls->indexs;
		ls = ls->next;
	}
	ind = 0;
	ls = a->first;
	while (ls)
	{
		if (ls->indexs == min)
			return (ind);
		ls = ls->next;
		++ind;
	}
	return (0);
}

int	sort_five(t_stack *a, t_stack *b)
{
	size_t	i;

	while (a->count > 3)
	{
		i = get_min_ind(a);
		push_min_ind(a, b, i);
	}
	full_sort_try(a);
	while (b->count > 0)
		pa_swap(a, b);
	return (0);
}
