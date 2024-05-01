#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = size; i >= 1; i--)
	{
		for (j = i; j > 1; j--)
			_putchar(' ');

		for (k = i - 1; k < size; k++)
			_putchar('#');

		if (i > 1)
			_putchar('\n');
	}
	_putchar('\n');
}
