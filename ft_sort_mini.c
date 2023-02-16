/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_mini.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:20:24 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/16 17:46:20 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_mini(t_stack *a)
{
	if (a->count < 2)
		return (0);
	if (a->first->data < a->first->next->data)
		return (0);
	sa_swap(a);
	return (0);
}

int	sort_last_data(t_stack *a)
{
	if (a->first->data < a->first->next->data)
		return (0);
	sa_swap(a);
	return (0);
}

int	full_sort_try(t_stack *a)
{
	if (a->first->data > a->first->next->data && \
			a->first->data > a->last->data)
	{
		ra_swap(a);
		return (sort_last_data(a));
	}
	if (a->last->data > a->first->data && \
			a->last->data > a->first->next->data)
		return (sort_last_data(a));
	rra_swap(a);
	return (sort_last_data(a));
}

size_t	roll_util(t_stack *a)
{
	int		value;
	t_list	*a2;
	size_t	i;

	a2 = a->first;
	value = a2->data;
	while (a2)
	{
		if (value > a2->data)
			value = a2->data;
		a2 = a2->next;
	}
	a2 = a->first;
	i = 0;
	while (a2->data != value)
	{
		++i;
		a2 = a2->next;
	}
	return (i);
}

int	roll_for_full_sort(t_stack *a)
{
	size_t	i;
	size_t	j;

	i = roll_util(a);
	j = 0;
	if ((a->count / 2) < i)
	{
		while (j < a->count - i)
		{
			rra_swap(a);
			++j;
		}
		return (0);
	}
	while (i > 0)
	{
		ra_swap(a);
		--i;
	}
	return (0);
}
