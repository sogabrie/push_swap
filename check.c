/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:11:38 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 20:41:59 by sogabrie         ###   ########.fr       */
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

int	check_mas(int *mas, char **arg, size_t count, size_t indexs)
{
	size_t		i;
	size_t		j;
	long long	lo;

	j = 0;
	i = indexs;
	while (i < count + indexs)
	{
		if (chack_number(arg[j]))
			return (1);
		if (ft_strlen(arg[j]) > 15)
			return (1);
		lo = ft_atoi(arg[j++]);
		if (lo > 2147483647 || lo < -2147483648)
			return (1);
		mas[i++] = (int)lo;
	}
	return (0);
}

int	check_argv(int **mas, char **argv, size_t *count)
{
	size_t	i;
	size_t	cou;
	int		*ptr;
	char	**arg;

	i = 0;
	cou = 0;
	while (i < *count)
	{
		arg = ft_split(argv[i], ' ');
		if (!arg || !arg[0])
			return (free_arg(arg) + 1);
		ptr = malloc ((cou + cou_mas(arg)) * sizeof(int));
		if (!ptr)
			return (free_error(arg, ptr));
		*mas = ft_intlcpy(ptr, *mas, cou);
		if (check_mas(*mas, arg, cou_mas(arg), cou))
			return (free_error(arg, *mas));
		cou += cou_mas(arg);
		free_arg(arg);
		++i;
	}
	*count = cou;
	return (0);
}
