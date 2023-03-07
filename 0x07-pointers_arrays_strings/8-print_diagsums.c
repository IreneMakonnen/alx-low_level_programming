#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print sum of two diagonals of a square matrix of integers.
 * @a: Integer matrix
 * @size: Sizeof matrix
 */

void print_diagsums(int *a, int size)
{
	int j;
	int sum_1 = 0;
	int sum_2 = 0;

	for (j = 0; j < size; j++)
	{
		sum_1 += *(a + j * size + j);
	}
	for (j = 0; j < size; j++)
	{
		sum_2 += *(a + j * size + (size - 1 - j));
	}
	printf("%d, %d\n", sum_1, sum_2);
}
