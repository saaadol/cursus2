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
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_substr.c
CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)
all: $(NAME)
	@echo "Processing ..."
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
$(OBJS):
	@cc -c $(FILES)
clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)
re: fclean all

