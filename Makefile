# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souledla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 19:20:24 by souledla          #+#    #+#              #
#    Updated: 2022/10/12 13:54:13 by souledla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_calloc.c \
		ft_strdup.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_substr.c
OBJA = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft.h

all : $(NAME)
$(NAME): $(OBJA)
	ar crs $(NAME) $(OBJA)
%.o:%.c
	$(CC) -c $(CFLAGS) $^
bonus : $(OBJB)
	ar rcs $(NAME) $^
clean :
	rm -f $(OBJA) 
fclean : clean
	rm -f $(NAME)
re : fclean all