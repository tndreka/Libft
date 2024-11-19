# Libft
## A Custom Implementation of C Standard Library Functions

Libft is a comprehensive library of standard C functions, recreated from scratch, to provide a deeper understanding of how these functions work at a low level. This library is often used as a foundation for more complex projects and exercises in C programming.

- Recreate essential C library functions to deepen understanding of their implementations.
- Provide a set of utility functions that can be reused across various projects.
- Serve as a building block for more complex applications in C programming.

## Features

- Character handling functions
- String manipulation functions
- Memory management functions
- Conversion functions
- Utility functions
- File descriptor functions

C library functions provide a set of basic operations for handling strings, characters, memory, and file descriptors. Understanding and implementing these functions from scratch is a fundamental exercise in becoming proficient in C programming.

## Key Functions and Concepts Learned

### Character Handling
**Concept Learned:** Understanding character properties and how to identify different types of characters (e.g., alphabetic, numeric, etc.).

- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character is an ASCII character.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.

### String Manipulation
**Concept Learned:** Efficiently handling and manipulating strings in C.

- `ft_strlen` - Calculates the length of a string.
- `ft_strcpy` - Copies a string.
- `ft_strncpy` - Copies a specified number of characters from a string.
- `ft_strcat` - Concatenates two strings.
- `ft_strncat` - Concatenates a specified number of characters from one string to another.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strstr` - Locates a substring within a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.

### Memory Management
**Concept Learned:** Dynamic memory allocation and handling memory safely and efficiently.

- `ft_memset` - Fills a block of memory with a specified value.
- `ft_memcpy` - Copies a block of memory.
- `ft_memccpy` - Copies a block of memory up to a specified character.
- `ft_memmove` - Copies a block of memory, handling overlapping regions correctly.
- `ft_memchr` - Locates a character in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_bzero` - Sets a block of memory to zero.

### Conversion Functions
**Concept Learned:** Converting data types and understanding their representations.

- `ft_atoi` - Converts a string to an integer.
- `ft_itoa` - Converts an integer to a string.

### Utility Functions
**Concept Learned:** Implementing various utility functions that are commonly needed in C programs.

- `ft_putchar` - Outputs a character to the standard output.
- `ft_putstr` - Outputs a string to the standard output.
- `ft_putendl` - Outputs a string followed by a newline to the standard output.
- `ft_putnbr` - Outputs an integer to the standard output.

### File Descriptor Functions
**Concept Learned:** Handling input and output operations with file descriptors.

- `ft_putchar_fd` - Outputs a character to a given file descriptor.
- `ft_putstr_fd` - Outputs a string to a given file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline to a given file descriptor.
- `ft_putnbr_fd` - Outputs an integer to a given file descriptor.

## Installation

Libft requires a standard C compiler and a Unix-like environment to run.

Install the library by cloning the repository and running make.

```sh
git clone https://github.com/yourusername/libft.git
cd libft
make
