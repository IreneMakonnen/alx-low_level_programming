#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer
 * @n: Number of elements of array to be printed
 */

void print_array(int *a, int n)
{
	int integers;

	if (*a == '\0')
	{
		printf("\n");
		return;
	}

	for (integers = 0; integers < n; integers++)
	{
		printf("%d", a[integers]);

		if (integers != n - 1)
			printf(", ");
	}
	printf("\n");
}
