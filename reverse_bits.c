// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100
# include <stdio.h>

int ft_pow(int a , int b)
{
	int n = 1;
	while (b > 0)
	{
		n = n*a;
		b --;
	}
	return n;
}

unsigned char	reverse_bits(unsigned char octet)
{
	int arr_bin[8] = {0};
	int i = 7;

	while (i >= 0)
	{
		arr_bin[i] = octet%2;
		octet = octet/2;
		i --;
	}
	int n = 0;
	i = 0;
	while (i <= 7)
	{
		n = arr_bin[i]*ft_pow(2,i) + n;
		i ++;
	}
	return n;
}

unsigned char	unknown(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int main()
{
	printf("%d\n",reverse_bits(')')); //?? = 10000110  // 97 = 01100001 
	printf("%d\n",unknown(')'));
}