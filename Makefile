# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/27 19:27:15 by bahkaya           #+#    #+#              #
#    Updated: 2025/06/30 21:09:37 by bahkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ft_libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_OBJC= $(LIBFT_DIR)/$(OBJECTS)
SRCS = 	ft_printf_utils.c \
		ft_printf.c \
		ft_printf_itoa_utils.c
OBJC = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT): $(LIBFT_OBJC)
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJC)
	ar rcs $(NAME) $(OBJC) $(LIBFT)
clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJC)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

comp:
	@$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT)
run: comp
	@./a.out