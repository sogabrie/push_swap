/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:48:15 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 18:45:16 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss_util(t_stack *st)
{
	int	i;

	if (!st || st->count < 2)
		return ;
	i = st->first->data;
	st->first->data = st->first->next->data;
	st->first->next->data = i;
}

void	sa_swap(t_stack *st)
{
	ss_util(st);
	write(1, "sa\n", 3);
}

void	sb_swap(t_stack *st)
{
	ss_util(st);
	write(1, "sb\n", 3);
}

void	ss_swap(t_stack *st_a, t_stack *st_b)
{
	ss_util(st_a);
	ss_util(st_b);
	write(1, "ss\n", 3);
}
