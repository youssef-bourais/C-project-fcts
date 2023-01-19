// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

# include <stdlib.h>
# include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (str[i] == ' ' && str[i] == '\t')
		i ++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i ++;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res*10 + str[i] - '0';
		i ++;
	}
	return (res*sign);
}

int main()
{
	printf("%d\n",ft_atoi("5"));
	printf("%d\n",atoi("5"));
}