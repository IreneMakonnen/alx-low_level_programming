#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Integer
 * Return: Pointer to allocated memory or 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b * sizeof(*ptr));

	if (ptr == 0)
		exit(98);

	return (ptr);
}
