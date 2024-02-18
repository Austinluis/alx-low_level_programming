#include "main.h"

/**
 * print_times_table - prints the times table of an integer
 * @n: the integer
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if ((i * j) <= 9)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((i * j) + '0');
				}
				else if ((i * j) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

