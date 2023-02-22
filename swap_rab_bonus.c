/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rab_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:31:16 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/22 14:31:18 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_rab(t_stack *st)
{
	if (!st || st->count < 2)
		return ;
	st->first = st->first->next;
	st->last->next = st->first->prev;
	st->first->prev->prev = st->last;
	st->last = st->first->prev;
	st->last->next = 0;
	st->first->prev = 0;
}

void	ra_swap(t_stack *a)
{
	swap_rab(a);
}

void	rb_swap(t_stack *b)
{
	swap_rab(b);
}

void	rr_swap(t_stack *a, t_stack *b)
{
	swap_rab(a);
	swap_rab(b);
}
