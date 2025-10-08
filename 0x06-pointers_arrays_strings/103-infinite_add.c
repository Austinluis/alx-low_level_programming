#include "main.h"
#include <stdio.h>

/**
 * infinte_add - adds two numbers
 * @n1: number 1
 * @n2: number 
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to the result or
 * 0 if the result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count, carry, res, len1, len2, i, d1, d2;

	count = carry = 0;
	len1 = len2 = -1;
	r[count] = '\0';
	count++;

	for (i = 0; n1[i] != '\0'; i++)
		len1++;
	for (i = 0; n2[i] != '\0'; i++)
		len2++;

	while (len1 >= 0 || len2 >= 0 || carry > 0)
	{
		if (count == size_r)
			return (0);

		d1 = (len1 >= 0)? (n1[len1] - '0') : 0;
		d2 = (len2 >= 0)? (n2[len2] - '0') : 0;
	
		res = d1 + d2 + carry;

		for (i = count; i >= 0; i--)
			r[i] = (i - 1 >= 0)? r[i - 1] : ((res % 10) + '0');
		

		carry = res / 10;
		count++;
		len1--;
		len2--;
	}

	return (r);
}
