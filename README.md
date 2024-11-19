## N03l-MG's libft

***This is my libft library for use in 42 projects!***

It contains all of the functions in the *mandatory and bonus* parts of the libft project, as well as a modified version of my *ft_printf* which handles a given file descriptor (like fprintf) and my implementation of *get_next_line*.

**Included C Libraries:**
- unistd
- stdlib
- stdarg
- stdint
- stdbool
- limits
- fcntl

**Functions:**
- Memory manipulation:
	- ft_bzero
	- ft_memchr
	- ft_memcmp
	- ft_memcpy
	- ft_memmove
	- ft_memset
	- ft_calloc
- String manipulation:
	- ft_strchr
	- ft_strrchr
	- ft_strnstr
	- ft_substr
	- ft_strtrim
	- ft_strlcpy
	- ft_strlcat
	- ft_strdup
	- ft_strjoin
	- ft_strncmp
	- ft_strlen
- String parsing:
	- ft_split
	- ft_striteri
	- ft_strmapi
	- ft_atoi
	- ft_itoa
- Character manipulation:
	- ft_tolower
	- ft_toupper
- Character booleans:
	- ft_isalnum
	- ft_isalpha
	- ft_isascii
	- ft_isdigit
	- ft_isprint
- Linked list utils:
	- ft_lstnew
	- ft_lstsize
	- ft_lstclear
	- ft_lstdelone
	- ft_lstadd_front
	- ft_lstadd_back
	- ft_lstiter
	- ft_lstmap
- Various utils:
	- ft_putchar_fd
 	- ft_putstr_fd
 	- ft_putendl_fd
	- ft_putnbr_fd	
	- ft_fprintf (printf with given file descriptor)
	- get_next_line

**Structs:**
- Linked list basic node (data and next)
