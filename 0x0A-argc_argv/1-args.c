#include "main.h"
#include <stdio.h>

/**
 * main - Program prints number of arguments passed into it
 * @argc: Counts the number of arguments
 * @argv: Points to array of strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
