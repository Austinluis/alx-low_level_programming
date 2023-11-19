#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 * Return: absolute value of integer
 */

int _abs(int n)
{
	int j;

	if (n > 0)
		j = n;
	else if (n < 0)
		j = n / -1;
	else
		j = 0;

	return (j);
}
