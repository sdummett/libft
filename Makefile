# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdummett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 14:41:18 by sdummett          #+#    #+#              #
#    Updated: 2021/03/12 13:51:33 by sdummett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -c
AR = ar
ARFLAGS = rc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = srcs/ft_strlen.c srcs/ft_atoi.c srcs/ft_isalpha.c srcs/ft_tolower.c \
     srcs/ft_toupper.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isprint.c \
     srcs/ft_isascii.c srcs/ft_strncmp.c srcs/ft_strchr.c srcs/ft_strrchr.c \
     srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_itoa.c srcs/ft_strnstr.c \
     srcs/ft_isupper.c srcs/ft_islower.c srcs/ft_strjoin.c srcs/ft_split.c \
     srcs/ft_memcpy.c srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memccpy.c \
     srcs/ft_memmove.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_strdup.c \
     srcs/ft_calloc.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ $< $(CFLAGS)

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

cleanso:
	rm *.o
	rm -f libft.so

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
