SRCS			= push_swap.c initialization_stack.c swap_sab.c \
				  push_pop.c swap_pab.c swap_rab.c swap_rrab.c \
				  check.c check_util.c

OBJS			= $(SRCS:.c=.o)

#BONUS			= 

#BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

all:			$(OBJS) $(NAME) Makefile

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS) Makefile
				$(CC) $(OBJS) $(BONUS_OBJS) -o $(NAME)

.PHONY:			all clean fclean re bonus
