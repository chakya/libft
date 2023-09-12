# create a makefile to compile all the functions into a library
# and then compile the library into an executable

# Variables
CFLAGS = -Wall -Werror -Wextra
SRC =*.c
OBJ = *.o
NAME = libft.a
MAIN = main.c

# Rules
all: $(NAME) clean

test: all clean
	cc $(CFLAGS) .main.c -L. -lft -o main

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(SRC)
	cc $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(MAIN)

re: fclean all



