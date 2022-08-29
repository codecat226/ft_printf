# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 17:18:36 by rnishimu          #+#    #+#              #
#    Updated: 2022/01/07 11:45:49 by rnishimu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRCS = ft_printf.c ft_char.c ft_dec.c ft_hex_big.c \
ft_uint.c ft_hex_small.c ft_int.c ft_ptr.c ft_string.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	cd libft && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd libft && $(MAKE) fclean

re: fclean all

.PHONY: clean fclean re all