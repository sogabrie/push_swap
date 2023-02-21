#include "checker.h"

void	do_swap(t_stack *a, t_stack *b, char *arg)
{
	if (!ft_strcmp(arg, "sa"))
		sa_swap(a);
	else if (!ft_strcmp(arg, "sb"))
		sb_swap(b);
	else if (!ft_strcmp(arg, "ss"))
		ss_swap(a, b);
	else if (!ft_strcmp(arg, "pa"))
		pa_swap(a, b);
	else if (!ft_strcmp(arg, "pb"))
		pb_swap(a, b);
	else if (!ft_strcmp(arg, "ra"))
		ra_swap(a);
	else if (!ft_strcmp(arg, "rb"))
		rb_swap(b);
	else if (!ft_strcmp(arg, "rr"))
		rr_swap(a, b);
	else if (!ft_strcmp(arg, "rra"))
		rra_swap(a);
	else if (!ft_strcmp(arg, "rrb"))
		rrb_swap(b);
	else if (!ft_strcmp(arg, "rrr"))
		rrr_swap(a, b);
}

int	do_args(t_stack *a, t_stack *b, char **args)
{
	size_t	i;

	i = 0;
	while (args[i])
	{
		do_swap(a, b, args[i++]);
	}
	if (!check_full_sort(a) && !b->count)
		return (0);
	return (1);
}