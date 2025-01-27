# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvithara <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 19:48:07 by tvithara          #+#    #+#              #
#    Updated: 2025/01/16 19:48:09 by tvithara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC	= cc
AR	= ar rcs
RM	= rm -f
CFLAGS	= -Wall -Werror -Wextra
CP			= cp

SRC	= ./src/ft_print_hex.c ./src/ft_print_int.c ./src/ft_print_p.c \
	  ./src/ft_printf.c ./src/ft_printf_utils.c ./src/ft_print_u.c

OBJS	= $(SRC:.c=.o)

LIBFT		= ./includes/libft/libft.a
LIBFTDIR	= ./includes/libft

$(NAME):	$(LIBFT) $(OBJS)
				$(CP) $(LIBFT) $(NAME)
				@$(AR) $(NAME) $(OBJS)

$(LIBFT):	$(LIBFTDIR)
				@$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
			@$(MAKE) clean -C $(LIBFTDIR)
			@$(RM) $(OBJS)

fclean:		clean
				@$(MAKE) fclean -C $(LIBFTDIR)
				@$(RM) $(NAME)s

re: fclean all

.PHONY: all clean fclean re

