#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all program arguments
 * @ac: Number of arguments
 * @av: Array of strings
 * Return: Pointer to new string or NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_length = 0;
	char *result, *p;
	int len;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}
	result = (char *) malloc(sizeof(char) * total_length);
	if (result == NULL)
	{
		return (NULL);
	}
	p = result;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len = strlen(av[i]);
			memcpy(p, av[i], len);
			p += len;
			*p++ = '\n';
		}
	}
	*p = '\0';
	return (result);
}
