
NAME = ft_printf.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ft_libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_OBJC= $(LIBFT_DIR)/$(OBJECTS)

all: $(LIBFT)
$(LIBFT): $(LIBFT_OBJC)
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

comp:
	@$(CC) $(CFLAGS) $(NAME) $(LIBFT)
run: comp
	@./$(NAME)
