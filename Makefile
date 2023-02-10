SRCS			= push_swap.c 
OBJS			= $(SRCS:.c=.o)

BONUS			= 

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

all:			$(NAME) Makefile libft.h

$(NAME):		$(OBJS)
				$(CC) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS) Makefile libft.h
				$(CC) $(OBJS) $(BONUS_OBJS) -o $(NAME)

.PHONY:			all clean fclean re bonus
