#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Text input
 * @f: Pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 || f != 0)
		f(name);
}
