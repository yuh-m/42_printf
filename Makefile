# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 21:31:44 by eryudi-m          #+#    #+#              #
#    Updated: 2022/08/04 23:17:38 by eryudi-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a

CC = gcc -c

FLAGS = -Wall -Wextra -Werror

AR = ar -rcs

PATH_SRC = source/
PATH_INC = include/

#add the written.c files here
SRC = $(PATH_SRC)ft_printf.c \

OBJ = $(SRC: .c=.o)
#don't know if I'll really need the header or I can just put them all together
#pick the functions of the printf and add to the scr

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC)
	$(AR) $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
