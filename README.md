*This project has been created as part of the 42 curriculum by eabdulla.*

# Libft

## Description

Libft is my first own C library: a re-implementation of standard libc functions
(prefixed with `ft_`), plus additional string, output and linked-list utilities.
It is compiled into `libft.a` with `cc -Wall -Wextra -Werror` and `ar`.

## Library content

### Character checks
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

### Character conversion
`ft_toupper`, `ft_tolower`

### Memory functions
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`

### String functions
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`

### Conversion and allocation
`ft_atoi`, `ft_calloc`, `ft_strdup`

### Additional string functions
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

### Output functions
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Linked list functions
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

```
make        # builds libft.a at the root
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

Usage: `#include "libft.h"` then `cc -Wall -Wextra -Werror main.c libft.a`.

## Resources

- `man 3` pages of the re-implemented functions
- The 42 Norm and GNU Make documentation

### AI usage

AI was used only to review my code after I had written it myself.
