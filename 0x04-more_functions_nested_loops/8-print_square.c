#include "main.h"

/**
 * print_square - prints a square shape
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int lenght, breadth;

	for (lenght = 1; lenght <= size; lenght++)
	{
		for (breadth = 1; breadth <= size; breadth++)
			_putchar('#');

		if (lenght < size)
			_putchar('\n');
	}
	_putchar('\n');
}
