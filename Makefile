NAME = push_swap.a

SRCS = push_swap.c\
		commands.c\
		commands2.c\
		
OBJ = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

EXEC = test

$(EXEC): $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re