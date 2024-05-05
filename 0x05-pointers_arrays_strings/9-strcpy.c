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
 * _strcpy - copies string
 * @dest: array where strimg is copied
 * @src: array where string is copied from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = _strlen(src);

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
