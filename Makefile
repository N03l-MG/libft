NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SOURCE = $(wildcard ./libft_base/*.c ./ft_printf/*.c ./get_next_line/*.c)

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
