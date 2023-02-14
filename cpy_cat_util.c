/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_cat_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:21:03 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/14 21:13:02 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
			i = 0;
	}
	while (src[i] != 0)
		++i;
	return (i);
}

size_t	cou_mas(char **mas)
{
	size_t	i;

	i = 0;
	while (mas[i])
		++i;
	return (i);
}

int	*ft_intlcpy(int *dest, int *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		++i;
	}
	free(src);
	return (dest);
}

void	ft_zero(char **ptr, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
		ptr[j++] = 0;
}
