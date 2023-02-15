/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:32:08 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 18:42:32 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack_util(t_stack *st, t_list *ls)
{
	ls->next = st->first;
	st->first->prev = ls;
	st->first = ls;
}

int	push_stack(t_stack *st, int value)
{
	t_list	*ls;

	ls = malloc(sizeof(t_list));
	if (!ls)
		return (1);
	ls->data = value;
	ls->next = 0;
	ls->prev = 0;
	if (!st->count)
	{
		st->first = ls;
		st->last = ls;
	}
	else
		push_stack_util(st, ls);
	st->count += 1;
	return (0);
}

void	pop_stack_util(t_stack *st)
{
	st->first = st->first->next;
	free(st->first->prev);
	st->first->prev = 0;
}

int	pop_stack(t_stack *st)
{
	int	i;

	if (!st->count)
		return (0);
	i = st->first->data;
	if (st->count == 1)
	{
		free(st->first);
		st->first = 0;
		st->last = 0;
	}
	else
		pop_stack_util(st);
	st->count -= 1;
	return (i);
}
