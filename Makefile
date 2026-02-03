
NAME = fdf
CC = cc
# CFLAGS = -Wall -Wextra -Werror
CFLAGS = 

INCLUDES = -Iinclude -Ilibs/libft_printf/include -Ilibs/gnl/include -Ilibs/minilibx


LIBFT_PRINTF_DIR = libs/libft_printf
LIBFT_PRINTF = $(LIBFT_PRINTF_DIR)/libft_printf.a

GNL_DIR = libs/gnl
GNL = $(GNL_DIR)/gnl.a

MLX_DIR = libs/minilibx
MLX = $(MLX_DIR)/libmlx.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lz

SRCDIR = src
BUILDDIR = build/

SRCS = main.c

OBJS = $(addprefix $(BUILDDIR), $(SRCS:.c=.o))

all: $(NAME)

$(LIBFT_PRINTF):
	@echo "Compiling libft_printf..."
	@make -C $(LIBFT_PRINTF_DIR)

$(GNL):
	@echo "Compiling gnl..."
	@make -C $(GNL_DIR)

$(MLX):
	@echo "Compiling minilibx..."
	@cd $(MLX_DIR) && ./configure

$(NAME): $(LIBFT_PRINTF) $(GNL) $(MLX) $(OBJS)
	@echo "Linking $(NAME)..."
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PRINTF) $(GNL) $(MLX_FLAGS) -o $(NAME)
	@echo "✓ $(NAME) compiled successfully!"

$(BUILDDIR)%.o: $(SRCDIR)/%.c | $(BUILDDIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

clean:
	@make -C $(LIBFT_PRINTF_DIR) clean
	@make -C $(GNL_DIR) clean
	@cd $(MLX_DIR) && make clean 2>/dev/null || true
	@rm -rf $(BUILDDIR)
	@echo "✓ Object files cleaned"

fclean: clean
	@make -C $(LIBFT_PRINTF_DIR) fclean
	@make -C $(GNL_DIR) fclean
	@rm -f $(NAME)
	@echo "✓ $(NAME) cleaned"

re: fclean all


run: $(NAME)
	@clear
	@./$(NAME)

.PHONY: all clean fclean re run