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
