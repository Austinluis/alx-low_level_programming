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
 * _str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2,
 * and null terminated or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, len_1, len_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = _strlen(s1);
	len_2 = _strlen(s2) + 1;
	cat = malloc(sizeof(*cat) * (len_1 + len_2));

	if (cat != NULL)
	{
		for (i = 0; i <= len_1; i++)
			cat[i] = s1[i];
		for (i = len_1; i <= len_1 + len_2; i++)
			cat[i] = s2[i - len_1];
	}

	return (cat);
}
