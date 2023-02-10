#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

enum s_error
{
    OK =    0;
    ERROR = 1; 
} t_error;

typedef struct s_list
{
    int             content;
    struct s_list   *next;
}   t_list;

typedef struct s_stack
{
    unsigned int    count;
    t_list          *first;
    t_list          *last_but_one;
    t_list          *last;
}   t_stack;

t_error initalization_stack(t_stack st, int *mas, unsigned int size);
# endif
