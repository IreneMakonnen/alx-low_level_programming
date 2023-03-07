#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search a string for any setof bytes
 * @s: String
 * @accept:String
 * Return: Pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
