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

/**
 * is_palindrome_helper - does comparison
 * @start: start
 * @end: end
 * @s: poniter to string
 *
 * Return: 0 if there is a mismatch, 1 if not
 */

int is_palindrome_helper(int start, int end, char *s)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(start + 1, end - 1, s));
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if it is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	return (is_palindrome_helper(0, _strlen_recursion(s) - 1, s));
}
