#include "push_swap.h"

int   swap_pab(t_stack *st1, t_stack *st2)
{
   if (!st1 || !st2 || !st2->count)
      return (0);
   return (push_stack(st1,pop_stack(st2)));
}

int   pa_swap(t_stack *a, t_stack *b)
{
   write(1, "pa\n", 3);
   return (swap_pab(a, b));
}

int   pb_swap(t_stack *a, t_stack *b)
{
   write(1, "pb\n", 3);
   return (swap_pab(b, a));
}
