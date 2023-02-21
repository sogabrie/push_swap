/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crat_indexs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:07 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/20 20:55:12 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int	*mas, size_t count)
{
	size_t	i;
	size_t	j;
	int		cp;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (mas[i] > mas[j])
			{
				cp = mas[i];
				mas[i] = mas[j];
				mas[j] = cp;
			}
			++j;
		}
		++i;
	}
}

void	add_indexs(int *mas, t_stack *st)
{
	size_t	i;
	t_list	*ls;

	ls = st->first;
	while (ls)
	{
		i = 0;
		while (i < st->count)
		{
			if (ls->data == mas[i])
				ls->indexs = i;
			++i;
		}
		ls = ls->next;
	}
}

int	crat_indexs(t_stack *st)
{
	int		*mas;
	int		i;
	t_list	*cp;

	mas = malloc(sizeof(int) * st->count);
	if (!mas)
		return (1);
	i = 0;
	cp = st->first;
	while (cp)
	{
		mas[i] = cp->data;
		cp = cp->next;
		++i;
	}
	bubble_sort(mas, st->count);
	add_indexs(mas, st);
	free(mas);
	return (0);
}
