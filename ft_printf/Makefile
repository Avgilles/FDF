NAME=ft_printf.a
INCLUDES=../include
OBJS_DIR=../obj/
CC=cc
CFLAGS=-Wall -Wextra -Werror -c
SRCS_FILES = ft_printf \
				ft_print_hex \
				ft_print_unsigned \
				ft_print_char \
				ft_print_ptr \
				ft_print_str \
				ft_putnbr

OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

all: $(NAME)

$(NAME):$(OBJS)
	ar -rcs $@ $^

$(OBJS_DIR)%.o: %.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDES) $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re