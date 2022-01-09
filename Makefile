# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 23:54:46 by nsierra-          #+#    #+#              #
#    Updated: 2022/01/09 03:47:55 by nsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

SRC = framework/ft/ft_bzero.c \
	framework/ft/ft_calloc.c \
	framework/ft/ft_lstadd_back.c \
	framework/ft/ft_lstclear.c \
	framework/ft/ft_lstnew.c \
	framework/ft/ft_memset.c \
	framework/ft/ft_strdup.c \
	framework/ft/ft_strlen.c \
	framework/ft/ft_memcpy.c \
	framework/ft/ft_putnbr.c \
	framework/ft/ft_putstr.c \
	framework/run_tests.c \
	framework/test_add.c \
	framework/init_suite.c \
	framework/end_suite.c \

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -pedantic -ansi -g3 -I framework/

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs  $(NAME) $(OBJ)

test:
	make --no-print-directory -C tests/ test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
