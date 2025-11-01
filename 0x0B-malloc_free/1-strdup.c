#include <stdlib.h>
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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string
 *
 * Return: pointer to the duplicated string, NULL is str is NULL
 * or if memory is insufficient.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) - 1;
	dup = malloc(sizeof(*dup) * len);
	if (dup != NULL)
	{
		for (i = 0; i <= len; i++)
			dup[i] = str[i];
	}

	return (dup);
}

