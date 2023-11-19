#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;

	if (n >= 0)
		_putchar(j + '0');
	else if (n < 0)
	{
		j = j / -1;
		_putchar(j + '0');
	}

	return (j);
}
