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
