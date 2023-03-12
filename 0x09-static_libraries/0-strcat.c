#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *s = dest;
	while (*s != '\0')
	{
		s++;
	}
	while (*src != '\0')
	{
		*s++ = *src++;
	}
	*s = '\0';
	return (dest);
}
