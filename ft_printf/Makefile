NAME=ft_printf.a
INCLUDES=./include
BUILDDIR=./build
CC=cc
CFLAGS=-Wall -Wextra -Werror -c
SRCS_FILES = ft_printf \
				ft_print_hex \
				ft_print_unsigned \
				ft_print_char \
				ft_print_ptr \
				ft_print_str \
				ft_putnbr

OBJS = $(addprefix $(BUILDDIR), $(SRCS:.c=.o))

all: $(NAME)

$(NAME):$(OBJS)
	ar -rcs $@ $^

$(BUILDDIR)%.o: %.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -I$(INCLUDES) $< -o $@

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm -rf $(BUILDDIR)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re