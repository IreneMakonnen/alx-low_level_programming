#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*s != '\0')
	{
		s++;
	}
	int i = 0;
	while (*src != '\0' && i < n)
	{
		*s++ = *src++;
		i++;
	}
	*s = '\0';
	return (dest);
}
