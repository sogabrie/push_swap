#include "push_swap.h"

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

int   push_stack(t_stack *st, int value)
{
    //printf("Push_stacki arachi tox\n");
   t_list   *ls;

   ls = malloc(sizeof(t_list));
   if (!ls)
      return (1);
   ls->content = value;
   ls->next    = 0;
   if (!st->count)
    {
      st->first = ls;
      st->last = ls;
    }
    else
        push_stack_util(st, ls);
    st->count += 1;
    //printf("Pish_staki verch\n");
    return (0);
}

void  pop_stack_util(t_stack *st)
{
    t_list *a;

    if (st->count == 4)
        st->last_but_one = 0;
    a = st->first;
    st->first = a->next;
    free(a);
}

int   pop_stack(t_stack *st)
{
   int   i;

    if (!st->count)
        return (0);
    i = st->first->content;
    if (st->count == 1)
    {
        free(st->first);
        st->first = 0;
        st->last = 0;
    }
    else if (st->count == 2)
    {
        free(st->first);
        st->first = st->last;
    }
    else
        pop_stack_util(st);
    st->count -= 1;
    return (i);
}
