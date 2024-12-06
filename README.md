# Libft

## A Custom Implementation of C Standard Library Functions

Libft is a library of standard C functions, recreated from scratch to understand how these functions work at a low level. This library is used as a base for more complex projects and exercises in C programming.

### Purpose

- Recreate key C library functions to understand their workings.
- Provide utility functions for various projects.
- Serve as a base for more complex applications in C programming.

### Features

- Character handling functions
- String manipulation functions
- Memory management functions
- Conversion functions
- Utility functions
- File descriptor functions

C library functions give basic operations for handling strings, characters, memory, and file descriptors. Understanding and making these functions from scratch is a key step in learning C programming.

### Key Functions and Concepts Learned

#### Character Handling
*Concept Learned: Understanding character types and properties.*

- `ft_isalpha` - Checks if a character is a letter.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is a letter or digit.
- `ft_isascii` - Checks if a character is an ASCII character.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.

#### String Manipulation
*Concept Learned: Handling and changing strings in C.*

- `ft_strlen` - Gets the length of a string.
- `ft_strcpy` - Copies a string.
- `ft_strncpy` - Copies a set number of characters from a string.
- `ft_strcat` - Joins two strings.
- `ft_strncat` - Joins a set number of characters from one string to another.
- `ft_strchr` - Finds the first instance of a character in a string.
- `ft_strrchr` - Finds the last instance of a character in a string.
- `ft_strstr` - Finds a substring in a string.
- `ft_strncmp` - Compares two strings up to a set number of characters.

#### Memory Management
*Concept Learned: Dynamic memory use and safe, efficient memory handling.*

- `ft_memset` - Fills a block of memory with a value.
- `ft_memcpy` - Copies a block of memory.
- `ft_memccpy` - Copies a block of memory up to a specific character.
- `ft_memmove` - Copies a block of memory, managing overlapping regions.
- `ft_memchr` - Finds a character in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_bzero` - Sets a block of memory to zero.

#### Conversion Functions
*Concept Learned: Converting data types and understanding their forms.*

- `ft_atoi` - Converts a string to an integer.
- `ft_itoa` - Converts an integer to a string.

#### Utility Functions
*Concept Learned: Making various utility functions for common tasks in C programs.*

- `ft_putchar` - Outputs a character to the standard output.
- `ft_putstr` - Outputs a string to the standard output.
- `ft_putendl` - Outputs a string followed by a newline to the standard output.
- `ft_putnbr` - Outputs an integer to the standard output.

#### File Descriptor Functions
*Concept Learned: Managing input and output with file descriptors.*

- `ft_putchar_fd` - Outputs a character to a given file descriptor.
- `ft_putstr_fd` - Outputs a string to a given file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline to a given file descriptor.
- `ft_putnbr_fd` - Outputs an integer to a given file descriptor.

### Installation

Libft needs a standard C compiler and a Unix-like environment to run.

Install the library by cloning the repository and running `make`.

```sh
git clone https://github.com/yourusername/libft.git
cd libft
make
