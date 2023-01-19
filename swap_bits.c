// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100

# include <stdio.h>

int ft_pow(int a, int b)
{
	int i = 1;
	while (b > 0)
	{
		i = a*i;
		b --;
	}
	return i;
}

unsigned char	swap_bits(unsigned char octet)
{
	int i = 7;
	int arr[8] = {0};

	while (i >= 0)
	{
		arr[i] = octet % 2;
		octet = octet / 2;
		i --;
	}
	i = 0;
	int j = 4;
	int temp[4]= {0};
	int temp2[4]= {0};
	while (i <= 3 && j <= 7)
	{
		temp[i] = arr[i];
		temp2[i] = arr[j];
		j ++;
		i ++;
	}
	i = 0;
	j = 4;
	while (i <= 3 && j <= 7)
	{
		arr[i] = temp2[i];
		arr[j] = temp[i];
		i ++;
		j ++;
	}
	int n = 0;
	i = 7;
	j = 0;
	while (i >= 0 && j <= 7)
	{
		n = arr[j] * ft_pow(2, i) + n;
		i --;
		j ++;
	}
	return n;
}

unsigned char yswap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main()
{
	printf("%d\n",swap_bits(65));
}
