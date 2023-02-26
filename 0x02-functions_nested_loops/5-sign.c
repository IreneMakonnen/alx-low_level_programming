#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: The character to check
 * Return: 1 if greater than, 0 if equal and -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
