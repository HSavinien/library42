SRCS	=	get_next_line_utils_bonus.c \
			get_next_line_utils.c \
			get_next_line_bonus.c \
			get_next_line.c \


OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= get_next_line.a

#rules    -------------------------------------------------------------    rules

${NAME}:	${OBJS}
		ar -rcs ${NAME} ${OBJS}
		ranlib ${NAME}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
