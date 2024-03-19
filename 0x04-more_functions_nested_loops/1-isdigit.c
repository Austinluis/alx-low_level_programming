#include "main.h"

/**
 * _isdigit - function to check for digits
 * @c: character to check
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
		else
			j = 0;
	}

	return (j);
}
