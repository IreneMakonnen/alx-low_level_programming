#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: Pointer
 * @n: Number of elements of array
 */

void reverse_array(int *a, int n)
{
	int j;
	int temp;

	for (j =  0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}
