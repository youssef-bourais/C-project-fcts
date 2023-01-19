// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
# include <unistd.h>
# include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int n = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				n = (-1)*('a' - argv[1][i]);
				while (n >= 0)
				{
					write(1, &argv[1][i], 1);
					n --;
				}
				i ++;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				n = (-1)*('A' - argv[1][i]);
				while (n >= 0)
				{
					write(1, &argv[1][i], 1);
					n --;
				}
				i ++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i ++;
			}
		}
		
	}
	write(1 , "\n", 1);
	
}