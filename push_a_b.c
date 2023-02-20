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

void    push_ind(t_stack *a, t_stack *b, size_t ind)
{
    if (ind <= b->count / 2)
    {
        while (ind-- > 0)
            rb_swap(b);
    }
    else
    {
        while (ind++ < b->count)
            rrb_swap(b);
    }
    pa_swap(a, b);
}

size_t  get_ind(t_stack *b)
{
    size_t  maxs;
    size_t  ind;
    t_list  *ls;

    ls = b->first;
    maxs = ls->indexs;
    while (ls)
    {
        if (maxs < ls->indexs)
            maxs = ls->indexs;
        ls = ls->next;
    }
    ind = 0;
    ls = b->first;
    while (ls)
    {
        if (ls->indexs == maxs)
        return (ind);
        ls = ls->next;
        ++ind;
    }
    return (0);
}

void	push_b_a(t_stack *a, t_stack *b)
{
    size_t  ind;

    //printf("push_b_a_1\n");
    while (b->count > 0)
    {
        ind = get_ind(b);
        push_ind(a, b, ind);
    }
}

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
