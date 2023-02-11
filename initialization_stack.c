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

void  free_stack(t_stack *st)
{
   if (!st)
      return ;
   while (st->count)
      pop_stack(st);
   free(st);
}

int initialization_stack(t_stack *st, int *mas, long size)
{
   int   err;

   err = 0;
   while (--size >= 0 && !err)
      err = push_stack(st, mas[size]);
   return (0);
}
