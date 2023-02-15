/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:54:51 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 19:35:23 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_stack *a, t_stack *b)
{
	if (a->count == 3)
		return (full_sort_try(a));
	if (a->count < 3)
		return (sort_mini(a));
	(void)b;
	/*while (check_sort(a) && a->count > 3)
		check_and_push(b, a);
    if (a->count == 3)
        sort_try(a);
	while (a->count > 0)
		check_and_push(a, b);
	roll_for_full_sort(a);
	return (check_full_sort(a));*/
	return (0);
}
