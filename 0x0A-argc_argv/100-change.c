#include <stdio.h>
#include <stdlib.h>

/**
 * get_coins - calculates the number of coins required to make change
 * @change: change
 *
 * Return: number of coins
 */

int get_coins(int change)
{
	int n;

	if (change >= 25)
		n = 25;
	else if (change >= 10 && change < 25)
		n = 10;
	else if (change >= 5 && change < 10)
		n = 5;
	else if (change >= 2 && change < 5)
		n = 2;
	else
		n = 1;

	if (change % n == 0)
		return (change / n);
	return ((change / n) + get_coins(change % n));
}

/**
 * main - prints the the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(*(argv + 1));

	if (change > 0)
		coins = get_coins(change);

	printf("%d\n", coins);
	return (0);
}
