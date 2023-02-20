/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:34:49 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/16 18:37:33 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*constructor_stack(void)
{
	t_stack	*st;

	st = malloc(sizeof(t_stack));
	if (!st)
		return (NULL);
	st->count = 0;
	st->first = 0;
	st->last = 0;
	return (st);
}

void	free_stack(t_stack *st)
{
	if (!st)
		return ;
	while (st->count)
		pop_stack(st);
	free(st);
}

int	initialization_stack(t_stack *st, int *mas, long size)
{
	int	err;

	err = 0;
	while (--size >= 0 && !err)
		err = push_stack(st, mas[size]);
	return (0);
}
