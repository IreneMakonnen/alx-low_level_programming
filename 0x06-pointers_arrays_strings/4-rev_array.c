#include "main.h"

/**
 * reverse_array - Reverses content of array of integers
 * @a: Array pointer
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, temporary;

	for (i = 0; i < n / 2; i++)
	{
		temporary = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temporary;
	}
}
