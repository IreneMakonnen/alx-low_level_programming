#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits string into words
 * @str: String to be split
 * Return: Pointer to strings array or NULL if str == NULL || sr == ""
 */

char **strtow(char *str)
{
	int count = 0;
	int is_word = 0;
	char **words = 0;
	char **temporary = 0;
	char *begin = 0;
	int i, length, j;

	if (str == 0 || *str == '\0')
		return (0);

	while (*str != '\0')
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			if (!is_word)
			{
				is_word = 1;
				count++;
				temporary = (char **)realloc(words, count * sizeof(char *));
				if (temporary == 0)
				{
					for (i = 0; i < count - 1; i++)
						free(words[i]);
					free(words);
					return (0);
				}
				words = temporary;
				begin = str;
			}
		}
		else
		{
			is_word = 0;
			*str = '\0';
		}
		str++;
	}

	if (count == 0)
		return (0);
	
	words = (char **)realloc(words, (count + 1) * sizeof(char *));
	if (words == 0)
	{
		for (i = 0; i < count; i++)
			free(words[i]);
		free(words);
		return (0);
	}
	words[count] = (0);

	for (i = 0; i < count; i++)
	{
		length = 0;
		while (*begin != '\0')
		{
			length++;
			begin++;
		}

		words[i] = (char *)malloc(sizeof(char) * (length + 1));
		if (words[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (0);
		}

		begin -= length;
		for (j = 0; j < length; j++)
		{
			words[i][j] = *begin;
			begin++;
		}
		words[i][length] = '\0';
	}
	
	return (words);
}
