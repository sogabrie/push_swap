SRCS			= push_swap.c initialization_stack.c swap_sab.c \
				  push_pop.c swap_pab.c swap_rab.c swap_rrab.c \
				  check.c check_util.c ft_split.c cpy_cat_util.c \
				  error_1.c ft_sort.c ft_sort_mini.c check_sort.c \
				  check_push.c check_min.c check_min_util.c

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

test:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 100))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

.PHONY:			all clean fclean re bonus test
