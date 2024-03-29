#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to be checked
 * Return: lastdigit (Value of last digit)
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
