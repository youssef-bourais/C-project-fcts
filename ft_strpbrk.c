// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

# include <string.h>
# include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
			{
				return ((char *)(s1));
			}
			j ++;
		}
		s1 ++;
	}
	return NULL;
}

int main()
{
	printf("%s\n",strpbrk("youssef", "zzzzfsu"));
	printf("%s\n",ft_strpbrk("youssef", "zzzzfsu"));
}