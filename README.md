*This project has been created as part of the 42 curriculum by mbendaou.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate a collection of standard C library functions and implement additional utility functions.

This project helps develop a deeper understanding of C programming, memory management, pointers, strings, data structures, and linked lists.

The library is compiled into a static library named `libft.a`, which can be reused in future C projects.

## Library Contents

The library contains functions organized into the following categories.

### 1. Character Checks and Conversions

These functions check character types or convert letters between uppercase and lowercase.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### 2. String Functions

These functions provide basic string operations, including length calculation, searching, comparison, copying, and concatenation.

- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strlcpy`
- `ft_strlcat`

### 3. Memory Functions

These functions manipulate memory blocks and allow memory comparison, searching, copying, and initialization.

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### 4. Memory Allocation and String Manipulation

These functions allocate memory and create, transform, or manipulate strings.

- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

### 5. Numeric Conversion

- `ft_atoi` converts a string into an integer.

### 6. Additional Utility Functions

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

These functions write characters, strings, lines, and integers to a specified file descriptor.

### 7. Linked List Functions

The linked list part introduces dynamic data structures using a custom structure called `t_list`. Each node contains a `content` pointer and a pointer to the next node.

The library includes:

- `ft_lstnew` — creates a new list node.
- `ft_lstadd_front` — adds a node at the beginning of a list.
- `ft_lstsize` — counts the nodes in a list.
- `ft_lstlast` — returns the last node.
- `ft_lstadd_back` — adds a node at the end of a list.
- `ft_lstdelone` — deletes one node using a provided deletion function.
- `ft_lstclear` — deletes an entire list.
- `ft_lstiter` — applies a function to each node's content.
- `ft_lstmap` — creates a new list by applying a function to each node's content.

## Instructions

### Compilation

Clone the repository and enter the project directory:

```bash
git clone https://github.com/bendaoui2003/Slibft.git
cd Slibft
```

Compile the library using the Makefile:

```bash
make
```

This generates the static library `libft.a`.

Other available commands:

```bash
make clean
make fclean
make re
```

- `make clean` removes the object files.
- `make fclean` removes the object files and the compiled library.
- `make re` cleans and recompiles the library.

### Using the Library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your source file with the static library:

```bash
cc main.c -L. -lft -o program
```

Run the resulting executable:

```bash
./program
```

The source file `main.c` is an example filename; replace it with your own file.

## Technical Choices

- **Language:** C
- **Compilation:** `cc` with `-Wall -Wextra -Werror`
- **Library format:** Static library (`libft.a`)
- **Header file:** `libft.h`
- **Build system:** Makefile
- **Memory management:** Dynamic allocation where necessary, with appropriate error handling.
- **Coding standards:** The project follows the applicable 42 coding rules and Norminette requirements.

## Resources

The following resources are useful for understanding the functions implemented in this project:

- [C Standard Library Reference](https://en.cppreference.com/w/c.html)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [C Programming Language Reference](https://en.cppreference.com/w/c)
- [42 School](https://42.fr/)

### AI Usage

AI tools, including ChatGPT, were used as supplementary learning and development assistance during this project.

AI assistance was used for:

- Explaining C programming concepts such as pointers, memory management, strings, and linked lists.
- Clarifying the expected behavior of standard library functions and their return values.
- Helping analyze errors, edge cases, and potential problems during debugging.
- Explaining the purpose and behavior of Makefile rules and compilation commands.
- Supporting the preparation of project documentation, including this README.

The main purpose of using AI was to improve understanding and support independent problem-solving. AI-generated explanations and suggestions were treated as learning resources and were not a substitute for understanding the code or verifying the final implementation.

## Author

**Login:** mbendaou

**Project:** Libft — 42 Curriculum
