#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Elements
 * @size: Byte size
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, total, i;
	unsigned char *bytes;

	if (nmemb == 0 || size == 0)
		return (0);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == 0)
		return (0);

	bytes = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
		bytes[i] = 0;

	return (ptr);
}
