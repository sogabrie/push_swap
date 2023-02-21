/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:39:38 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 20:34:04 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_arg_one(char **arg)
{
	if (!(*arg))
		return (0);
	free(*arg);
	*arg = 0;
	return (0);
}

char	**free_arg_char(char **arg)
{
	size_t	i;

	i = 0;
	if (!arg)
		return (0);
	while (arg[i])
	{
		if (arg[i])
			free(arg[i]);
		++i;
	}
	free(arg);
	return (0);
}

int	free_arg(char **arg)
{
	size_t	i;

	i = 0;
	if (!arg)
		return (0);
	while (arg[i])
	{
		if (arg[i])
			free(arg[i]);
		++i;
	}
	free(arg);
	return (0);
}

int	free_error(char **arg, int *mas)
{
	if (mas)
		free(mas);
	return (free_arg(arg) + 1);
}
