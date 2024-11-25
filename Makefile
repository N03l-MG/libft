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

BOOL_SRC = 
CONV_SRC = 
MEM_SRC = 
STR_SRC = 
LIST_SRC = 
UTIL_SRC = 
PRINT_SRC = 
GNL_SRC = 

BOOL_SRC := $(addprefix $(BOOL_DIR)/, $(BOOL_SRC))
CONV_SRC := $(addprefix $(CONV_DIR)/, $(CONV_SRC))
MEM_SRC := $(addprefix $(MEM_DIR)/, $(MEM_SRC))
STR_SRC := $(addprefix $(STR_DIR)/, $(STR_SRC))
LIST_SRC := $(addprefix $(LIST_DIR)/, $(LIST_SRC))
UTIL_SRC := $(addprefix $(UTIL_DIR)/, $(UTIL_SRC))
PRINT_SRC := $(addprefix $(PRINT_DIR)/, $(PRINT_SRC))
GNL_SRC := $(addprefix $(GNL_DIR)/, $(GNL_SRC))

BOOL_OBJ    = $(BOOL_SRC:.c=.o)
CONV_OBJ    = $(CONV_SRC:.c=.o)
MEM_OBJ     = $(MEM_SRC:.c=.o)
STR_OBJ     = $(STR_SRC:.c=.o)
LIST_OBJ    = $(LIST_SRC:.c=.o)
UTIL_OBJ    = $(UTIL_SRC:.c=.o)
PRINT_OBJ   = $(PRINT_SRC:.c=.o)
GNL_OBJ     = $(GNL_SRC:.c=.o)

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