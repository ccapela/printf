SRCS = ft_putnbr.c ft_putnbr_u.c ft_putnbr_v.c ft_putnbr_x.c ft_putstr.c ft_putchar.c ft_printf.c ft_putnbr_p.c

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME): $(OBJS) ft_printf.h
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
