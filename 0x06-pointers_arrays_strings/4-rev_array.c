#include "main.h"

/**
 * reverse_array - print the elements of an array in reverse order
 * @a: pointer to the array
 * @n: number of items in the array
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}

