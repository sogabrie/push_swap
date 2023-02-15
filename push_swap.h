/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:39:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/02/15 20:33:58 by sogabrie         ###   ########.fr       */
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

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef struct s_stack
{
	unsigned int	count;
	struct s_list	*first;
	struct s_list	*last;
}	t_stack;

int		push_stack(t_stack *st, int value);
int		pop_stack(t_stack *st);

t_stack	*constructor_stack(void);
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

int		ft_sort(t_stack *a, t_stack *b);

int		sort_try(t_stack *a);
int		sort_mini(t_stack *a);
int		roll_for_full_sort(t_stack *a);

int		check_sort(t_stack *a);
int		check_full_sort(t_stack *a);

int		check_and_push(t_stack *st1, t_stack *st2);

#endif
