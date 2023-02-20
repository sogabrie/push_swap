/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crat_const.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:58:38 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/20 20:58:44 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_sqrt(size_t nb)
{
	size_t	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		++i;
	}
	return (i - 1);
}

size_t	ft_ln(size_t nb)
{
	size_t	i;
	size_t	n;

	i = 1;
	n = 4;
	while (n < nb)
	{
		n = n * 2;
		++i;
	}
	return (i - 1);
}

size_t	crat_const(size_t i)
{
	return (ft_ln(i) + ft_sqrt(i) + 1);
}
