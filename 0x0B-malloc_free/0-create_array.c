#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of chars and initialize with a specific char.
 * @size: Size of array
 * @c: Assigned char
 * Return: Pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
