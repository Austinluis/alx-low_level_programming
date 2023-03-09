#include <stdio.h>

/**
 * main - prints all single numbers in base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
