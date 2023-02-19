/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:39:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/19 21:24:16 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*enum t_error
{
    OK =    0,
    ERROR = 1 
};*/

typedef struct s_pair
{
	int	data;
	int	indexs;
}		t_pair;

typedef struct s_list
{
	int				data;
	size_t			indexs;
	size_t			steps;
	size_t			flag_1;
	size_t			flag_2;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef struct s_stack
{
	char 			name;
	unsigned int	count;
    int             min_data;
    int             maxs_data;
	struct s_list	*first;
	struct s_list	*last;
}	t_stack;

int		push_stack(t_stack *st, int value);
int		pop_stack(t_stack *st);

t_stack	*constructor_stack(char name);
void	free_stack(t_stack *st);
int		initialization_stack(t_stack *st, int *mas, long size);

void	sa_swap(t_stack *st);
void	sb_swap(t_stack *st);
void	ss_swap(t_stack *st_a, t_stack *st_b);

int		pa_swap(t_stack *a, t_stack *b);
int		pb_swap(t_stack *a, t_stack *b);

void	ra_swap(t_stack *a);
void	rb_swap(t_stack *b);
void	rr_swap(t_stack *a, t_stack *b);

void	rra_swap(t_stack *a);
void	rrb_swap(t_stack *b);
void	rrr_swap(t_stack *a, t_stack *b);

int		check_argv(int **mas, char **argv, size_t *count);
int		check_mas(int *mas, char **arg, size_t count, size_t indexs);
int		check_duplikat(int *mas, int count);
long	ft_atoi(char *nptr);
int		chack_number(char *mas);
int		ft_strlen(char *a);

char	**ft_split(char *s, char c);

size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	cou_mas(char **mas);
int		*ft_intlcpy(int *dest, int *src, size_t size);
void	ft_zero(char **ptr, size_t i);

int		free_arg(char **arg);
int		free_error(char **arg, int *mas);

int		ft_sort(t_stack *a, t_stack *b);//jnjel

int     sort_try(t_stack *a);
int		full_sort_try(t_stack *a);
int		sort_mini(t_stack *a);
int		roll_for_full_sort(t_stack *a);

int		check_sort(t_stack *a);
int		check_full_sort(t_stack *a);

int		check_and_push(t_stack *st1, t_stack *st2);//jnjel

t_list	*check_min(t_stack *s1, t_stack *s2); //jnjel

size_t  ret_indexs(t_stack *s1, int data); 
void    stack_min_maxs(t_stack *s1); //jnjel

int		my_sort(t_stack *a, t_stack *b);

int		sort_five(t_steck *a, t_steck *b);

void	crat_indexs(t_stack *st);
size_t	crat_const(size_t i); //sarqel

void	push_a_b(t_steck *a, t_steck *b, size_t i); //sarqel
void	push_b_a(t_steck *a, t_steck *b, size_t i); //sargel


#endif
