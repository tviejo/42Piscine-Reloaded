# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tviejo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 16:59:11 by tviejo            #+#    #+#              #
#    Updated: 2024/05/15 10:21:03 by tviejo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file

SRC_DIR		=	./srcs/

SRC		=	ft_display_file.c

SRCS		=	${addprefix ${SRC_DIR}, ${SRC}}

OBJS		=	${SRCS:.c=.o}

CC		=	cc

CFLAGS		=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:		${OBJS}
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:			${NAME}

clean:
			${RM} ${OBJS}

fclean:			
			${RM} ${OBJS} ${NAME}

re:			fclean all

.PHONY:			all clean fclean re
