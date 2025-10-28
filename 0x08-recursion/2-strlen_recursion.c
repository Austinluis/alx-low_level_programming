#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 *
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
		return (0);
	n = _strlen_recursion(s + 1) + 1;
	return (n);
}
