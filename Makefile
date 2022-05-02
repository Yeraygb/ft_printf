# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 15:57:32 by ygonzale          #+#    #+#              #
#    Updated: 2022/05/02 12:59:07 by ygonzale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c

OBJS = $(SRC.c=.o)
DIR	= objs/

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(DIR): $(SRC)
	mkdir -p $(DIR)
	gcc $(CFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS) $(NAME)
	
re: fclean all

.PHONY = all clean fclean re
