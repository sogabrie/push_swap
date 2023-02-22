SRCS			= push_swap.c initialization_stack.c swap_sab.c \
				  push_pop.c swap_pab.c swap_rab.c swap_rrab.c \
				  check.c check_util.c ft_split.c cpy_cat_util.c \
				  error_1.c ft_sort_mini.c check_sort.c push_a_b.c \
				  sort.c crat_indexs.c sort_five.c crat_const.c

OBJS			= $(SRCS:.c=.o)

BONUS			= checker.c initialization_stack.c swap_sab_bonus.c \
				  push_pop.c swap_pab_bonus.c swap_rab_bonus.c swap_rrab_bonus.c \
				  check.c check_util.c ft_split.c cpy_cat_util.c \
				  error_1.c check_sort.c get_args.c get_next_line.c \
				  get_next_line_utils.c checker_util.c do_args.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

BONUS_NAME		= checker

all:			$(OBJS) $(NAME) Makefile

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME) $(BONUS_NAME)

re:				fclean $(NAME) $(BONUS_NAME)

bonus:			$(BONUS_OBJS) $(BONUS_NAME)

$(BONUS_NAME):	$(BONUS_OBJS) Makefile
				$(CC) $(BONUS_OBJS) -o $(BONUS_NAME)

test:			$(NAME)	
				$(eval ARG = $(shell jot -r 500 0 2000000))
				./push_swap $(ARG) | ./checker_Mac $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l
#				./push_swap $(ARG)

test_my:		$(NAME)	$(BONUS_NAME)
				$(eval ARG = $(shell jot -r 100 0 2000000))
				./push_swap $(ARG) | ./checker $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l
#				./push_swap $(ARG)

test_linux:		$(NAME)	
				$(eval ARG = $(shell shuf -i 0-2000000 -n 100))
				./push_swap $(ARG) | ./checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -ls
#				valgrind -s ./push_swap $(ARG)

test_linux_my:	$(NAME)	$(BONUS_NAME) Makefile
				$(eval ARG = $(shell shuf -i 0-2000000 -n 100))
				./push_swap $(ARG) | ./checker $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l
#				./push_swap $(ARG) | valgrind -s ./checker $(ARG)

.PHONY:			all clean fclean re bonus test bonus