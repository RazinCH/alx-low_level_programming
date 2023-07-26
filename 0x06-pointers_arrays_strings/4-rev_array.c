#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int m, p, tmp;

	p = n - 1;

	for (m = 0; m < n / 2; m++)
	{
		tmp = a[m];
		a[m] = a[p];
		a[p--] = tmp;

	}
}
