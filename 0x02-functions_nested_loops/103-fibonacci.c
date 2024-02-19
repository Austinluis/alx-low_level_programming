#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms of fibonacci numbers
 * considering numbers not exceeding 4,000,000
 *
 * Return: 0(sucess)
 */

int main(void)
{
	unsigned long int i = 2, a = 1, b = 2, c, d = 2;

	while (i < 32)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			d += c;
		}
		i++;
	}
	printf("%lu\n", d);
	return (0);
}
