#include <stdio.h>
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
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: 0 success, 1 error
 */

int main(int argc, char *argv[])
{
	int fir, sec, res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	fir = _atoi(*(argv + 1));
	sec = _atoi(*(argv + 2));
	res = fir * sec;

	printf("%d\n", res);
	return (0);
}
