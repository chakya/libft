# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 17:48:03 by cwijaya           #+#    #+#              #
#    Updated: 2023/09/13 17:48:08 by cwijaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# create a makefile to compile all the functions into a library
# and then compile the library into an executable

# Variables
CFLAGS = -Wall -Werror -Wextra
SRC = *.c
OBJ = $(SRC:.c=.o)
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



