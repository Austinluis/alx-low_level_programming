#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: lenght of the diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');

		_putchar('\\');

		if (i < n)
			_putchar('\n');
	}
	_putchar('\n');
}
