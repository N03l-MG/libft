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
FLAGS = -Wall -Wextra -Werror -Iinclude

################################################################################
###############                     DIRECTORIES                  ###############
################################################################################

SRC_DIR = src
BOOL_DIR = $(SRC_DIR)/booleans
CONV_DIR = $(SRC_DIR)/conversion
MEM_DIR = $(SRC_DIR)/memory
STR_DIR = $(SRC_DIR)/strings
LIST_DIR = $(SRC_DIR)/linked_lists_bonus
UTIL_DIR = $(SRC_DIR)/utils
PRINT_DIR = $(SRC_DIR)/ft_fprintf
GNL_DIR = $(SRC_DIR)/get_next_line

################################################################################
###############                    SOURCE FILES                  ###############
################################################################################

BOOL_SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
CONV_SRC = ft_atof.c ft_atoi.c ft_itoa.c
MEM_SRC = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		  ft_memset.c
STR_SRC = ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c \
		  ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c \
		  ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c
LIST_SRC = ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstmap_bonus.c \
		   ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c \
		   ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c
UTIL_SRC = ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
		   ft_toupper.c ft_tolower.c
PRINT_SRC = ft_fprintf.c handle_dec.c handle_int.c handle_str.c handle_char.c \
			handle_hex.c handle_point.c hex_functions.c
GNL_SRC = get_next_line.c get_next_line_utils.c

BOOL_SRC := $(addprefix $(BOOL_DIR)/, $(BOOL_SRC))
CONV_SRC := $(addprefix $(CONV_DIR)/, $(CONV_SRC))
MEM_SRC := $(addprefix $(MEM_DIR)/, $(MEM_SRC))
STR_SRC := $(addprefix $(STR_DIR)/, $(STR_SRC))
LIST_SRC := $(addprefix $(LIST_DIR)/, $(LIST_SRC))
UTIL_SRC := $(addprefix $(UTIL_DIR)/, $(UTIL_SRC))
PRINT_SRC := $(addprefix $(PRINT_DIR)/, $(PRINT_SRC))
GNL_SRC := $(addprefix $(GNL_DIR)/, $(GNL_SRC))

ALL_SRC = $(BOOL_SRC) $(CONV_SRC) $(MEM_SRC) $(STR_SRC) $(LIST_SRC) \
          $(UTIL_SRC) $(PRINT_SRC) $(GNL_SRC)
ALL_OBJ = $(ALL_SRC:.c=.o)

################################################################################
###############                 COMPILATION RULES                ###############
################################################################################

all: $(NAME)

$(NAME): $(ALL_OBJ)
	ar rc $(NAME) $(ALL_OBJ)
	ranlib $(NAME)

%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(ALL_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re