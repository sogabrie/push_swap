#include "push_swap.h"

int main()
{
    t_stack *a = constructor_stack();
    if (a == 0)
        return (printf("ERROR 1\n") && 0);
    int mas[10] = {5,3,8,7,6};
    printf("mtnum enq initializac\n");
    int err = initialization_stack(a, mas, 5);
    while (a->count)
    {
        //printf("count = %d\n", a->count);
        printf("cont = %d\n",a->first->content);
        a->first = a->first->next;
        a->count -= 1;
    }
    return (err);
}
