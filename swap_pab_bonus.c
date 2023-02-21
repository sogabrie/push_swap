#include "checker.h"

int	swap_pab(t_stack *st1, t_stack *st2)
{
	size_t	i;

	if (!st1 || !st2 || !st2->count)
		return (0);
	i = st2->first->indexs;
	push_stack (st1, pop_stack(st2));
	st1->first->indexs = i;
	return (0);
}

int	pa_swap(t_stack *a, t_stack *b)
{
	return (swap_pab(a, b));
}

int	pb_swap(t_stack *a, t_stack *b)
{
	return (swap_pab(b, a));
}
