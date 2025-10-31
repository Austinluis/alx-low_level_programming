#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function to check for digits
 * @c: character to check
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
		else
			j = 0;
	}

	return (j);
}


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
 * _atoi - converts a string to an integer
 * @s: pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, n = 1, len = _strlen(s);
	unsigned int j = 0;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			n *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			j = (j * 10) + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
		}
	}

	j *= n;

	return (j);
}


/**
 * main - prints the addition of integers
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: 0 success, 1 error
 */

int main(int argc, char *argv[])
{
	int res = 0, n = 1;
	char *j;

	while (argc > n)
	{
		j = argv[n];
		while (*j != '\0')
		{
			if (!_isdigit((int)*j))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += _atoi(*(argv + n));
		n++;
	}

	printf("%d\n", res);
	return (0);
}
