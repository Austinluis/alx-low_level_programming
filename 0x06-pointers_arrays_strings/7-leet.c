#include "main.h"

/**
 * leet - function to encode a string in leet.
 * @str: pointer to string
 *
 * Return: pointer to the encoded string.
 */

char *leet(char *str)
{
	char check[] = {'o', 'O', 'l', 'L', 't', 'T', 'e', 'E', 'a', 'A'};
	char leet[] = {'0', '0', '1', '1', '7', '7', '3', '3', '4', '4'};
	int i, j, n;

	n = sizeof(check) / sizeof(check[0]);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (str[i] == check[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}

	return (str);
}
