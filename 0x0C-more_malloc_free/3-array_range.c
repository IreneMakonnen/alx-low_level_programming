#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum values
 * @max: Maximum values
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (0);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == 0)
		return (0);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
