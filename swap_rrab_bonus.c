/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrab_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:31:35 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/22 14:31:37 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_rrab(t_stack *st)
{
	if (!st || st->count < 2)
		return ;
	st->last->next = st->first;
	st->first->prev = st->last;
	st->last = st->last->prev;
	st->first = st->last->next;
	st->last->next = 0;
	st->first->prev = 0;
}

void	rra_swap(t_stack *a)
{
	swap_rrab(a);
}

void	rrb_swap(t_stack *b)
{
	swap_rrab(b);
}

void	rrr_swap(t_stack *a, t_stack *b)
{
	swap_rrab(a);
	swap_rrab(b);
}
