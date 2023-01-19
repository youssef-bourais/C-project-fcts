// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or there are no words, display a newline.

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
# include <unistd.h>

int ft_len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i ++;
	return i;
}

int ft_null(char *str)
{
	int i = ft_len(str) - 1;
	while (i >= 0)
	{
		if ((str[i] != ' ' && str[i] != '\t'))
			return i;
		i --;
	}
	return 0;
}

int bigin(char *str)
{
	int i = ft_null(str);
	while (i >= 0)
	{
		if (str[i] == ' ' || str[i] == ' ')
		{
			return i ;
		}
		i --;
	}
	return i;
}

int main(int argc, char *argv[])
{
	int i = bigin(argv[1]) + 1;
	int j = ft_null(argv[1]) + 1;
	if (argc == 2)
	{
		while (i < j)
		{
			write(1 , &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
