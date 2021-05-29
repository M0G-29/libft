# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 20:27:12 by lpaulo-d          #+#    #+#              #
#    Updated: 2021/05/29 14:52:23 by lpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_bzero.c\
		ft_atoi.c\
		ft_strncmp.c\
		ft_strlcat.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_strmapi.c

NAME = libft.a

CC = clang
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) -c $(FLAGS) -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
