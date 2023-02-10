#include "push_swap.h"

t_stack    *constructor_stack()
{
    t_stack *st;

    st = malloc(sizeof(t_stack));
    if (!st)
        return (NULL);
    st->count = 0;
    st->first = 0;
    st->last_but_one = 0;
    st->last = 0;
    return (st);
}

void    push_stack_util(t_stack *st, t_list *ls)
{
    if (st->count == 3)
    {
        st->last_but_one = st->first->next;
        ls->next = st->first;
        st->first = ls;
    }
    else
    {
        ls->next = st->first;
        st->first = ls;
    }
}

int push_stack(t_stack *st, int value)
{
    t_list  *ls;

    //printf("Push_stacki arachi tox\n");
    ls = malloc(sizeof(t_list));
    if (!ls)
        return (1);
    ls->content = value;
    ls->next    = 0;
    if (!st->count)
    {
        st->first = ls;
        st->last = ls;
        st->count += 1;
        return (0);
    }
    push_stack_util(st, ls);
    st->count += 1;
    //printf("Pish_staki verch\n");
    return (0);
}

int initialization_stack(t_stack *st, int *mas, long size)
{
    int err;

    err = 0;
    while (--size >= 0 && !err)
        err = push_stack(st, mas[size]);
    return (err);
}
