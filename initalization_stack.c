#include "push_swap.h"

t_stack    constructor_stack()
{
    t_stack *st;

    st = malloc(sizeof(t_stack));
    if (!st)
        return (0);
    st->count = 0
    st->first = 0;
    st->last_but_one = 0;
    st->last = 0;
    return (st);
}

void    push_stack_util(t_stack st, t_list ls)
{
    if (st->count == 1)
    {
        st->first = ls;
        st->first->next = st->last;
    }
    else if (st->count == 3)
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

t_error push_stack(t_stack st, int value)
{
    t_list  *ls;

    ls = malloc(sizeof(t_list));
    if (!cont)
        return (ERROR);
    ls->content = value;
    ls->next    = 0;
    if (!st->count)
    {
        st->first = ls;
        st->last = ls;
        return (OK);
    }
    push_stack_util(st, ls);
    st->count += 1;
    return (OK);
}

t_error initialization_stack(t_stack st, int *mas, unsigned int size)
{
    t_error err;

    err = OK;
    while (--size >= 0 && err == OK)
        err = push(st, mas[size]);
    return (err);
}
