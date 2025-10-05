#include "main.h"

/**
 * rot13 - function to encode a string in ROT-13.
 * @str: pointer to string
 *
 * Return: pointer to the encoded string.
 */

char *rot13(char *str)
{
	char check[] =
	{
		'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F',
		'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L',
		'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R',
		's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X',
		'y', 'Y', 'z', 'Z'
	};
	char rot13[] =
	{
		'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S',
		't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y',
		'z', 'Z', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
		'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K',
		'l', 'L', 'm', 'M'
	};

	int i, j, n;

	n = sizeof(check) / sizeof(check[0]);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (str[i] == check[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}
