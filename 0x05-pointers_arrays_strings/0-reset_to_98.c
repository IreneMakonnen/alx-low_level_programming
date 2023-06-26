#include "main.h"

/**
 * reset_to_98 - Takes pointer to int & updates value it points to 98
 * @n: Pointer
 */

void reset_to_98(int *n)
{
	int value;

	value = 98;
	*n = value;
}
