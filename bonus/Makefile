# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 15:57:32 by ygonzale          #+#    #+#              #
#    Updated: 2022/05/06 12:20:12 by ygonzale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_BONUS = ft_printf_bonus.c ft_printf_utils_bonus.c control_flags.c \
			ft_printf.c ft_printf_utils.c \


OBJS_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)
	@echo "\033[92;3;4mcompilation done\033[0m" ✅


$(OBJS_BONUS): $(SRC_BONUS)
	gcc $(CFLAGS) -c $(SRC_BONUS)

bonus: all

#bonus: $(OBJS) $(OBJS_BONUS)
#	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
#	@echo "\033[93;3;4mbonus compilation done\033[0m" ✅

clean:
	@rm -f $(OBJS_BONUS)

fclean:
	@rm -f $(NAME) $(OBJS_BONUS)
	@echo "\033[34;3;4myes my lord, all clean\033[0m" 🗑
	
re: fclean all bonus

.PHONY = all clean fclean re bonus
