#include "main.h"

/**
 * sqrt_helper - recursive Newton iteration
 * @x: current approximation
 * @n: number to find square root of
 *
 * Return: next approximation or final integer answer
 */

int sqrt_helper(int x, int n)
{
	int y = (x + (n / x)) / 2;

	if (y == x)
	{
		if (x * x == n)
			return (x);
		return (-1);
	}
	return (sqrt_helper(y, n));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural sqrt or -1 if none exists
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, n));
}
