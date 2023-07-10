#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments
 * @ac: Number of argument
 * @av: Array of string
 * Return: Pointer to new string or NULL if ac == 0 || av == 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int length = 0;
	int i, j, k;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	length++;

	str = (char *)malloc(sizeof(char) * length);

	if (str == 0)
		return (0);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
