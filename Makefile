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
SRC	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_S	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c  \
ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJ = $(SRC:.c=.o)
BONUS_O = $(BONUS_S:.c=.o)
NAME = libft.a

# Rules
all: $(NAME) 

test: all clean
	cc $(CFLAGS) .main.c -L. -lft -o main

bonus: $(BONUS_O)
	ar rcs $(NAME) $(BONUS_O)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_O)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all



