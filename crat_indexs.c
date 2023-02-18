#include "push_swap.h"

void	bubble_sort(t_pair	*mas, size_t count)
{
	int	i;
	int	j;
	int	cp;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < i)
		{
			if (mas[i]->data < mas[j]->data)
			{
				i = mas[i]->data;
				mas[i]->data = mas[j]->data;
				mas[j]->data = i;
			}
			++j;
		}
		++i;
	}
}

void	add_indexs(t_pair *mas, t_stack *st)
{
	int		i;
	t_list	*ls;

	i = 1;
	while (i <= st->count)
		mas->indexs = i++;
	ls = st->first;
	while (ls)
	{
		i = 0;
		while (i < st->count)
		{
			if (ls->data == mas->data)
				ls->indexs = mas->indexs;
			++i;
		}
		ls = ls->next;
	}
}

void	crat_indexs(t_stack *st)
{
	t_pair	*mas;
	int		i;
	t_slist	*cp;

	mas = malloc(sizeof(t_pair) * st->count);
	if(!mas)
		return ;
	i = 0;
	cp = st->first;
	while (cp)
	{
		mas[i]->data = cp->data;
		cp = cp->next;
		++i;
	}
	bubble_sort(mas, st->count);
	add_indexs(mas, st);
}