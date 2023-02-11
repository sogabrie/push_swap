#include "push_swap.h"

void    print_stack(t_stack *st)
{
    t_list  *ls;

    if (!st && st->count < 1)
    {
        printf("ERROR Steck frry");
        return ;
    }
    ls = st->first;
    while(ls)
    {
        printf("cont = %d\n", ls->content);
        ls = ls->next;
    }
}

int main()
{
    t_stack *a = constructor_stack();
    t_stack *b = constructor_stack();
    if (!a && !b)
        return (printf("ERROR 1\n") && 0);
    int mas_a[10] = {5,6};
    int mas_b[10] = {12,13,14,15,16,17,18,19};
    printf("mtnum enq initializac\n");
    initialization_stack(a, mas_a, 2);
    initialization_stack(b, mas_b, 8);

    rr_swap(a,b);
    rrr_swap(a, b);

    printf("stak a\n");
    print_stack(a);
    printf("stack b\n");
    print_stack(b);
   free_stack(a);
   free_stack(b);

    return (0);
}
