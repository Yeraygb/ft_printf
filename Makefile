# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 15:57:32 by ygonzale          #+#    #+#              #
#    Updated: 2022/05/05 16:48:13 by ygonzale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c \

OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\033[92;3;4mas your order, compilation done\033[0m" ✅

$(OBJS): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS) $(NAME)
	@echo "\033[34;3;4myes my lord, all clean\033[0m" 🗑
	
re: fclean all

.PHONY = all clean fclean re
