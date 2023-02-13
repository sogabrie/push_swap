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

int main(int argc, char **argv)
{
	int	*mas;

	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	--argc;
	++argv;
	mas = malloc(argc * sizeof(int));
	if (!mas)
		return (write (1, "ERROR_1\n", 8) && 0);
	if (check_argv(mas, argv, argc))
		return (write (1, "ERROR_2\n", 8) && 0);
    t_stack *a = constructor_stack();
    t_stack *b = constructor_stack();
    if (!a && !b)
        return (write(1, "ERROR_3\n", 8) && 0);
    initialization_stack(a, mas, argc);


	pb_swap(a, b);
	pb_swap(a, b);
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
