// Assignment name  : lcm
// Expected files   : lcm.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function who takes two unsigned int as parameters and returns the
// computed LCM of those parameters.

// LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
// integer divisible by the both integers.

// A LCM can be calculated in two ways:

// - You can calculate every multiples of each integers until you have a common
// multiple other than 0

// - You can use the HCF (Highest Common Factor) of these two integers and
// calculate as follows:

// 	LCM(x, y) = | x * y | / HCF(x, y)

//   | x * y | means "Absolute value of the product of x by y"

// If at least one integer is null, LCM is equal to 0.

// Your function must be prototyped as follows:

//   unsigned int    lcm(unsigned int a, unsigned int b);

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;

	lcm = 1;
	if (a > 1000000 || b > 1000000)
		return 0;
	while (lcm <= (a*b))
	{
		if (lcm % a == 0 && lcm % b == 0)
			return lcm;
		lcm ++;
	}
	return lcm;
}

unsigned int ft_lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

# include <stdio.h>

int main()
{
	printf("%d\n",lcm(-955,56967));
	printf("%d\n",ft_lcm(-955,56967));
}
