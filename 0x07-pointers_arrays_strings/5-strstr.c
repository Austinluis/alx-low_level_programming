#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		n = i;
		for (j = 0; ; j++)
		{
			if (needle[j] == '\0')
				return (&haystack[i]);

			if (haystack[n] != needle[j])
				break;
			n++;
		}

	}

	return ('\0');
}
