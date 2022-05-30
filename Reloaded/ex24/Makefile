# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 22:57:03 by gde-mora          #+#    #+#              #
#    Updated: 2022/05/29 23:30:56 by gde-mora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ${SRC:.c=.o}

HEADER = includes/

RM = rm -f

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

all: ${NAME}

.c.o:
	${CC} ${CCFLAGS} -c $< -o $@ -I ${HEADER}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
