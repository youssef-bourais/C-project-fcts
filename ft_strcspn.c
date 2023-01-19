// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
# include <stdio.h>
# include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return i;
			j ++;
		}
		i ++;
	}
	return strlen(s);
}

int main()
{
	printf("%lu\n", ft_strcspn("youssef1234567895", "012358976"));
	printf("%lu\n", strcspn("youssef1234567895", "012358976"));
}
