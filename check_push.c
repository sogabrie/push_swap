/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:42:18 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/18 19:35:11 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_and_push(t_stack *s1, t_stack *s2)
{
	t_list	*min;
	size_t	i;

	stack_min_maxs(s1);
	min = check_min(s1, s2);
	//printf("check_push_1 flag_1 = %zu flag_2 = %zu\n", min->flag_1, min->flag_2);
	i = 0;
	if (min->flag_1 < min->flag_2)
	{
		if (min->flag_1 < (s1->count - min->flag_2) || \
                min->flag_2 < (s2->count - min->flag_1))
		{
			while (i < min->flag_1)
			{
				rr_swap(s1, s2);
				++i;
			}
			while (i < min->flag_2)
			{
				if (s2->name == 'a')
					rb_swap(s1);
				else
					ra_swap(s1);
				++i;
			}
		}
		else
		{
			while (i < s1->count - min->flag_2)
			{
				rrr_swap(s1, s2);
				++i;
			}
			while (i < s2->count - min->flag_1)
			{
				if (s2->name == 'a')
					rra_swap(s2);
				else
					rrb_swap(s2);
				++i;
			}	
		}
	}
	else
	{
		if (min->flag_2 < (s2->count - min->flag_1) || \
                min->flag_1 < s1->count - min->flag_2)
		{
			while (i < min->flag_2)
			{
				rr_swap(s1, s2);
				++i;
			}
			while (i < min->flag_1)
			{
				if (s2->name == 'a')
					rb_swap(s2);
				else
					ra_swap(s2);
				++i;
			}
		}
		else
		{
			while (i < s2->count - min->flag_1)
			{
				rrr_swap(s1, s2);
				++i;
			}
			while (i < s1->count - min->flag_2)
			{
				if (s1->name == 'a')
					rra_swap(s1);
				else
					rrb_swap(s1);
				++i;
			}	
		}
	}
	if (s2->name == 'a')
		pb_swap(s2, s1);
	else
		pa_swap(s1, s2);
	return (0);
}
