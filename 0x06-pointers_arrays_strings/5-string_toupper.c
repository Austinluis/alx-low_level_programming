#include "main.h"

/**
 * _toupper - converts a lowercase letter to uppercase.
 * @c: lowercase letter.
 *
 * Return: converted uppercase letter.
 */

char _toupper(char c)
{
	char i;
	int pos = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			break;
		pos++;
	}

	return (char)(65 + pos);
}


/**
 * string_toupper - function to convert lowercase characters in strings
 * to upper case.
 * @str: pointer to string.
 *
 * Return: modified string.
 */

char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
			str[len] = _toupper(str[len]);
		len++;
	}

	return (str);
}
