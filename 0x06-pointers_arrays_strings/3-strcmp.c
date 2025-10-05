#include "main.h"

/**
 * _strcmp - function to compare two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: 0 if equal, negative if s2 is greater, positive if s1 is greater.
 */

int _strcmp(char *s1, char *s2)
{
	int len1, len2;
	int res;

	len1 = len2 = 0;

	while (s1[len1] != '\0' && s2[len2] != '\0')
	{
		if (s1[len1] != s2[len2])
			break;
		len1++;
		len2++;
	}

	res = (s1[len1] - '0') - (s2[len2] - '0');

	return (res);
}
