#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars, initializes it with specific char
 * @size: Size of array
 * @c: Chaacter arrays
 * Return: Pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (0);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
