NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I/libft -g

SRCS_DIR = .

SRC_FILES = data_order.c\
		data_validation.c\
		lst_function_2.c\
		lst_function.c\
		push_swap.c\
		pushes.c\
		reverses.c\
		rotates.c\
		swaps.c\
		utils.c

SRCS = $(addprefix $(SRCS_DIR)/, $(SRC_FILES))

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT_A   = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_A)
	-$(CC) $(OBJS) $(LIBFT_A) $(CFLAGS) -o $(NAME)

$(LIBFT_A):
	-$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	-$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	-$(MAKE) clean
	-$(MAKE) -C $(LIBFT_DIR) fclean


re: fclean all
	-$(MAKE)
	-$(MAKE) -C $(LIBFT_DIR) re

.PHONY: all clean fclean re