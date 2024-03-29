#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number whose sign is to be printed
 * Return: 0 (success)
 */

int print_sign(int n)
{
	int j;

	if (n > 0)
	{
		_putchar('+');
		j = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		j = 1 / -1;
	}
	else
	{
		_putchar('0');
		j = 0;
	}
	return (j);
}
