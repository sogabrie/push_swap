/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_mini.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:45:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 19:53:33 by sogabrie         ###   ########.fr       */
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

int	sort_try(t_stack *a)
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
