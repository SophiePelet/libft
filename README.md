# libft

A custom C library with essential utility functions: string manipulation, memory operations, linked lists, a custom printf, and get_next_line.

## Project Structure

```
libft/
├── strings/    # String functions
├── mem/        # Memory operations  
├── put/        # File descriptor output
├── lists/      # Linked list implementation
├── my_printf/  # Custom printf
└── gnl/        # Get next line
```

## Build & Link

```bash
make              # Build libft.a
make clean        # Remove object files
make fclean       # Remove library
make re           # Clean and rebuild

# Link with your program:
gcc -Wall -Wextra -Werror -o program program.c -L. -lft
```

## Functions

- **strings/** — `ft_strlen`, `ft_strchr`, `ft_strdup`, `ft_strjoin`, `ft_substr`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`, `ft_strncmp`, `ft_strlcat`, `ft_strlcpy`, `ft_strnstr`, `ft_strrchr`, `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

- **mem/** — `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

- **put/** — `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

- **lists/** — `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

- **my_printf/** — `ft_printf` (supports `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%%`)

- **gnl/** — `get_next_line(fd, clean)` (reads file line by line, default BUFFER_SIZE: 42)

## Build & Link

```bash
make              # Build libft.a
make clean        # Remove object files
make fclean       # Remove object files and library
make re           # Clean and rebuild

# Link with your program:
gcc -Wall -Wextra -Werror -o program program.c -L. -lft
```
## Grade

125/100
