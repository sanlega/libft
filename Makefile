# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 20:28:28 by slegaris          #+#    #+#              #
#    Updated: 2023/03/15 15:46:32 by slegaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

RM = rm -f

CC = gcc

CCFLAGS = -Wall -Wextra -Werror 

NAME = libft.a

SRC =	ft_strlen.c\
		ft_isdigit.c\
		ft_isalpha.c\
		ft_substr.c\
		ft_putstr_fd.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_putnbr_fd.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_strncmp.c\
		ft_strchr.c\
		ft_strchr.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_strrchr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_memmove.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

BONUSSRC = ft_strlen.c

BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus