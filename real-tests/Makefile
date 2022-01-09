# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 23:54:46 by nsierra-          #+#    #+#              #
#    Updated: 2022/01/09 03:19:08 by nsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

PROJECT_DIR = ../../libft/

SRC = main.c \
	atoi/00_launcher.c \
	atoi/01_positive_number.c \
	atoi/02_negative_number.c \
	atoi/03_zero.c \
	atoi/04_min.c \
	atoi/05_max.c \
	atoi/06_plus_sign.c \
	atoi/07_multiple_plus_signs.c \
	atoi/08_multiple_minus_signs.c \
	atoi/09_multiple_signs.c \
	atoi/10_minus_only.c \
	atoi/11_plus_only.c \
	atoi/12_invalid_at_start.c \
	atoi/13_invalid_in_number.c \
	atoi/14_empty.c \
	split/00_launcher.c \
	split/01_simple.c \
	split/02_no_split.c \
	split/03_split_on_zero.c \
	split/04_only_splittable_chars.c \
	split/05_empty_string.c \
	split/06_split_char_end.c \
	split/07_split_char_start.c \
	split/08_split_char_start_end.c \
	split/09_complex.c \

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g3 -I ../framework/ -I $(PROJECT_DIR)
LDFLAGS = -L ../ -L $(PROJECT_DIR)
LDLIBS = -lunit -lft

all: $(NAME)

$(NAME): $(OBJ) $(PROJECT_DIR)libft.a
	$(CC) $(OBJ) -o $@ $(LDFLAGS) $(LDLIBS)

test: libft all
	./tests

libft:
	make -C $(PROJECT_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
