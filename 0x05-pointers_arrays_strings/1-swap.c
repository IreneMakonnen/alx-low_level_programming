#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: First pointer
 * @b: Second pointer
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;

	*a = *b;
	*b = value;
}
