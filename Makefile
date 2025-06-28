# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/27 19:27:15 by bahkaya           #+#    #+#              #
#    Updated: 2025/06/28 17:45:48 by bahkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_printf.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ft_libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_OBJC= $(LIBFT_DIR)/$(OBJECTS)

all: $(LIBFT)
$(LIBFT): $(LIBFT_OBJC)
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

comp:
	@$(CC) $(CFLAGS) ft_printf.c $(LIBFT)
run: comp
	@./a.out