/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:01:47 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/16 17:37:27 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_full_sort(t_stack *a)
{
	t_list	*i;

    //if (!a->count)
    //    return (0);
	i = a->first;
	while (i->next)
	{
		if (i->data > i->next->data)
			return (1);
		i = i->next;
	}
	return (0);
}

int	check_sort(t_stack *a)
{
	t_list	*i;
	t_list	*j;
	t_list	*c;

	i = a->first;
	j = i;
	while (i)
	{
		if (j->data > i->data)
			j = i;
		i = i->next;
	}
	c = j;
	i = 0;
	while (i != c)
	{
		if (j->next == 0)
			i = a->first;
		else
			i = j->next;
		if (j->data > i->data && i != c)
			return (1);
		j = i;
	}
	return (0);
}
