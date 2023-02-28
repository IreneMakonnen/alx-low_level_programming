#include"main.h"

/**
 * swap_int -  Swap values of two integers
 * @a: First input parameter
 * @b: Other input parameter
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
