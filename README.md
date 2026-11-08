CAREFUL: as of now, memmove doesn't work, exhibits UB
*This project has been created as part of the 42 curriculum by dale*

# Description
The libft library is an implementation of a subset of libc with several functions for many basic string, memory, and linked list manipulation. These functions will be useful for the rest of the curriculum at 42.

# Instructions
To use the library:
- Compile the library with the `make` command
- Add the `libft.h` header to your code
- Compile and link your program. Example: `cc main.c -L. -lft`

Extra rules:
- Use `make clean` to remove the object files
- `make fclean` runs clean and also removes the `libft.a` library
- `make re` fcleans and recompiles the library

# Resources
[Libft subject page](https://cdn.intra.42.fr/pdf/pdf/190694/en.subject.pdf)

[makefile tutorial](https://noahloomans.com/tutorials/makefile/)
[GNU make docs](https://www.gnu.org/software/make/manual/)

[Tests](https://github.com/FranFrau/Supreme-Tester-Libft)
+ my own tests


# Detailed Description

## Strings
- `ft_strlen`		Returns string length
- `ft_atoi`			Converts ASCII to an integer
- `ft_strlcpy`		Copies a string
- `ft_strlcat`		String concatenation
- `ft_strchr`		Finds the first occurence of a char in a string
- `ft_strrchr`		Finds the last occurence of a char in a string
- `ft_strncmp`		Compare <= n bytes of two strings
- `ft_strnstr`		Finds a substring
- `ft_strdup`		Duplicates a string 
- `ft_substr`		Copies a substring
- `ft_strjoin`		Concatenates two strings and returns the new string
- `ft_strtrim`		Trims characters from the start and end of a string
- `ft_split`		Splits a string into an array of substrings by a delimiter
- `ft_itoa`			Converts an integer to ASCII
- `ft_strmapi`		Creates a new string using the results of applying a function to each element of a string
- `ft_striteri`		Applies a function to each element of a string
- `ft_putstr_fd` 	Outputs a string to the given file descriptor
- `ft_putendl_fd`	Outputs a string followed by a newline to the given file descriptor
- `ft_putnbr_fd` 	Outputs an integer to the given file descriptor

## Characters
- `ft_isalpha`		Checks if a char is alphabetical (upper or lowercase)
- `ft_isdigit`		Checks if a char is a number
- `ft_isalnum`		Checks if a char is alphanumeric
- `ft_isascii`		Checks if a char is an ASCII character
- `ft_isprint`		Checks if a char is printable
- `ft_toupper`		Returns a uppercased char
- `ft_tolower`		Returns a lowercased char
- `ft_putchar_fd`	 Outputs a character to the given file descriptor

## Memory
- `ft_memset`		Sets `n` bytes of memory with a given value
- `ft_bzero`		Sets bytes to zero
- `ft_memcpy`		Copies memory (doesn't check for overlaps)
- `ft_memmove`		Copies memory (works with overlapping memory)
- `ft_memchr`		Finds the first instance of a char in memory
- `ft_calloc`		Allocates memory and initializes all bytes to zero

## Linked list
- `ft_lstnew`		Creates a new node
- `ft_lstadd_front` 	Creates a new head
- `ft_lstsize`		Returns the number of nodes
- `ft_lstlast`		Returns the tail node
- `ft_lstadd_back` 	Adds a node to the end of the list
- `ft_lstdelone` 	Deletes the given node (doesn't relink!)
- `ft_lstclear`		Deletes the given node and all the following ones
- `ft_lstiter`		Applies a function to the content of each node
- `ft_lstmap`		Applies a function to the content of each node and assigns them to a new list
