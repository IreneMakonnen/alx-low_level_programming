#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Program sends arguments
 * @argc: Counts number of arguments
 * @argv: Array of pointers to arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int A, B, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	A = atoi(argv[1]);
	B = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == 0)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && B == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(A, B);
	printf("%d\n", result);

	return (0);
}
