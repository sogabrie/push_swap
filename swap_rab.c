/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:45:03 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 18:44:25 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write (1, "ra\n", 3);
	swap_rab(a);
}

void	rb_swap(t_stack *b)
{
	write(1, "rb\n", 3);
	swap_rab(b);
}

void	rr_swap(t_stack *a, t_stack *b)
{
	write(1, "rr\n", 3);
	swap_rab(a);
	swap_rab(b);
}
