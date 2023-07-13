#include "main.h"
#include <stdlib.h>

/**
 * is_positive_number - 
 * @str:
 * Return:
 */
int is_positive_number(const char *str)
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
 * multiply_numbers - 
 * @num1:
 * @num2:
 * Return:
 */
int multiply_numbers(const char *num1, const char *num2)
{
	int result;
	result = atoi(num1) * atoi(num2);
	
	return (result);
}

/**
 * main - 
 * @argc:
 * @argv[]:
 * Return:
 */
int main(int argc, char *argv[])
{
	int num1, num2, product, len;
	char buffer;

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		return 98;
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		write(1, "Error\n", 6);
		return 98;
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = multiply_numbers(argv[1], argv[2]);
	buffer[16];
	len = snprintf(buffer, sizeof(buffer), "%d\n", product);
	
	write(1, buffer, len);

	return (0);
}

