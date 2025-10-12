#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string
 * @c: character to find
 *
 * Return: pointer to first occurence of the found character
 * or NULL if none found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c || (s[i] == '\0' && c == '\0'))
		{
			break;
			return (&s[i]);
		}
	}

	return ('\0');
}
