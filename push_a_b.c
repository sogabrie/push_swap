/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:12:14 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/19 21:24:14 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_b(t_stack *a, t_stack *b, size_t i)
{
    //printf("push_a_b_1 \n");
    while (a->count > 0)
    {
        //printf("skizb a->caunt %lu\n", a->count);
        if (a->first->indexs <= b->count)
        {
            pb_swap(a,b);
            if (b->count > 0)
                rb_swap(b);
        }
        else if (a->first->indexs <= b->count + i)
        {
            pb_swap(a, b);
        }
        else
            ra_swap(a);
        //printf("verj  a->count = %lu\n", a->count);
    }
}
