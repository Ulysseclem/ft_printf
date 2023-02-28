DIRSRC		= ./srcs/

DIRINC		= ./includes/

DIROBJ		= ./objs/

DIRLIB		= ./libft/

SRC			= ft_printf

SRCS		= ./srcs/ft_printf.c \
			./srcs/ft_printf_function.c \
			./srcs/ft_nombre.c

HEAD		= ./includes/ 

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

NAMELFT		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c -I${DIRINC} -I${DIRLIB} $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			cd ${DIRLIB} && ${MAKE} && cp -v ${NAMELFT} ../${NAME}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

test:		$(NAME) $(SRCS)
			@ ${CC} -I ${DIRINC} -I ${DIRLIB} ./test/main.c ${NAME} && ./a.out

all:		$(NAME)

clean:
			${RM} ${OBJS}
			cd ${DIRLIB} && ${MAKE} clean

fclean:		clean
			${RM} $(NAME)
			${RM} a.out
			cd ${DIRLIB} && ${MAKE} fclean

re:			fclean all

.PHONY:		all clean fclean re
