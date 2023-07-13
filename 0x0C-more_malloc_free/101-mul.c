#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_positive_digit - Checks if digit is positive
 * @str: String to be checked
 * Return: 0 if positive digit, 1 otherwise
 */
int is_positive_digit(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * multiply_digits - Multiplies digits
 * @num1: First digit
 * @num2: Second digit
 * Return: The product of the numbers
 */
int multiply_digits(const char *num1, const char *num2)
{
	int product;

	product = atoi(num1) * atoi(num2);

	return (product);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int product, len;
	char buffer[16];

	if (argc != 3 || !is_positive_digit(argv[1]) || !is_positive_digit(argv[2]))
	{
		write(STDOUT_FILENO, "Error\n", 6);
		return (98);
	}

	if (!is_positive_digit(argv[1]) || !is_positive_digit(argv[2]))
	{
		write(STDOUT_FILENO, "Error\n", 6);
		return (98);
	}

	product = multiply_digits(argv[1], argv[2]);
	len = snprintf(buffer, sizeof(buffer), "%d\n", product);

	write(STDOUT_FILENO, buffer, len);

	return (0);
}

