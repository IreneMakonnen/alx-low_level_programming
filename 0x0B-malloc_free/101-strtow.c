#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - Split strings into words
 * @str: String to be split
 * Return: Pointer to array of strings or NULL if fail
 */

char **strtow(char *str)
{
	char **words;
	int word_count, length;
	char *p, *start, *word;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = malloc(sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_count = 0;
	p = str;
	while (*p != '\0')
	{
		while (isspace(*p))
			p++;
		if (*p == '\0')
			break;
		words = realloc(words, (word_count + 2) * sizeof(char *));
		if (words == NULL)
			return (NULL);
		start = p;
		while (*p != '\0' && !isspace(*p))
			p++;
		length = p - start;
		word = malloc(length + 1);
		if (word == NULL)
			return (NULL);
		memcpy(word, start, length);
		word[length] = '\0';
		words[word_count++] = word;
	}
	words[word_count] = NULL;
	return (words);
}
