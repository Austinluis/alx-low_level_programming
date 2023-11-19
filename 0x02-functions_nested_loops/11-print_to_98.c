#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first value
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
	}
	else
		printf("%d", 98);

	putchar('\n');
}
