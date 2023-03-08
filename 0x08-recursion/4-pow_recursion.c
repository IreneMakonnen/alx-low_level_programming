#include "main.h"

/**
 * _pow_recursion - Return value of x raised to power y
 * @x: Integer
 * @y: Integer
 * Return: x raised to y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
