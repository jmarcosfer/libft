# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/21 15:01:23 by jmarcos           #+#    #+#              #
#    Updated: 2026/10/21 15:59:19 by jmarcos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADER := $(NAME:%.a=%.h)
SRCS := $(wildcard ft_*.c)
OBJECTS := $(SRCS:%.c=%.o)
CC_FLAGS := -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $^

$(OBJECTS): $(SRCS) $(HEADER) Makefile
	cc $(CC_FLAGS) -c $(SRCS)

re: fclean all

fclean: clean
	rm $(NAME)

clean:
	rm -f $(OBJECTS)
