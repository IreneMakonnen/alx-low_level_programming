#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of two diagonals of square matrix of integers
 * @a: Pointer to square matrix
 * @size: Size of matrix
 */

void print_diagsums(int *a, int size)
{
	int sum_d1 = 0;
	int sum_d2 = 0;
	int r;

	for (r = 0; r < size; r++)
	{
		sum_d1 += *(a + r * size + r);
		sum_d2 += *(a + r * size + (size - 1 - r));
	}

	printf("%d, %d\n", sum_d1, sum_d2);
}
