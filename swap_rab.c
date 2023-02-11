#include "push_swap.h"

void  swap_rab(t_stack *st)
{
   t_list   *ls;

   if (st->count < 2)
      return ;
   ls = st->first;
   st->first = st->first->next;
   st->last->next = ls;
   st->last = ls;
   ls->next = 0;
}

void  ra_swap(t_stack *a)
{
   write (1, "ra\n", 3);
   swap_rab(a);
}

void  rb_swap(t_stack *b)
{
   write(1, "rb\n", 3);
   swap_rab(b);
}

void  rr_swap(t_stack *a, t_stack *b)
{
   write(1, "rr\n", 3);
   swap_rab(a);
   swap_rab(b);
}
