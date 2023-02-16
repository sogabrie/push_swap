/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:55:42 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/16 18:19:40 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t  true_places_st_b(t_stack *s1, int a)
{
    size_t  i;
    t_list  *ls;

    if (a < s1->min_data)
    {
        if (s1->last->data == s1->min_data)
            return (0);
        return (ret_indexs(s1, s1->min_data) + 1);
    }
    if (a > s1->maxs_data)
        return (ret_indexs(s1, s1->maxs_data));
    if (a > s1->first->data && a < s1->last->data)
        return (0);
    i = 1;
    ls = s1->firs;
    while (ls->next)
    {
        if (a < ls->data && a > ls->next->data)
            return (i);
        ls = ls->next;
        ++i;
    }
}

size_t  true_places_st_a(t_stack *s1, int a)
{
    size_t  i;
    t_list  *ls;

    if (a < s1->min_data)
        return (ret_indexs(s1, s1->min_data));
    if (a > s1->maxs_data)
    {
        if (s1->maxt_data == s1->last->data)
            return (0);
        return (ret_indexs(s1, s1->maxs_data) + 1);
    }
    if (a < s1->first->data && a > s1->last->data)
        return (0);
    i = 1;
    ls = s1->firs;
    while (ls->next)
    {
        if (a > ls->data && a < ls->next->data)
            return (i);
        ls = ls->next;
        ++i;
    }
}

void    count_steps(t_steck *s1, t_stack *s2)
{
    t_list  *ls;

    ls = st2->first;
    while (ls)
    {
        if (ls->flag_1 < ls->flag_2)
        {
		    if (ls->flag_1 < (s1->count - ls->flag_2) || \
                    ls->flag_2 < (s2->count - ls->flag_1))
                ls->steps = ls->flags_2;
            else
                ls->steps = s2->count - min->flag_1;
        }
        else
        {
            if (ls->flag_2 < (s2->count - ls->flag_1) || \
                    ls->flag_1 < s1->count - ls-flag_2)
                ls->steps = ls->flags_1;
            else
                ls->steps = s1->count - ls->flag_2;
        }
        ls = ls->next;
    }
}

t_list	*check_min(t_stack *s1, t_stack *s2)
{
	t_list	*min;
    size_t  i;

    i = 0;
    min = s2->first;
    while (i < s2->count)
    {
        min->flag_1 = i;
        if (s1->name = 'b')
            min->flag_2 = true_places_st_b(s1, min->data);
        else
            min->flag_2 = true_places_st_a(s1, min->data);
        min = min->next;
        ++i;
    }
    count_steps(s1, s2);
    //min = s1->first;
    //min = s2->first;
    //min->flag_1 = 0;
    //min->flag_2 = 0;
    return (min);
}
