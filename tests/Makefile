# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 23:54:46 by nsierra-          #+#    #+#              #
#    Updated: 2022/01/09 07:03:14 by nsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

SRC = main.c \
	failure/00_launcher.c \
	failure/01_test.c \
	sigbus/00_launcher.c \
	sigbus/01_test.c \
	sigsev/00_launcher.c \
	sigsev/01_test.c \
	success/00_launcher.c \
	success/01_test.c \
	stdout/00_launcher.c \
	stdout/01_test.c \
	timeout/00_launcher.c \
	timeout/01_test.c \
	signals/00_launcher.c \
	signals/01_abort.c \
	signals/02_fpe.c \
	signals/03_pipe.c \
	signals/04_ill.c \

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g3 -I ../framework/
LDFLAGS = -L ../
LDLIBS = -lunit

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@ $(LDFLAGS) $(LDLIBS)

test: all
	./tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
