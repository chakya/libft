# create a makefile to compile all the functions into a library
# and then compile the library into an executable

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a
MAIN = main.c

# Rules
all: $(NAME)

test: all
	cc $(CFLAGS) .main.c -L. -lft -o main

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(MAIN)

re: fclean all

.PHONY: all clean fclean re


