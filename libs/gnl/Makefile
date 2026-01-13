NAME=gnl.a
INCLUDES=./include
SRCDIR=./src
BUILDDIR=./build/
CC=cc
CFLAGS=-Wall -Wextra -Werror -c
SRCS = 	get_next_line \
		get_next_line_utils

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