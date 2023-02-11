#include "push_swap.h"

void    ss_util(t_stack *st)
{
    int i;

    if (!st || st->count < 2)
        return ;
    i = st->first->content;
    st->first->content = st->first->next->content;
    st->first->next->content = i;
}

void    sa_swap(t_stack *st)
{
    ss_util(st);
    write(1, "sa\n", 3);
}

void    sb_swap(t_stack *st)
{
    ss_util(st);
    write(1, "sb\n", 3);
}

void    ss_swap(t_stack *st_a, t_stack *st_b)
{
    ss_util(st_a);
    ss_util(st_b);
    write(1, "ss\n", 3);
}
