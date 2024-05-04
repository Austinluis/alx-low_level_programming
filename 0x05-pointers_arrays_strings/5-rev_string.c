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
 * rev_string - function to print a string in reverse
 * @s: pointer to string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = _strlen(s), i, j;
	char c;

	for (i = len - 1, j = 0; i >= 0 && j < len; i--, j++)
	{
		if (i < j)
		{
			c = s[j];
			s[j] = s[i];
			s[i] = c;
		}
	}
}
