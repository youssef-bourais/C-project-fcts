// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);
# include <stdio.h>
# include <stdlib.h>

int len_str(int n)
{
	int i = 0;
	if (n == 0)
		return 1;
	if (n < 0 )
	{
		n = -1* n;
		i ++;
	}
	while (n >= 1)
	{
		n = n /10;
		i ++;
	}
	return i;
}

char	*ft_itoa(int nbr)
{
	int i = len_str(nbr);

	char *str = (char *)malloc((sizeof(char) * i) + 1);
	char temp[i + 1];

	if (nbr == 0)
	{
		str[0] = '0';
		return str;
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	i = i - 1;
	while (nbr > 0)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i --;
	}
	return str;
}

int main()
{
	printf("%s\n",ft_itoa(-112));
}
