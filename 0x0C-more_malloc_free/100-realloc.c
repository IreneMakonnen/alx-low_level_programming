#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates a memory block using malloc & free
 * @ptr: Pointer to previously allocated memory with call to malloc
 * @old_size: Byte size of allocated space for ptr
 * @new_size: New byte size of new memory block
 * Return: Pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *bytes, *new_bytes;
	unsigned int dup_size, i;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == 0)
		return (0);

	bytes = (unsigned char *)ptr;
	new_bytes = (unsigned char *)new_ptr;

	dup_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < dup_size; i++)
		new_bytes[i] = bytes[i];

	free(ptr);

	return (new_ptr);
}
