# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afulmini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 13:17:14 by afulmini          #+#    #+#              #
#    Updated: 2020/02/27 14:40:39 by afulmini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ${SRC:.c=.o}

HEADER = includes

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I${HEADER}

RM = rm -f

all : ${NAME}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}

clean : 
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all
	
.PHONY: all clean fclean re
