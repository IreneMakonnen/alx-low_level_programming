#include "function_pointers.h"

/**
 * array_iterator - Executes function parameter on each element of array
 * @array: Array
 * @size: Size of array
 * @action: Pointer to a function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
