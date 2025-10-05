#include "main.h"

/**
 * _strncpy - function to copy strings.
 * @dest: copies string pointed to by src into it.
 * @src: points to string to be copied.
 * @n: max number of bytes to copy from src.
 *
 * Return: pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = len2 = 0;

	while (len1 < n)
	{
		if (src[len2] != '\0')
		{
			dest[len1] = src[len2];
			len2++;
		}
		else
			dest[len1] = '\0';

		len1++;
	}

	return (dest);
}
