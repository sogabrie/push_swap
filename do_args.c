/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:29:29 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/22 14:29:31 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	do_swap(t_stack *a, t_stack *b, char *arg)
{
	if (!ft_strcmp_n(arg, "sa"))
		sa_swap(a);
	else if (!ft_strcmp_n(arg, "sb"))
		sb_swap(b);
	else if (!ft_strcmp_n(arg, "ss"))
		ss_swap(a, b);
	else if (!ft_strcmp_n(arg, "pa"))
		pa_swap(a, b);
	else if (!ft_strcmp_n(arg, "pb"))
		pb_swap(a, b);
	else if (!ft_strcmp_n(arg, "ra"))
		ra_swap(a);
	else if (!ft_strcmp_n(arg, "rb"))
		rb_swap(b);
	else if (!ft_strcmp_n(arg, "rr"))
		rr_swap(a, b);
	else if (!ft_strcmp_n(arg, "rra"))
		rra_swap(a);
	else if (!ft_strcmp_n(arg, "rrb"))
		rrb_swap(b);
	else if (!ft_strcmp_n(arg, "rrr"))
		rrr_swap(a, b);
}

int	do_args(t_stack *a, t_stack *b, char **args)
{
	size_t	i;

	i = 0;
	while (args[i])
	{
		do_swap(a, b, args[i++]);
	}
	if (!check_full_sort(a) && !b->count)
	{
		return (0);
	}
	return (1);
}
