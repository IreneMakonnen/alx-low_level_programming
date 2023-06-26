#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates random valid passwords for 101-crackme program
 * Return: 0
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = rand() % 26 + 97;

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

