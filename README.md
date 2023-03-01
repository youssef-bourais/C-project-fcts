this project consists of coding basic C functions (see below), which are then compiled
into a library for use in other projects of the cursus.

#Functions from <ctype.h> library

ft_isascii - test for ASCII character.
ft_isalnum - alphanumeric character test.
ft_isalpha - alphabetic character test.
ft_isdigit - decimal-digit character test.
ft_isprint - printing character test (space character inclusive).
ft_tolower - upper case to lower case letter conversion.
ft_toupper - lower case to upper case letter conversion.

#Functions from <stdlib.h> library

ft_atoi - convert ASCII string to integer.
ft_calloc - memory allocation.

#Functions from <strings.h> library

ft_bzero - write zeroes to a byte string.
ft_memset - write a byte to a byte string.
ft_memchr - locate byte in byte string.
ft_memcmp - compare byte string.
ft_memmove - copy byte string.
ft_memcpy - copy memory area.
ft_memccpy - copy string until character found.

#Functions from <string.h> library

ft_strlen - find length of string.
ft_strchr - locate character in string (first occurrence).
ft_strrchr - locate character in string (last occurence).
ft_strnstr - locate a substring in a string (size-bounded).
ft_strncmp - compare strings (size-bounded).
ft_strnrcmp - reversely compare strings (size-bounded).
ft_strdup - save a copy of a string (with malloc).
ft_strlcpy - size-bounded string copying.
ft_strlcat - size-bounded string concatenation.

#Non-standard functions

ft_putchar_fd - output a character to given file.
ft_putstr_fd - output string to given file.
ft_putendl_fd - output string to given file with newline.
ft_putnbr_fd - output integer to given file.
ft_itoa - convert integer to ASCII string.
ft_substr - extract substring from string.
ft_strtrim - trim beginning and end of string with the specified characters.
ft_strjoin - concatenate two strings into a new string (with malloc).
ft_split - split string, with specified character as delimiter, into an array of strings.
ft_strmapi - create new string from modifying string with specified function.
