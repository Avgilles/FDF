NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

LIBFT = libft
INCLUDES = include
SRCS_DIR = printf/
OBJS_DIR = obj/

SRCS_FILES = ft_printf \
				ft_print_hex \
				ft_print_unsigned \
				ft_print_char \
				ft_print_ptr \
				ft_print_str \
				ft_putnbr
				

SRC = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_FILES)))
OBJ = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))


all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	make -C $(LIBFT) clean
	rm -rf $(OBJS_DIR)

fclean: clean
	make -C $(LIBFT) fclean
	rm -f $(NAME) a.out
re: fclean all

run: re
	$(CC) -I$(INCLUDES) $(SRCS_DIR)_main.c $(NAME) -o a.out
	clear
	./a.out

.PHONY: all clean fclean re run