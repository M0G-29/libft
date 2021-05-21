# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 20:27:12 by lpaulo-d          #+#    #+#              #
#    Updated: 2021/05/21 14:50:35 by lpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = clang
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC =	ft_isalpha.c/
		ft_isascii.c/
		ft_isdigit.c/
		ft_isnum.c/
		ft_isprint.c/
		ft_memccpy.c/
		ft_memchr.c/
		ft_memcmp.c/
		ft_memcpy.c/
		ft_memmove.c/
		ft_memset.c/
		ft_strchr.c/
		ft_strlcpy.c/
		ft_strlen.c/
		ft_strnstr.c/
		ft_strrchr.c/
		ft_bzero/
		ft_atoi.c

OBJ = $(SRC:.c=.o)

ALL: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) -c $(FLAGS) $@ $< 
