#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function returns pointer to a 2D array of integers
 * @width: Width of array
 * @height: Height of array
 * Return: Pointer to 2D array int / 0 if width/len = 0 / neg / NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **int_arr, i, j;

	if (width <= 0 || height <= 0)
		return (0);

	int_arr = (int **)malloc(sizeof(int *) * height);

	if (int_arr == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		int_arr[i] = (int *)malloc(sizeof(int) * width);

		if (int_arr[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(int_arr[j]);

			free(int_arr);
			return (0);
		}

		for (j = 0; j < width; j++)
			int_arr[i][j] = 0;
	}

	return (int_arr);
}
