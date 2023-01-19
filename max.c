// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

# include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int i = 0;
	int n = 0;
	n = tab[0];
	while (i < len)
	{
		if (n < tab[i])
			n = tab[i];
		i ++;
	}
	return n;
}

int main()
{
	int arr[13] = {1,1000,3,1,8, 56 , 2 , 0 , 4, 5 ,7 ,56,-110};
	printf("%d\n",max(arr, 13));
}
