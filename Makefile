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

NAME = ftlib
FILES = ft_calloc.c \
		ft_strdup.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strjoin.c \
		ft_substr.c
CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c =.o)
all: $(NAME)
	@echo "Processing ..."
$(NAME): $(OBJS)
	@cc -o $(NAME) $(OBJS)
$(OBJS):
	@cc -c $(FILES)
clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)
re: fclean all

