#include <stdio.h>
#include "main.h"

/**
 * main - Print number of arguments passed
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
