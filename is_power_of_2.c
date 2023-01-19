// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int i = 1;

	while (n >= i)
	{
		i = 2 * i ;
		if (n == i)
			return 1;
	}
	return 0;
}

int main()
{
	printf("%d\n", is_power_of_2(2));
}
