# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/21 15:01:23 by jmarcos           #+#    #+#              #
#    Updated: 2026/10/21 15:29:21 by jmarcos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCS_DIR := . 
SRCS := $(wildcard ft_*.c)
OBJECTS := $(SRCS:%.c=%.o)
CC_FLAGS := -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $^

$(OBJECTS): $(SRCS:%=$(SRCS_DIR)/%)
	cc -c $(CC_FLAGS) $^

re: fclean all

fclean: clean
	rm $(NAME)

clean:
	rm -f $(OBJECTS)
