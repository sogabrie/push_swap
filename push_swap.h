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
    int             content;
    struct s_list   *next;
}   t_list;

typedef struct s_stack
{
    unsigned int    count;
    struct s_list   *first;
    struct s_list   *last_but_one;
    struct s_list   *last;
}   t_stack;

int    push_stack(t_stack *st, int value);
int    pop_stack(t_stack *st);

t_stack *constructor_stack();
void    free_stack(t_stack *st);
int     initialization_stack(t_stack *st, int *mas, long size);

void    sa_swap(t_stack *st);
void    sb_swap(t_stack *st);
void    ss_swap(t_stack *st_a, t_stack *st_b);

int     pa_swap(t_stack *a, t_stack *b);
int     pb_swap(t_stack *a, t_stack *b);

void    ra_swap(t_stack *a);
void    rb_swap(t_stack *b);
void    rr_swap(t_stack *a, t_stack *b);

# endif
