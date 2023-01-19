// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 2)
	{

		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t'))
			i++;
		i = i + 1;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			while ((argv[1][i] == ' ' || argv[1][i] == ' ') && (argv[1][i + 1] == ' ' || argv[1][i + 1] == ' '))
				i ++;
			write(1, &argv[1][i], 1);
			i ++;
		}
		write(1, " ", 1);
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i ++;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t'))
		{
			write(1, &argv[1][i], 1);
			i ++;
		}
		write(1, &argv[1][i], 1);
	}
	else if (argc > 2)
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
