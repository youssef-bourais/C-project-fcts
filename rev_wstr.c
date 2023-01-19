// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional"
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return i;
}
int main(int argc, char *argv[])
{
	int j = 0;
	int i = ft_len(argv[1]);
	int end = 0;
	int start = 0;

	if (argc == 2)
	{
		while (i >= 0)
		{
			while (argv[1][i] == '\0' || argv[1][i] == '\t' || argv[1][i] == ' ')
				i --;
			end = i;
			while (argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
				i --;
			start = i + 1;
			int flag = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start ++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}

	}
}
