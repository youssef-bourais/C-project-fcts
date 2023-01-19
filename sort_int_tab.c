// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[1 + i] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
			i ++;
	}
}

# include <stdio.h>

int main()
{
	int arr[11] = {-2,5,1,2,3,4,10,6,7,-1,9};
	sort_int_tab(arr, 2);
	for (int i = 0; i < 11; i++)
	{
		printf("%d\t",arr[i]);
	}
}
