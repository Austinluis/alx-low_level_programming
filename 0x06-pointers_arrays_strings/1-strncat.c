#include "main.h"

/**
 * _strncat - function to concatenate two strings.
 * @dest: first string, also string to append second string to.
 * @src: second string, also string to append to first string.
 * @n: max number of bytes to concatenate from src.
 *
 * Return: pointer to the appednded string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = len2 =0;

	while (dest[len1] != '\0')
		len1++;

	while (len2 <= n)
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len1] = '\0';

	return (dest);
}
