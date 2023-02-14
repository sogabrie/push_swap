/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:28:47 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/13 20:29:37 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplikat(int *mas, int count)
{
	int	i;
	int	j;
	int	cp;

	i = 0;
	while (i < count)
	{
		cp = mas[i];
		j = i + 1;
		while (j < count)
		{
			if (cp == mas[j])
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int	check_argv(int *mas, char **arg, int count)
{
	int		i;
	long	lo;

	i = 0;
	while (i < count)
	{
		if (chack_number(arg[i]))
			return (1);
		lo = ft_atoi(arg[i]);
		if (lo > 2147483647 || lo < -2147483648)
			return (1);
		mas[i++] = (int)lo;
	}
	if (check_duplikat(mas, count))
		return (1);
	return (0);
}
