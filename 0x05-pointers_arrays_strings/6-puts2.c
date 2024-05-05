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
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)
{
	int i, len = _strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
