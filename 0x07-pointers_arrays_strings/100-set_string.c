#include "main.h"

/**
 * set_string - Sets value of a pointer to a char
 * @s: Double pointer to char
 * @to: Pointer to string to set @s to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
