#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print minimum coin numbers to make change
 * Return: 1 if argument aren't exactly one or 0 if negative
 * @amount: Amount to be calculated
 */
int calc_coins(int amount);

int main(int argc, char *argv[])
{
	int cents;
	int coin_nos;

	coin_nos = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_nos = calc_coins(cents);
	printf("%d\n", coin_nos);
	return (0);
}

/**
 * calc_coins - Calculate the number of coins
 * @amount: Amount to be calculated
 * Return: Number of coins
 */
int calc_coins(int amount)
{
	int cointype[] = {25, 10, 5, 2, 1};
	int coin_nos;
	int i;

	coin_nos = 0;
	i = 0;
	while (amount > 0)
	{
		coin_nos += amount / cointype[i];
		amount %= cointype[i];
		i++;
	}
	return (coin_nos);
}
