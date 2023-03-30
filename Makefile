# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 19:41:29 by slegaris          #+#    #+#              #
#    Updated: 2023/03/30 01:28:27 by slegaris         ###   ########.fr        #
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
	ft_strmapi.c\
	ft_striteri.c\
	ft_strlen.c\
	ft_split.c\

BSOURCES = ft_lstnew_bonus.c\
	   ft_lstadd_front_bonus.c\
	   ft_lstsize_bonus.c\
	   ft_lstlast_bonus.c\
	   ft_lstadd_back_bonus.c\
	   # ft_lstdelone_bonus.c\
	   # ft_lstclear_bonus.c\
	   # ft_lstiter_bonus.c\
	   # ft_lstmap_bonus.c\

OBJ = $(SRC:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(BOBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re
