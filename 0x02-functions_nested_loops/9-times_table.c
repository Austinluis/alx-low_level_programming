#include "main.h"

/**
 * times_table - prints the 9 time table
 * Return: void
 */

void times_table(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((i * n) <= 9)
			{
				if (n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * n) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((i * n) / 10) + '0');
				_putchar(((i * n) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
