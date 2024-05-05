#include "main.h"

/**
 * _strlen - function to return the lenght of a string
 * @s: pointer to the string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, n = 1, j = 0, len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			n *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			j = (j * 10) + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
		}
	}

	j *= n;

	return (j);
}
