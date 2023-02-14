/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:39:38 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/14 21:07:19 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_arg(char **arg)
{
	size_t	i;

	i = 0;
	if (arg)
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
