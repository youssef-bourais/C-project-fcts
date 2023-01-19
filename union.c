// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

# include <unistd.h>
# include <stdio.h>
# include <string.h>

int ft_chrch(char *str, char c, int n)
{
	if (n <= 0)
		return 0;
	if (n >= strlen(str))
		n = strlen(str) - 1;
	while (n >=0)
	{
		if (str[n] == c)
			return 1;
		else
			n --;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_chrch(argv[1], argv[1][i], i - 1) == 0 && argv[1][i] != argv[1][i + 1])
				write (1, &argv[1][i], 1);
			i ++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (ft_chrch(argv[2], argv[2][i], i - 1) == 0 && ft_chrch(argv[1], argv[2][i],strlen(argv[1])) == 0)
				write (1, &argv[2][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
