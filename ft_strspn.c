// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

#include <stdio.h>
#include <string.h>

int ft_chrch(const char *str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return 1;
		i ++;
	}
	return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				i ++;
			if (s[i] != accept[j] && ft_chrch(accept, s[i]) == 0)
				return i;
			j ++;
		}
		i ++;
	}
	return 0;
}

int main()
{
	printf("%lu\n",strspn("edc1234987556cdeyoussef", "c987651234dd5e6e"));
	printf("%lu\n",ft_strspn("edc1234987556cdeyoussef", "c987651234dd5e6e"));
}
