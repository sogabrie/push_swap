/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:46:44 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/14 22:15:10 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write (1, "rra\n", 4);
	swap_rrab(a);
}

void	rrb_swap(t_stack *b)
{
	write (1, "rrb\n", 4);
	swap_rrab(b);
}

void	rrr_swap(t_stack *a, t_stack *b)
{
	write (1, "rrr\n", 4);
	swap_rrab(a);
	swap_rrab(b);
}
