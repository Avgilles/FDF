NAME=libft.a
INCLUDES=./include
SRCDIR=./src
BUILDDIR=./build/
CC=cc
CFLAGS=-Wall -Wextra -Werror -c
SRCS = ft_isdigit \
        ft_isalpha \
        ft_isalnum \
        ft_strlen \
        ft_isprint \
		ft_isascii \
        ft_memcpy \
        ft_memmove \
		ft_memchr \
        ft_memset \
        ft_memcmp \
        ft_bzero \
        ft_calloc \
		ft_strdup \
		ft_atoi \
		ft_strncmp \
		ft_toupper \
		ft_tolower \
		ft_strlcat \
		ft_strnstr \
		ft_strchr \
		ft_strrchr \
		ft_strlcpy \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd

OBJS = $(addprefix $(BUILDDIR), $(addsuffix .o, $(SRCS)))

all: $(NAME)

$(NAME):$(OBJS)
	ar -rcs $@ $^

$(BUILDDIR)%.o: $(SRCDIR)/%.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -I$(INCLUDES) $< -o $@

$(BUILDDIR):
	mkdir -p $@

clean:
	rm -rf $(BUILDDIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME:.a=.out)

re: fclean all

run: re 
	$(CC) $(CFLAGS) ./test/main.c -L. -lft -I./include -o $(NAME:.a=.out)

.PHONY: all clean fclean re