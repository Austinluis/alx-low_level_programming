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
		return (x);
	return (sqrt_helper(y, n));
}


/**
 * _sqrt_recursion - returns the approximate square root of a number
 * @n: number
 *
 * Return: sqrt(approximate) or -1 if none exists
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, n));
}

/**
 * is_prime_helper - recursive iterative check
 * @x: dividend
 * @n: number to check if prime
 *
 * Return: 1 if n id prime, 0 if not
 */

int is_prime_helper(int x, int n)
{
	if (x <= _sqrt_recursion(n))
	{
		if (n % x == 0)
			return (0);
		x++;
		return (is_prime_helper(x, n));
	}
	return (1);
}


/**
 * is_prime_number - checks for prime numbers
 * @n: number
 *
 * Return: 1 if number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(2, n));
}
