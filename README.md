*This project has been created as part of the 42 curriculum by insantia.*

# Libft

## Description

**Libft** is a C project from the 42 curriculum that consists of building a personal static library of reusable functions. The goal is to understand how common C library functions work internally, practise memory management and pointer manipulation, and create a collection of utilities for future projects.

The project produces **`libft.a`**, a static library containing implementations of functions for character checks, string and memory manipulation, conversions, output, and linked lists. Functions are prefixed with `ft_`.

### Library contents

**Part 1 — Libc functions**

Reimplementations of standard C functions, following the behavior described in their manual pages:

- **Character checks and conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String functions:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`, `ft_strdup`
- **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

**Part 2 — Additional functions**

Utility functions for operations not provided in the same form by the standard C library:

- **String creation and manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- **String iteration:** `ft_strmapi`, `ft_striteri`
- **Output to file descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

Functions that return newly allocated strings or arrays require the caller to free that memory when it is no longer needed.

**Part 3 — Linked lists**

Functions for managing singly linked lists using the `t_list` structure defined in `libft.h`:

- **Create and inspect:** `ft_lstnew`, `ft_lstsize`, `ft_lstlast`
- **Insert:** `ft_lstadd_front`, `ft_lstadd_back`
- **Delete and clear:** `ft_lstdelone`, `ft_lstclear`
- **Iterate and transform:** `ft_lstiter`, `ft_lstmap`

Each node contains a `void *content` pointer and a `next` pointer to the following node.

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar` (to create the static library)

### Compilation

From the repository root, run:

```sh
make
```

This builds `libft.a` using the flags `-Wall -Wextra -Werror`.

Other Makefile commands:

```sh
make all      # Build the library
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild from scratch
```

### Using the library

Include `libft.h` in a C source file, then compile and link it with `libft.a`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Length: %zu\n", ft_strlen("Hello, 42!"));
    return (0);
}
```

For example, if the example above is saved as `main.c` in the repository root:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o example
./example
```

Expected output:

```text
Length: 10
```

## Resources

- [C language reference — cppreference](https://en.cppreference.com/w/c)
- [Linux manual pages](https://man7.org/linux/man-pages/)
- [GNU C Library manual](https://www.gnu.org/software/libc/manual/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)

### AI usage

AI assistance was used to help explain C concepts, review and discuss implementation issues, and draft this README. The library's functions should be understood, tested, and verified by the student before submission.
