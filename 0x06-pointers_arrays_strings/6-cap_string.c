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

	return ((char)(65 + pos));
}

/**
 * punct - checks if input is a punctuation.
 * @c: character to check.
 *
 * Return: 1 if true, 0 if false
 */


int punct(char c)
{
	switch (c)
	{
		case ',': case ';': case '.': case '!': case '?':
		case '"': case '(': case ')': case '{': case '}':
		case ' ': case '\t': case '\n':
			return (1);
		default:
			return (0);
	}
}


/**
 * cap_string - function to capitalize all words of a string
 * @str: pointer to string.
 *
 * Return: modified string.
 */

char *cap_string(char *str)
{
	int len = 0, flag = 1;

	while (str[len] != '\0')
	{
		if (punct(str[len]) == 0)
		{
			if (str[len] >= 'a' && str[len] <= 'z' && flag == 1)
				str[len] = _toupper(str[len]);
			flag = 0;
		}
		else if (punct(str[len]) == 1)
			flag = 1;

		len++;
	}

	return (str);
}
