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

void	bubble_sort(t_pair	*mas, size_t count)
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
			if (mas[i].data > mas[j].data)
			{
				cp = mas[i].data;
				mas[i].data = mas[j].data;
				mas[j].data = cp;
			}
			++j;
		}
		++i;
	}
}

void	add_indexs(t_pair *mas, t_stack *st)
{
	size_t	i;
	t_list	*ls;

	i = 0;
	while (i <= st->count)
	{
		mas[i].indexs = i;
		++i;
	}
	ls = st->first;
	while (ls)
	{
		i = 0;
		while (i < st->count)
		{
			if (ls->data == mas[i].data)
				ls->indexs = mas[i].indexs;
			++i;
		}
		ls = ls->next;
	}
}

int	crat_indexs(t_stack *st)
{
	t_pair	*mas;
	int		i;
	t_list	*cp;

	mas = malloc(sizeof(t_pair) * st->count);
	if (!mas)
		return (1);
	i = 0;
	cp = st->first;
	while (cp)
	{
		mas[i].data = cp->data;
		cp = cp->next;
		++i;
	}
	bubble_sort(mas, st->count);
	add_indexs(mas, st);
	free(mas);
	return (0);
}
