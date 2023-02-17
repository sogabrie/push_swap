/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:11:18 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/17 15:58:53 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ret_indexs(t_stack *s1, int data)
{
	size_t	i;
	t_list	*ls;

	i = 0;
	ls = s1->first;
	while (ls)
	{
		if (ls->data == data)
			return (i);
		ls = ls->next;
	}
	return (4294967295);
}

void	stack_min_maxs(t_stack *s1)
{
	t_list	*ls;

	ls = s1->first;
	if (ls)
	{
		s1->min_data = ls->data;
		s1->maxs_data = ls->data;
	}
	while (ls)
	{
		if (ls->data < s1->min_data)
			s1->min_data = ls->data;
		if (ls->data > s1->maxs_data)
			s1->maxs_data = ls->data;
		ls = ls->next;
	}
}
