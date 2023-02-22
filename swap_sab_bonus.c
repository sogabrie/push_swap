/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sab_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:32:02 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/22 14:32:04 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss_util(t_stack *st)
{
	int		i;
	size_t	j;

	if (!st || st->count < 2)
		return ;
	i = st->first->data;
	j = st->first->indexs;
	st->first->indexs = st->first->next->indexs;
	st->first->data = st->first->next->data;
	st->first->next->data = i;
	st->first->next->indexs = j;
}

void	sa_swap(t_stack *st)
{
	ss_util(st);
}

void	sb_swap(t_stack *st)
{
	ss_util(st);
}

void	ss_swap(t_stack *st_a, t_stack *st_b)
{
	ss_util(st_a);
	ss_util(st_b);
}
