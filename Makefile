CC = cc
CFLAGS = -Wall -Wextra - Werror
NAME = libftprintf.a
SRCS = ft_printf.c printf.h func.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

 $(NAME) : $(OBJS)
 	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re