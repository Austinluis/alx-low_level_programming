#include "main.h"

/**
 * _isupper - function to check for uppercase characters
 * @c: character to check
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	int i, j;

	for (i = 'A'; i <= 'Z'; i++)
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
