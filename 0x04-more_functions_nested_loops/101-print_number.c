#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int rev = 0;

	/* if n is 0 */
	if (n == 0)
		_putchar(n + '0');

	/* converts n to a positive number if it is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* reverses the number */
	while (n != 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	/* prints the integer */
	while (rev != 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
}
