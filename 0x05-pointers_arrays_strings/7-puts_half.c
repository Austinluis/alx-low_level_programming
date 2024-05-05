#include "main.h"

int _strlen(char *s);

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, n;
	len	= _strlen(str);
	n = (len - 1) / 2;

	for (i = n + 1; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
 * strlen - function to return the lenght of a string
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
