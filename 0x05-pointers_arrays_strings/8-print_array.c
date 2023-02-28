#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of array of integers
 * @a: Pointer to integer
 * @n:Integer
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
