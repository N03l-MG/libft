NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_printf.c handle_char.c handle_point.c handle_int.c handle_hex.c handle_str.c handle_dec.c hex_functions.c \
		 libft/ft_strlen.c libft/ft_itoa.c libft/ft_toupper.c libft/ft_strlcpy.c libft/ft_strdup.c

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
