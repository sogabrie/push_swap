#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

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

t_stack *constructor_stack();
int     initialization_stack(t_stack *st, int *mas, long size);
# endif
