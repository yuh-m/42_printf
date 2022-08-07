# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 21:31:44 by eryudi-m          #+#    #+#              #
#    Updated: 2022/08/06 21:22:34 by eryudi-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang -c
FLAGS = -Wall -Wextra -Werror
AR = ar -rcs

PATH_INCLUDE = ./include
PATH_SOURCE = ./source
PATH_OBJECT = ./object

INCLUDE_FILE = ft_printf.h
INCLUDE = $(addprefix $(PATH_INCLUDE)/,$(INCLUDE_FILE))

SOURCE_FILE = ft_printf.c \
				ft_print_char.c \
				ft_print_string.c \
				ft_print_integer.c \
				ft_print_unsigned_int.c \
				ft_print_pointer.c \
				ft_print_x.c \
				ft_itoa.c \
				ft_itoa_base.c \
				ft_printf_puts.c \
				ft_printf_utils.c

SOURCE = $(addprefix $(PATH_SOURCE)/,$(SOURCE_FILE))

OBJECT_FILE = $(SOURCE_FILE:.c=.o)
OBJECT = $(addprefix $(PATH_OBJECT)/,$(OBJECT_FILE))

all: $(NAME)
$(NAME): $(OBJECT) $(OBJECT_DIR) | $(PATH_OBJECT)
	$(AR) $(NAME) $(OBJECT)

$(PATH_OBJECT):
	mkdir -p $(PATH_OBJECT)

$(PATH_OBJECT)/%.o: $(PATH_SOURCE)/%.c | $(PATH_OBJECT)
	$(CC) $(FLAGS) -I $(PATH_INCLUDE) -o $@ -c $<

clean:
	@/bin/rm -rf $(PATH_OBJECT)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

##bonus:
##add flags as bonus if they will be done
.PHONY: all clean fclean re make_dir
