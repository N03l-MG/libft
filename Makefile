################################################################################
#                                                                              #
#                                    MAKEFILE                                  #
# Project:     libft/ft_printf/get_next_line                                   #
# Created:     07/10/2024                                                      #
# Author:      Noel Monzon (nmonzon)                                           #
#                                                                              #
################################################################################

################################################################################
###############                     BUILD SETUP                  ###############
################################################################################

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror

################################################################################
###############                    SOURCE FILES                  ###############
################################################################################

SOURCE = libft_base/ft_atoi.c libft_base/ft_bzero.c libft_base/ft_calloc.c libft_base/ft_isalnum.c \
		 libft_base/ft_isalpha.c libft_base/ft_isascii.c libft_base/ft_isdigit.c libft_base/ft_isprint.c \
		 libft_base/ft_itoa.c libft_base/ft_lstadd_back_bonus.c libft_base/ft_lstadd_front_bonus.c \
		 libft_base/ft_lstclear_bonus.c libft_base/ft_lstdelone_bonus.c libft_base/ft_lstiter_bonus.c \
		 libft_base/ft_lstlast_bonus.c libft_base/ft_lstmap_bonus.c libft_base/ft_lstnew_bonus.c \
		 libft_base/ft_lstsize_bonus.c libft_base/ft_memchr.c libft_base/ft_memcmp.c libft_base/ft_memcpy.c \
		 libft_base/ft_memmove.c libft_base/ft_memset.c libft_base/ft_putchar_fd.c libft_base/ft_putendl_fd.c \
		 libft_base/ft_putnbr_fd.c libft_base/ft_putstr_fd.c libft_base/ft_split.c libft_base/ft_strchr.c \
		 libft_base/ft_strdup.c libft_base/ft_striteri.c libft_base/ft_strjoin.c libft_base/ft_strlcat.c \
		 libft_base/ft_strlcpy.c libft_base/ft_strlen.c libft_base/ft_strmapi.c libft_base/ft_strncmp.c \
		 libft_base/ft_strnstr.c libft_base/ft_strrchr.c libft_base/ft_strtrim.c libft_base/ft_substr.c \
		 libft_base/ft_tolower.c libft_base/ft_toupper.c \
		 ft_printf/ft_printf.c ft_printf/handle_char.c ft_printf/handle_dec.c \
		 ft_printf/handle_hex.c ft_printf/handle_int.c ft_printf/handle_point.c ft_printf/handle_str.c \
		 ft_printf/hex_functions.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

OBJ = $(SOURCE:.c=.o)

################################################################################
###############                 COMPILATION RULES                ###############
################################################################################

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) *.a

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re