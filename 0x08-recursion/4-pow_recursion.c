#include "main.h"

/**
 * _pow_recursion - Function returns value of x raised to power of y
 * @x: Value to be raised
 * @y: Value to power x
 * Return: Value of x and if y < 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
